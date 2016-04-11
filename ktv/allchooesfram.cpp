#include "allchooesfram.h"
#include "ui_allchooesfram.h"
#include <QDebug>
allchooesfram::allchooesfram(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::allchooesfram)
{
    ui->setupUi(this);
    connect(ui->buttonGroup,SIGNAL(buttonClicked(QAbstractButton*)),this,SLOT(ButtonGrup(QAbstractButton*)));
    ui->buttonGroup->setId(ui->pushButton_1,1);
    ui->buttonGroup->setId(ui->pushButton_2,2);
    ui->buttonGroup->setId(ui->pushButton_3,3);
    ui->buttonGroup->setId(ui->pushButton_4,4);
    ui->buttonGroup->setId(ui->pushButton_5,5);
    ui->buttonGroup->setId(ui->pushButton_6,6);
    
    pagenum = 0 ;
    curpage = 0 ;
}

allchooesfram::~allchooesfram()
{
    delete ui;
}
void allchooesfram::paintEvent(QPaintEvent *ev)                   //设置背景图片
{
    QPainter paint(this);
    paint.drawImage(QRect(0 , 0 ,this->width(),this->height()),QImage(":/a"));
}

void allchooesfram::ButtonGrup(QAbstractButton *button)
{
    QString str ;
    QStringList list ;
    if(button->text() !="优先")
    {
        if(button->text() != " ")
        {
           str = button->text() ;
           list =  str.split("  ", QString::SkipEmptyParts);
           emit givesongname(list.at(0));
        }
    }
    else
    {
        for(int i = 1 ; i <= 6 ;i++)
        {
            //qDebug()<<QString("pushButton_c%1").arg(i);
            if(button->objectName() == QString("pushButton_c%1").arg(i))
            {
                  str = ui->buttonGroup->button(i)->text() ;
                  list =  str.split("  ", QString::SkipEmptyParts);
                  // for(int i = 0 ; i < list.size();i++)
                  // {qDebug()<<list.at(i);}
                  emit givesongtofrist(list.at(0));
            }
        }
    }
}
void allchooesfram::setLinfo(QList<songInfo> *L)
{
    L_info = L ;
}
void allchooesfram::clearall()
{
    ui->pushButton_1->setText(" ");ui->pushButton_2->setText(" ");
    ui->pushButton_3->setText(" ");ui->pushButton_4->setText(" ");
    ui->pushButton_5->setText(" ");ui->pushButton_6->setText(" ");
       //ui->pushButton_1->hide();ui->pushButton_2->hide();ui->pushButton_3->hide();ui->pushButton_4->hide();ui->pushButton_5->hide();ui->pushButton_6->hide();
       // ui->pushButton_c1->hide();ui->pushButton_c2->hide();ui->pushButton_c3->hide();ui->pushButton_c4->hide();ui->pushButton_c5->hide();ui->pushButton_c6->hide();
}
void allchooesfram::setpagenum()
{
    Lsize = L_info->size() ;
    if(Lsize>0 &&Lsize/6 == 0)
    {
        pagenum = 1 ;
    }
    else if(Lsize%6>0)
    {
          pagenum = Lsize/6+1 ;
    }
    else
     {
             pagenum = Lsize/6 ;
     }
    ui->label->setText("1/"+QString::number(pagenum));
}
void allchooesfram::disp()
{
    setpagenum() ;
     if(Lsize>6)
     {
          setinfo(6);
     }
     else
     {
          setinfo(Lsize);
     }
}
void allchooesfram::setinfo(int num)
{
    clearall();
    switch (num) {
    case 6:
        ui->pushButton_6->setText(setonelineinfo(curpage*6+5));
        ui->pushButton_6->show();ui->pushButton_c6->show();
    case 5:
        ui->pushButton_5->setText(setonelineinfo(curpage*6+4));
        ui->pushButton_5->show();ui->pushButton_c5->show();
    case 4:
        ui->pushButton_4->setText(setonelineinfo(curpage*6+3));
        ui->pushButton_4->show();ui->pushButton_c4->show();
     case 3:
        ui->pushButton_3->setText(setonelineinfo(curpage*6+2));
        ui->pushButton_3->show();ui->pushButton_c3->show();
    case 2:
       ui->pushButton_2->setText(setonelineinfo(curpage*6+1));
       ui->pushButton_2->show();ui->pushButton_c2->show();
    case 1:
       ui->pushButton_1->setText(setonelineinfo(curpage*6));
       ui->pushButton_1->show();ui->pushButton_c1->show();
    default:
        break;
    }
}
QString allchooesfram::setonelineinfo(int num)
{
    QString str ;
    str = L_info->at(num).So_name +"  "+L_info->at(num).Si_name +"  "+ L_info->at(num).So_lang+"  "+L_info->at(num).So_tayp;
    return str;
}
void allchooesfram::on_pushButton_left_clicked()
{
    if(pagenum > 1)
    {
        if(curpage == 0)
        {
            curpage = 0  ;
            setinfo(6);
        }
        else
        {
            curpage-- ;
            setinfo(6);
        }
        ui->label->setText(QString::number(curpage+1)+"/"+QString::number(pagenum));
     }
}
void allchooesfram::on_pushButton_del_clicked()
{
    if(pagenum >1)
    {
        if(curpage < pagenum-1)
        {
            curpage++ ;
            if(Lsize-(6*curpage)>6)
            {
                 setinfo(6) ;
            }
            else
            {
                 setinfo(Lsize-(6*curpage)) ;
            }
        }
        else
        {
            curpage = 0 ;
            setinfo(6) ;
        }
         ui->label->setText(QString::number(curpage+1)+"/"+QString::number(pagenum));
    }
}

void allchooesfram::on_pushButton_right_clicked()
{
   emit hidede(1);
}
