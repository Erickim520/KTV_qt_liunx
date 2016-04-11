#include "songerfram.h"
#include "ui_songerfram.h"
#include <QDebug>
songerfram::songerfram(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::songerfram)
{
    ui->setupUi(this);
    connect(ui->buttonGroup,SIGNAL(buttonClicked(QAbstractButton*)),this,SLOT(GrupButton(QAbstractButton*)));
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(work(QNetworkReply*)));

    ui->buttonGroup->setId(ui->pushButton_p1,0);
    ui->buttonGroup->setId(ui->pushButton_p2,1);
    ui->buttonGroup->setId(ui->pushButton_p3,2);
    ui->buttonGroup->setId(ui->pushButton_p4,3);
    ui->buttonGroup->setId(ui->pushButton_p5,4);
    ui->buttonGroup->setId(ui->pushButton_p6,5);
    ui->buttonGroup->setId(ui->pushButton_p7,6);
    ui->buttonGroup->setId(ui->pushButton_p8,7);
    ui->buttonGroup->setId(ui->pushButton_p9,8);
    ui->buttonGroup->setId(ui->pushButton_p10,9);

    curpage = 0 ;
    pagenum = 0 ;
}

songerfram::~songerfram()
{
    delete ui;
}
void songerfram::setLinfo(QList<songInfo> *L)
{
    L_songer= L ;
}
void songerfram::setpicload(QString str)
{
    picload = str ;
}
QString songerfram::dealstr(QString str)
{
    QString temp ;
    temp = str;
    temp.replace(7, 9, picload);
    return temp ;
}
void songerfram::GrupButton(QAbstractButton *button)
{
    for(int i = 0 ;i < 10 &&i<Lsize-curpage*10;i++)
    {
        if(ui->buttonGroup->button(i) == button)
        {
            //qDebug()<<L_songer->at(curpage*10+i).Si_id;
            emit onepeople(L_songer->at(curpage*10+i).Si_id);
        }
    }
}
void songerfram::dispsonger()
{
    setpagenum();
    if(Lsize>10)
    {
         howmanypic(10);
    }
    else
    {
         howmanypic(Lsize);
    }
}
void songerfram::on_pushButton_7_clicked()                      //zuo
{
    if(pagenum > 1)
    {
        if(curpage == 0)
        {
            curpage = 0  ;
            howmanypic(10);
        }
        else
        {
            curpage-- ;
            howmanypic(10);
        }
        ui->label_3->setText(QString::number(curpage+1)+"/"+QString::number(pagenum));
     }
}
void songerfram::on_pushButton_9_clicked()                      //you
{
        if(pagenum >1)
        {
            if(curpage < pagenum-1)
            {
                curpage++ ;
                if(Lsize-(10*curpage)>10)
                {
                     howmanypic(10) ;
                }
                else
                {
                     howmanypic(Lsize-(10*curpage)) ;
                }
            }
            else
            {
                curpage = 0 ;
                 howmanypic(10) ;
            }
             ui->label_3->setText(QString::number(curpage+1)+"/"+QString::number(pagenum));
        }
}
void songerfram::setpagenum()                                       //设置总页书
{
    Lsize = L_songer->size() ;
    if(Lsize>0 &&Lsize/10 == 0)
    {
        pagenum = 1 ;
    }
    else if(Lsize%10>0)
    {
          pagenum = Lsize/10+1 ;
    }
    else
     {
             pagenum = Lsize/10 ;
     }
    ui->label_3->setText("1/"+QString::number(pagenum));
}
void songerfram::howmanypic(int num)
{
    clearall();
    switch (num) {
    case 10:
        ui->label_n10->setText(L_songer->at(curpage*10+9).Si_name);
        manager->get(QNetworkRequest(QUrl(dealstr( L_songer->at(curpage*10+9).Si_photo_place))));
        ui->pushButton_p10->show();
    case 9:
        ui->label_n9->setText(L_songer->at(curpage*10+8).Si_name);
        manager->get(QNetworkRequest(QUrl(dealstr( L_songer->at(curpage*10+8).Si_photo_place))));
        ui->pushButton_p9->show();
    case 8:
        ui->label_n8->setText(L_songer->at(curpage*10+7).Si_name);
        manager->get(QNetworkRequest(QUrl(dealstr( L_songer->at(curpage*10+7).Si_photo_place))));
        ui->pushButton_p8->show();
    case 7:
        ui->label_n7->setText(L_songer->at(curpage*10+6).Si_name);
        manager->get(QNetworkRequest(QUrl(dealstr( L_songer->at(curpage*10+6).Si_photo_place))));
        ui->pushButton_p7->show();
    case 6:
        ui->label_n6->setText(L_songer->at(curpage*10+5).Si_name);
        manager->get(QNetworkRequest(QUrl(dealstr( L_songer->at(curpage*10+5).Si_photo_place))));
        ui->pushButton_p6->show();
    case 5:
        ui->label_n5->setText(L_songer->at(curpage*10+4).Si_name);
        manager->get(QNetworkRequest(QUrl(dealstr( L_songer->at(curpage*10+4).Si_photo_place))));
        ui->pushButton_p5->show();
    case 4:
        ui->label_n4->setText(L_songer->at(curpage*10+3).Si_name);
        manager->get(QNetworkRequest(QUrl(dealstr( L_songer->at(curpage*10+3).Si_photo_place))));
        ui->pushButton_p4->show();
    case 3:
        ui->label_n3->setText(L_songer->at(curpage*10+2).Si_name);
        manager->get(QNetworkRequest(QUrl(dealstr( L_songer->at(curpage*10+2).Si_photo_place))));
        ui->pushButton_p3->show();
    case 2:
        ui->label_n2->setText(L_songer->at(curpage*10+1).Si_name);
        manager->get(QNetworkRequest(QUrl(dealstr( L_songer->at(curpage*10+1).Si_photo_place))));
        ui->pushButton_p2->show();
    case 1:
        ui->label_n1->setText(L_songer->at(curpage*10).Si_name);
        manager->get(QNetworkRequest(QUrl(dealstr( L_songer->at(curpage*10).Si_photo_place))));
        ui->pushButton_p1->show();
    default:
        break;
    }
}
void songerfram::work(QNetworkReply *reply)
{
    if(reply->error() ==  QNetworkReply::NoError)
    {
        QPixmap pic ;
        pic.loadFromData(reply->readAll());
        for(int i = 0 ;i<10&& i < Lsize-curpage*10;i++)
        {
            if(QUrl(L_songer->at(curpage*10+i).Si_photo_place).fileName()==reply->url().fileName())
            {
                pic.save("1.jpg");
                 ui->buttonGroup->button(i)->setStyleSheet(QString("border-image: url(1.jpg)"));
            }
        }
    }
}



void songerfram::clearall()
{
    ui->label_n1->clear();
    ui->label_n2->clear();
    ui->label_n3->clear();
    ui->label_n4->clear();
    ui->label_n5->clear();
    ui->label_n6->clear();
    ui->label_n7->clear();
    ui->label_n8->clear();
    ui->label_n9->clear();
    ui->label_n10->clear();
    ui->pushButton_p1->hide();
    ui->pushButton_p2->hide();
    ui->pushButton_p3->hide();
    ui->pushButton_p4->hide();
    ui->pushButton_p5->hide();
    ui->pushButton_p6->hide();
    ui->pushButton_p7->hide();
    ui->pushButton_p8->hide();
    ui->pushButton_p9->hide();
    ui->pushButton_p10->hide();
}
