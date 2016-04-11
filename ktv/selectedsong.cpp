#include "selectedsong.h"
#include "ui_selectedsong.h"
#include <QDebug>
selectedsong::selectedsong(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::selectedsong)
{
    ui->setupUi(this);
    connect(ui->widget,SIGNAL(delonesong(QString)),this, SLOT(delonesong_slot(QString)));
    connect(ui->widget,SIGNAL(fristonesong(QString)),this, SLOT(fristonesong_slot(QString)));
    connect(ui->widget_2,SIGNAL(delonesong(QString)),this,SLOT(delonesong_slot(QString)));
    connect(ui->widget_2,SIGNAL(fristonesong(QString)),this,SLOT(fristonesong_slot(QString)));
    connect(ui->widget_3,SIGNAL(delonesong(QString)),this,SLOT(delonesong_slot(QString)));
    connect(ui->widget_3,SIGNAL(fristonesong(QString)),this,SLOT(fristonesong_slot(QString)));
    connect(ui->widget_4,SIGNAL(delonesong(QString)),this,SLOT(delonesong_slot(QString)));
    connect(ui->widget_4,SIGNAL(fristonesong(QString)),this,SLOT(fristonesong_slot(QString)));
    connect(ui->widget_5,SIGNAL(delonesong(QString)),this,SLOT(delonesong_slot(QString)));
    connect(ui->widget_5,SIGNAL(fristonesong(QString)),this,SLOT(fristonesong_slot(QString)));
    connect(ui->widget_6,SIGNAL(delonesong(QString)),this,SLOT(delonesong_slot(QString)));
    connect(ui->widget_6,SIGNAL(fristonesong(QString)),this,SLOT(fristonesong_slot(QString)));

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(on_pushButton_2_clicked()));
   pagenum = 0 ;
    curpage = 0  ;
}

selectedsong::~selectedsong()
{
    delete ui;
}
void selectedsong::delonesong_slot(QString str)
{
    emit delonesong_sig(str);
}
void selectedsong::fristonesong_slot(QString str)
{
    emit fristonesong_sig(str);
}
void selectedsong::sethaveinfo(QList<songInfo> *L)
{
    L_haveinfo = L ;
}
void selectedsong::disp()
{
    setpagenum() ;
   if(Lsize>6)
   {
        setlabelinfo(6);
   }
   else
   {
        setlabelinfo(Lsize);
   }
    ui->label->setText("已点歌曲数"+QString::number(L_haveinfo->size()));
}
void selectedsong::clearall()
{
            ui->widget_3->clearline();
            ui->widget_6->clearline();
            ui->widget_5->clearline();
            ui->widget_4->clearline();
            ui->widget_2->clearline();
            ui->widget->clearline() ;
}
void selectedsong::setpagenum()
{
    Lsize = L_haveinfo->size() ;
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
    ui->label_2->setText("1/"+QString::number(pagenum));
}
void selectedsong::setlabelinfo(int num)
{
    clearall();
    switch (num) {
    case 6:
       ui->widget_6->setsonger(L_haveinfo->at(curpage*6+5));
    case 5:
        ui->widget_5->setsonger(L_haveinfo->at(curpage*6+4));
    case 4:
        ui->widget_4->setsonger(L_haveinfo->at(curpage*6+3));
     case 3:
        ui->widget_3->setsonger(L_haveinfo->at(curpage*6+2));
    case 2:
        ui->widget_2->setsonger(L_haveinfo->at(curpage*6+1));
    case 1:
        ui->widget->setsonger(L_haveinfo->at(curpage*6+0)) ;
    default:
        break;
    }
}

void selectedsong::on_pushButton_4_clicked()
{
    emit hidemove_sig(2);
}
void selectedsong::paintEvent(QPaintEvent *ev)                   //设置背景图片
{
    QPainter paint(this);
    paint.drawImage(QRect(0 , 0 ,this->width(),this->height()),QImage(":/yidian"));
}

void selectedsong::on_pushButton_clicked()
{
    if(pagenum > 1)
    {
        if(curpage == 0)
        {
            curpage = 0  ;
            setlabelinfo(6);
        }
        else
        {
            curpage-- ;
            setlabelinfo(6);
        }
        ui->label_2->setText(QString::number(curpage+1)+"/"+QString::number(pagenum));
     }
}

void selectedsong::on_pushButton_2_clicked()
{
    if(pagenum >1)
    {
        if(curpage < pagenum-1)
        {
            curpage++ ;
            if(Lsize-(6*curpage)>6)
            {
                 setlabelinfo(6) ;
            }
            else
            {
                 setlabelinfo(Lsize-(6*curpage)) ;
            }
        }
        else
        {
            curpage = 0 ;
             setlabelinfo(6) ;
        }
         ui->label_2->setText(QString::number(curpage+1)+"/"+QString::number(pagenum));
    }
}

void selectedsong::on_pushButton_mix_clicked()
{
    emit mixhave();
}
