#ifndef SELECTEDSONG_H
#define SELECTEDSONG_H

#include <QFrame>
#include <QPropertyAnimation>
#include <QPainter>
#include "selectsongline.h"
#include "songinfo.h"
namespace Ui {
class selectedsong;
}

class selectedsong : public QFrame
{
    Q_OBJECT

public:
    explicit selectedsong(QWidget *parent = 0);
    ~selectedsong();
    void sethaveinfo(QList<songInfo> *);
     //void showmove();                              //移动一个frame
    // void hidemove();

     void setpagenum();
     void clearall();
     void setlabelinfo(int);
public slots:
   void disp();
   void delonesong_slot(QString);
   void fristonesong_slot(QString);
 signals:
   void hidemove_sig(int);
   void delonesong_sig(QString);
   void fristonesong_sig(QString);
   void mixhave();
private slots:
   void on_pushButton_4_clicked();

   void on_pushButton_clicked();

   void on_pushButton_2_clicked();

   void on_pushButton_mix_clicked();

private:
   void paintEvent(QPaintEvent *);
    Ui::selectedsong *ui;
    QList<songInfo> *L_haveinfo ;
    QPropertyAnimation *animation;
    QRect startpos ;
    QRect endpos ;

    int pagenum ;
    int curpage ;
    int Lsize ;
};

#endif // SELECTEDSONG_H
