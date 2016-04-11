#ifndef ALLCHOOESFRAM_H
#define ALLCHOOESFRAM_H

#include <QFrame>
#include <QPainter>
#include <QPropertyAnimation>
#include <QAbstractButton>
#include <QStringList>
#include "songinfo.h"
namespace Ui {
class allchooesfram;
}

class allchooesfram : public QFrame
{
    Q_OBJECT

public:
    explicit allchooesfram(QWidget *parent = 0);
    ~allchooesfram();
    void setLinfo(QList<songInfo> *);
    void clearall();
    void setpagenum();     
    void setinfo(int);
    QString setonelineinfo(int);
    void showmove();
    void hidemove();
    //void disp();
signals:
    void hidede(int);
    void givesongname(QString);               //选择
    void givesongtofrist(QString);                //优先
public slots:
    void ButtonGrup(QAbstractButton *);
    void disp();
private slots:
    void on_pushButton_left_clicked();
    
    void on_pushButton_del_clicked();
    
    void on_pushButton_right_clicked();
    
private:
    void paintEvent(QPaintEvent *) ;
    Ui::allchooesfram *ui;
    QList<songInfo> *L_info ;
     int pagenum ;
     int curpage ;
     int Lsize ;
    
};

#endif // ALLCHOOESFRAM_H
