#include "mplayer.h"
#include "ui_mplayer.h"
#include <QDebug>
mplayer::mplayer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mplayer)
{
    ui->setupUi(this);
    myProcess= new  QProcess(this);
    time = new QTimer(this) ;
    time->setInterval(200);
    connect(time, SIGNAL(timeout()), this, SLOT(moveslior()));

    //ui->listView->setModel(&q);
    //q.setFilter(QDir::AllEntries);
    //ui->listView->setRootIndex(q.index(QDir::currentPath()+"/mv"));
    myProcess = new  QProcess(this);
    myProcess->setProcessChannelMode(QProcess::MergedChannels);
    ui->horizontalSlider_2->setMaximum(100);
    ui->horizontalSlider_2->setMinimum(0);
    //connect(myProcess,SIGNAL(finished(int)),this ,SLOT(myplayerstrat()));
    connect(myProcess,SIGNAL(readyReadStandardOutput()),this ,SLOT(readinfo()));
    connect(myProcess,SIGNAL(finished(int)),this ,SLOT(pleasenextone()));

    flag = true ;
}

mplayer::~mplayer()
{
    delete ui;
}
void mplayer::readinfo()
{
     QString str ;
    str =  myProcess->readLine();
    if(str.split("=").at(0) =="ANS_PERCENT_POSITION")
    {
        ui->horizontalSlider_2->setValue(str.split("=").at(1).toInt());
    }
}
void mplayer::moveslior()
{
     myProcess->write("get_percent_pos\n");
     //this->update();
}
void mplayer::pleasenextone()
{
    emit pleasenext();
}
void mplayer::beginMV(QString str)
{
    //this->update();
    myProcess->start("mplayer",QStringList()<<"-slave"<<"-quiet"<<"-wid"<<
                     QString::number(ui->frame_3->winId())<<str);
    time->start();
}
void mplayer::nextsong(QString str)
{
    time->stop();
    //this->update();
    myProcess->write(QString("loadfile %1 0 \n").arg(str).toStdString().c_str());
    time->start();
}
void mplayer::restart(QString str)
{
    time->stop();
    //this->update();
    myProcess->write(QString("loadfile %1 0 \n").arg(str).toStdString().c_str());
    time->start();
}
void mplayer::volumeadd()
{
    myProcess->write("volume +5\n");
}
void mplayer::volumedel()
{
    myProcess->write("volume -5\n");
}
void mplayer::originaled()                      //原唱
{
     myProcess->write("balance 1 1\n");
}
void mplayer::vocaled()                         //伴唱
{
      myProcess->write("balance -1 1\n");
}
void mplayer::stoped()                          //暂停
{
  if(flag)
  {
      time->stop();
      flag = !flag;
  }
  else
  {
      time->start();
      flag = !flag;
  }
  myProcess->write("pause\n");
}
