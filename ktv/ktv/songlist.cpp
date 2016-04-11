#include "songlist.h"
#include "ui_songlist.h"
#include  <QDebug>
songlist::songlist(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::songlist)
{
    ui->setupUi(this);
    connect(ui->widget,SIGNAL(frist(QString)),this,SLOT(givefrist(QString)));
    connect(ui->widget,SIGNAL(select(QString)),this,SLOT(giveselect(QString)));
    connect(ui->widget_2,SIGNAL(frist(QString)),this,SLOT(givefrist(QString)));
    connect(ui->widget_2,SIGNAL(select(QString)),this,SLOT(giveselect(QString)));
    connect(ui->widget_7,SIGNAL(frist(QString)),this,SLOT(givefrist(QString)));
    connect(ui->widget_7,SIGNAL(select(QString)),this,SLOT(giveselect(QString)));
    connect(ui->widget_4,SIGNAL(frist(QString)),this,SLOT(givefrist(QString)));
    connect(ui->widget_4,SIGNAL(select(QString)),this,SLOT(giveselect(QString)));
    connect(ui->widget_5,SIGNAL(frist(QString)),this,SLOT(givefrist(QString)));
    connect(ui->widget_5,SIGNAL(select(QString)),this,SLOT(giveselect(QString)));
    connect(ui->widget_6,SIGNAL(frist(QString)),this,SLOT(givefrist(QString)));
    connect(ui->widget_6,SIGNAL(select(QString)),this,SLOT(giveselect(QString)));

    connect(ui->pushButton,SIGNAL(clicked()),this ,SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this ,SLOT(on_pushButton_clicked_2()));

    pagenum = 0 ;
    curpage = 0 ;
}

songlist::~songlist()
{
    delete ui;
}
void songlist::givefrist(QString str)
{
    emit givefrists(str);
}
void songlist::giveselect(QString str)
{
    //qDebug()<<"select";
    emit giveselects(str);
}
void songlist::setLinfo(QList<songInfo> *L)
{
    L_song = L ;
}
void songlist::clearall()
{
        ui->widget_7->clearline();
            ui->widget_6->clearline();
            ui->widget_5->clearline();
            ui->widget_4->clearline();
            ui->widget_2->clearline();
            ui->widget->clearline() ;
}
void songlist::setpagenum()
{
    Lsize = L_song->size() ;
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
void songlist::disp()
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
}
void songlist::setlabelinfo(int num)
{
    clearall();
    switch (num) {
    case 6:
       ui->widget_7->setsonger(L_song->at(curpage*6+5));
    case 5:
        ui->widget_6->setsonger(L_song->at(curpage*6+4));
    case 4:
        ui->widget_5->setsonger(L_song->at(curpage*6+3));
     case 3:
        ui->widget_4->setsonger(L_song->at(curpage*6+2));
    case 2:
        ui->widget_2->setsonger(L_song->at(curpage*6+1));
    case 1:
        ui->widget->setsonger(L_song->at(curpage*6+0)) ;
    default:
        break;
    }
}
void songlist::on_pushButton_clicked()
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
        ui->label->setText(QString::number(curpage+1)+"/"+QString::number(pagenum));
     }
}

void songlist::on_pushButton_clicked_2()
{
    // qDebug()<<pagenum;
    if(pagenum >1)
    {

        if(curpage < pagenum-1)
        {
            curpage++ ;
           // qDebug()<<curpage<<Lsize;
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
         ui->label->setText(QString::number(curpage+1)+"/"+QString::number(pagenum));
    }

}
