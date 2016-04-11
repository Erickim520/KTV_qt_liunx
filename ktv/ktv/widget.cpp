#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

     laod = "192.168.0.29" ;
    ui->pushButton_3->setCheckable(true);
    ui->pushButton_select->setCheckable(true);
    ui->pushButton_2->setCheckable(true);
    ui->pushButton_YB->setCheckable(true);
    animation = new QPropertyAnimation(ui->frame_4,"geometry");
    animation->setDuration(500);
    animation->setEasingCurve(QEasingCurve::InCubic);

    animation1 = new QPropertyAnimation(ui->frame_3,"geometry");
    animation1->setDuration(500);
    animation1->setEasingCurve(QEasingCurve::InCubic);

    time = new QTimer(this) ;
    time->setInterval(1000);
    connect(time,SIGNAL(timeout()),this,SLOT(beginmplayer()));

    time_disptop = new QTimer(this) ;
    time_disptop->setInterval(1000);
    connect(time_disptop,SIGNAL(timeout()),this,SLOT(nextsongname()));


    ui->pushButton_add->hide();                          //音量调节条
    ui->pushButton_del->hide();

    p1 =  new movefunction(ui->page);
    database = new data_db();
    database->setlist(&L_serch);
    ui->frame->setLinfo(&L_serch);
    database->setsonger(&L_Songer);
    ui->frame_6->setLinfo(&L_Songer);
    database->setallinfoL(&L_Allinfo);
    ui->frame_3->sethaveinfo(&L_have);
    ui->frame_3->hide();
    ui->frame_4->hide();                    //所有点歌信息框
    ui->frame_4->setLinfo(&L_Allinfo);
    ui->frame_6->setpicload(laod);

    connect(p1,SIGNAL(funcpage(QString)),this , SLOT(changepage(QString)));
    connect(ui->frame_2,SIGNAL(signal_py(QString)),database,SLOT(search_songname(QString)));
    connect(database,SIGNAL(finshed()),ui->frame,SLOT(disp()));
    connect(this,SIGNAL(serachsonger()),database,SLOT(search_songer()));                        //找出所有歌手的信号
    connect(database,SIGNAL(finshedsonger()),ui->frame_6,SLOT(dispsonger()));
    connect(ui->frame_6,SIGNAL(onepeople(int)),database,SLOT(songerchooes(int)));            //歌手点歌的槽函数
    connect(database,SIGNAL(finshserch()),ui->frame_4,SLOT(disp()));
    connect(database,SIGNAL(finshserch()),this , SLOT(alldispshow()));
    connect(ui->frame_4,SIGNAL(hidede(int)),this,SLOT(hideeded(int)));                          //已点歌曲的信号
    connect(ui->frame_4,SIGNAL(givesongname(QString)),this,SLOT(chickedsong(QString)));     //点歌到已点歌曲链表
    connect(ui->frame_4,SIGNAL(givesongtofrist(QString)),this,SLOT(chickedsongtofrist(QString)));

    connect(this,SIGNAL(language(QString)),database,SLOT(luaguage(QString)));                                       //语种点歌
    connect(database,SIGNAL(finishserachluaguage()),ui->frame_4,SLOT(disp()));
    connect(database,SIGNAL(finishserachluaguage()),this,SLOT(alldispshow()));

    connect(this,SIGNAL(musictype(QString)),database,SLOT(musictype(QString)));                                   //歌曲类型点歌
    connect(database,SIGNAL(finisherachtype()),ui->frame_4,SLOT(disp()));
    connect(database,SIGNAL(finisherachtype()),this,SLOT(alldispshow()));

    connect(this,SIGNAL(rank()),database,SLOT(ranked()));                                                                           //排行榜点歌
    connect(database,SIGNAL(finishserachtimes()),ui->frame_4,SLOT(disp()));
    connect(database,SIGNAL(finishserachtimes()),this,SLOT(alldispshow()));

    connect(ui->frame,SIGNAL(givefrists(QString)),this,SLOT(givesongtofrist(QString)));
    connect(ui->frame,SIGNAL(giveselects(QString)),this,SLOT(givesongtoend(QString)));

    connect(this,SIGNAL(showed()),ui->frame_3,SLOT(disp()));                                    //显示已点歌曲的信号
    connect(ui->frame_3,SIGNAL(hidemove_sig(int)),this,SLOT(hideeded(int)));
    connect(ui->frame_3,SIGNAL(delonesong_sig(QString)),this,SLOT(delonesong(QString)));
    connect(ui->frame_3,SIGNAL(fristonesong_sig(QString)),this,SLOT(fristonesong(QString)));
     connect(ui->frame_3,SIGNAL(mixhave()),this,SLOT(mixhavesong()));                   //乱序

    widgetInit();

    flag = 0 ;
    stratpos = QRect(5,5,10,10);
    endpos = QRect(10,10,this->width()*3/5,this->height()*4/5);
    time->start();
    time_disptop->start();
}

