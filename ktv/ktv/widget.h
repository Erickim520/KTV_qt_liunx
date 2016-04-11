#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QTimer>
#include <QMovie>
#include "movefunction.h"
#include "frame_py.h"
#include "data_db.h"
#include "songinfo.h"
#include "selectedsong.h"
#include "songerfram.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void showmove();
    void hidemove();
signals:
    void showed();               //显示已点歌曲
    void hideed();                      //影藏
    void begin(QString);            //开始
    void stop();                            //暂停
    void nextsong(QString);        //下一首
    void reviwesong(QString);        //重唱
    void original();                        //原唱
    void vocal ();                            //伴唱
    void volume_add();                  //音量加
    void volume_del();                  //音量减
    void serachsonger();                    //找歌手的信号
    void language(QString);                        //语种点歌
    void musictype(QString);                    //歌曲类型点歌
    void rank();                                            //排行榜点歌
protected slots:
     void nextsongname();                        //滚动条显示
    void changepage(QString);
    void givesongtofrist(QString);
    void givesongtoend(QString);
    void beginmplayer();
    void alldispshow();
    void hideeded(int);
    void nextstr();

    void chickedsong(QString);
    void chickedsongtofrist(QString);
    void delonesong(QString);
    void fristonesong(QString);

    void mixhavesong();
private slots:
    void on_pushButton_select_clicked();

    void on_pushButton_3_clicked();
    
    void on_pushButton_4_clicked();

    void on_pushButton_next_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_del_clicked();

    void on_pushButton_YB_clicked();

    void on_pushButton_mp_clicked();
    void buttonGroup(QAbstractButton*);
    void buttonGroup_2(QAbstractButton*);
private:
    void widgetInit();
    void paintEvent(QPaintEvent *);
    QString laod;
    movefunction *p1 ;
    Ui::Widget *ui;
    data_db *database  ;
    QPropertyAnimation *animation,*animation1;
    QTimer *time ;
    QTimer *time_disptop ;
   // QMovie *movie ;
    int flag ;
    QString curPlayersong ;                                 //当前播放歌曲
    QString curPlayersonglaod ;                         //当前播放歌曲地址
    QList<songInfo> L_serch ;                           //歌名
    QList<songInfo> L_Songer;                           //歌手
    QList<songInfo> L_Allinfo ;
    QList<songInfo> L_have ;                            //已点歌曲
    // selectedsong  *havesong ;                      //已点歌曲框
    QRect stratpos ;
    QRect endpos ;
};

#endif // WIDGET_H
