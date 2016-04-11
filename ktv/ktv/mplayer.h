#ifndef MPLAYER_H
#define MPLAYER_H

#include <QWidget>
#include<QProcess>
#include <QTimer>
namespace Ui {
class mplayer;
}

class mplayer : public QWidget
{
    Q_OBJECT

public:
    explicit mplayer(QWidget *parent = 0);
    ~mplayer();
public slots:
    void beginMV(QString);
    void moveslior();
    void readinfo();
    void nextsong(QString);           //下一首
    void restart(QString);                //重唱
    void volumeadd();
    void volumedel();
    void vocaled();                     //伴唱
    void originaled();                  //原唱
    void stoped();                          //暂停
    void pleasenextone();
signals:
    void pleasenext();
private:
    Ui::mplayer *ui;
    QProcess *myProcess;
    QTimer *time ;
    bool flag ;
};

#endif // MPLAYER_H