Widget::~Widget()
{
    delete ui;
}
void Widget::widgetInit()
{
    QGraphicsOpacityEffect *effect = new QGraphicsOpacityEffect;
    effect->setOpacity(0.6);
    ui->pushButton_yueyu->setGraphicsEffect(effect);
    ui->pushButton_YB->setGraphicsEffect(effect);
    ui->pushButton_select->setGraphicsEffect(effect);
    ui->pushButton_next->setGraphicsEffect(effect);
    ui->pushButton_mp->setGraphicsEffect(effect);
    ui->pushButton_lx->setGraphicsEffect(effect);
    ui->pushButton_jd->setGraphicsEffect(effect);
    ui->pushButton_huayu->setGraphicsEffect(effect);
    ui->pushButton_han->setGraphicsEffect(effect);
    ui->pushButton_english->setGraphicsEffect(effect);
    ui->pushButton_del->setGraphicsEffect(effect);
    ui->pushButton_add->setGraphicsEffect(effect);
    ui->pushButton_9->setGraphicsEffect(effect);
    ui->pushButton_8->setGraphicsEffect(effect);
    ui->pushButton_6->setGraphicsEffect(effect);
    ui->pushButton_5->setGraphicsEffect(effect);
    ui->pushButton_4->setGraphicsEffect(effect);
    ui->pushButton_3->setGraphicsEffect(effect);
    ui->pushButton_2->setGraphicsEffect(effect);

    connect(ui->widget,SIGNAL(pleasenext()),this,SLOT(nextstr()));
    connect(this,SIGNAL(begin(QString)),ui->widget,SLOT(beginMV(QString)));                //l链接开始信号到MV的开始放歌
    connect(this,SIGNAL(stop()),ui->widget,SLOT(stoped()));
    connect(this,SIGNAL(nextsong(QString)),ui->widget,SLOT(nextsong(QString)));
    connect(this,SIGNAL(reviwesong(QString)),ui->widget,SLOT(restart(QString)));
    connect(this,SIGNAL(volume_add()),ui->widget,SLOT(volumeadd()));
    connect(this,SIGNAL(volume_del()),ui->widget,SLOT(volumedel()));
    connect(this,SIGNAL(vocal()),ui->widget,SLOT(vocaled()));                               //伴唱
    connect(this,SIGNAL(original()),ui->widget,SLOT(originaled()));                       //原唱
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(on_pushButton_3_clicked()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(on_pushButton_4_clicked()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(on_pushButton_6_clicked()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(on_pushButton_2_clicked()));
    connect(ui->pushButton_del,SIGNAL(clicked()),this,SLOT(on_pushButton_del_clicked()));
    connect(ui->pushButton_YB,SIGNAL(clicked()),this,SLOT(on_pushButton_YB_clicked()));
    //connect(ui->pushButton_mp,SIGNAL(clicked()),this,SLOT(on_pushButton_mp_clicked()));
    connect(ui->buttonGroup,SIGNAL(buttonClicked(QAbstractButton*)),this,SLOT(buttonGroup(QAbstractButton*)));
    connect(ui->buttonGroup_2,SIGNAL(buttonClicked(QAbstractButton*)),this,SLOT(buttonGroup_2(QAbstractButton*)));
}
//槽信号选择歌曲信息放到已点歌曲的链表里面----------------------------------------------------------
void Widget::givesongtofrist(QString str)
{
    for(int i = 0 ; i < L_serch.size();i++)
    {
        if(L_serch.at(i).So_name==str)
        {
            L_have.push_front(L_serch.at(i));
        }
    }
}
void Widget::givesongtoend(QString str)
{
    for(int i = 0 ; i < L_serch.size();i++)
    {
        if(L_serch.at(i).So_name==str)
        {
            L_have.push_back(L_serch.at(i));
        }
    }
}
void Widget::chickedsong(QString str)
{
    for(int i = 0 ; i < L_Allinfo.size();i++)
    {
        if(L_Allinfo.at(i).So_name == str)
        {
            L_have.push_back(L_Allinfo.at(i));
        }
    }
}
void Widget::chickedsongtofrist(QString str)
{
    for(int i = 0 ; i < L_Allinfo.size();i++)
    {
        if(L_Allinfo.at(i).So_name == str)
        {
            L_have.push_front(L_Allinfo.at(i));
        }
    }
}
/**************************************************************/
void Widget::fristonesong(QString str)
{
    for(int i = 0 ; i < L_have.size() ; i++)
    {
        if(L_have.at(i).So_name == str)
        {
            qDebug()<<L_have.at(i).So_name;
            L_have.move(i, 0);
            emit showed();
        }
    }
}
void Widget::delonesong(QString str)
{
    for(int i = 0 ; i < L_have.size(); i++)
    {
        if(L_have.at(i).So_name == str)
        {
            qDebug()<<L_have.at(i).So_name;
            L_have.removeAt(i);
            emit showed();
        }
    }
}
void Widget::alldispshow()
{
        ui->frame_4->show();
        animation->setStartValue(stratpos);
        animation->setEndValue(endpos);
        animation->start();
}
void Widget::hideeded(int n)
{
    if(n==1)
    {
        animation->setStartValue(endpos);
        animation->setEndValue(stratpos);
        animation->start();
        ui->frame_4->hide();
    }
    if(n==2)
    {
        animation1->setStartValue(endpos);
        animation1->setEndValue(stratpos);
        animation1->start();
        ui->frame_3->hide();
    }
}
void Widget::buttonGroup(QAbstractButton *button)
{
    if(button->objectName() == "pushButton_huayu")
    {
        emit language("国语");
    }
    if(button->objectName() == "pushButton_yueyu")
    {
        emit language("粤语");
    }

}
void Widget::buttonGroup_2(QAbstractButton *button)
{
    if(button->objectName() == "pushButton_jd")
    {
        emit musictype("经典老歌");
    }
    if(button->objectName() == "pushButton_lx")
    {
        emit musictype("流行金曲");
    }
}

void Widget::changepage(QString str)
{    //13-18
   if(str == "pushButton_13")
   {
        ui->stackedWidget->setCurrentIndex(1);
   }
    if(str == "pushButton_14")
    {
         ui->stackedWidget->setCurrentIndex(2);
         emit serachsonger();
    }
    if(str == "pushButton_15")
    {
         ui->stackedWidget->setCurrentIndex(3);
    }
    if(str == "pushButton_16")
    {
         ui->stackedWidget->setCurrentIndex(4);
    }
    if(str == "pushButton_17")
    {
         ui->stackedWidget->setCurrentIndex(5);
    }
    if(str == "pushButton_18")
    {
         ui->stackedWidget->setCurrentIndex(6);
         emit rank();
    }
}

void Widget::paintEvent(QPaintEvent *ev)                   //设置背景图片
{
    QPainter paint(this);
    paint.drawImage(QRect(0 , 0 ,this->width(),this->height()),QImage(":/1"));
}

void Widget::on_pushButton_select_clicked()                         //已点歌曲
{
   if(ui->pushButton_select->isChecked())
   {
       emit showed();
       ui->frame_3->show();
       animation1->setStartValue(stratpos);
       animation1->setEndValue(endpos);
       animation1->start();
   }
   else
    {
       animation1->setStartValue(endpos);
       animation1->setEndValue(stratpos);
       animation1->start();
       ui->frame_3->hide();
    }
}
void Widget::beginmplayer()
{
    if(flag == 0)
    {
        ui->pushButton_3->setStyleSheet("border-image: url(:/stop);");
        if(!L_have.isEmpty())
        {
            flag = 1 ;
            curPlayersonglaod = L_have.at(0).So_path;
            curPlayersonglaod.replace(7, 9, laod);
            curPlayersong = L_have.at(0).So_name ;
            ui->label_cursong->setText("当前正在播放："+curPlayersong);
            L_have.removeAt(0);
            if(!L_have.empty())
            {
                ui->label_cursong->setText(ui->label_cursong->text()+"    "+"下一首:"+L_have.at(0).So_name);
            }
            emit begin(curPlayersonglaod);
        }
        else
        {
            ui->pushButton_3->setStyleSheet("border-image: url(:/star);");
            ui->label_cursong->setText("已点歌曲里面没有歌了!!!!!");
        }
     }
}
void Widget::nextstr()
{
   flag = 0 ;
}
void Widget::on_pushButton_3_clicked()                              //开始暂停
{
    if(ui->pushButton_3->isChecked())
    {
        ui->pushButton_3->setStyleSheet("border-image: url(:/image/bfzn_stop.png);");
        //ui->stackedWidget->setCurrentIndex(7);
    }
    else
    {
        ui->pushButton_3->setStyleSheet("border-image: url(:/image/bfzn_begin.png);");
    }
    emit stop();
}

void Widget::on_pushButton_4_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_pushButton_next_clicked()               //切歌
{
    if(L_have.size()>0)
    {
        curPlayersonglaod = L_have.at(0).So_path;
        curPlayersonglaod.replace(7, 9, laod);
        curPlayersong = L_have.at(0).So_name ;
        ui->label_cursong->setText("当前正在播放："+curPlayersong);
        L_have.removeAt(0);
        if(!L_have.empty())
        {
            ui->label_cursong->setText(ui->label_cursong->text()+"    "+"下一首:"+L_have.at(0).So_name);
        }
        emit nextsong(curPlayersonglaod);
    }
}
void Widget::nextsongname()
{
     if(ui->label_cursong->x()>this->width()-10)
     {
         ui->label_cursong->move(10,10);
     }
     else
     {
          ui->label_cursong->move(ui->label_cursong->x()+5,ui->label_cursong->y());
     }
}
void Widget::on_pushButton_6_clicked()                      //重唱
{
    if(flag == 1)
    {
        //ui->label_cursong->setText("当前正在播放："+curPlayersong);
       emit reviwesong(curPlayersonglaod);
    }
}
void Widget::on_pushButton_2_clicked()                          //音量调节
{
    if(ui->pushButton_2->isChecked())
    {
        ui->pushButton_add->show();                          //音量调节条
        ui->pushButton_del->show();
    }
    else
    {
        ui->pushButton_add->hide();                          //音量调节条
        ui->pushButton_del->hide();
    }
}
void Widget::on_pushButton_add_clicked()                    //音量加
{
    emit  volume_add();
}

void Widget::on_pushButton_del_clicked()
{
    emit volume_del();
}

void Widget::on_pushButton_YB_clicked()
{
    if(ui->pushButton_YB->isChecked())
    {
        ui->pushButton_YB->setText("原唱");
        emit original();
    }
    else
    {
        ui->pushButton_YB->setText("伴唱");
        emit vocal();
    }
}

void Widget::on_pushButton_mp_clicked()
{
     ui->stackedWidget->setCurrentIndex(7);
}
void Widget::mixhavesong()
{
    if( L_have.size() > 1)
    {
        for(int i = 0 ;i < L_have.size() ;i++)
        {
              L_have.swap(qrand()%L_have.size() , qrand()%L_have.size());
        }
    }
    emit showed();
}
