#ifndef SONGLIST_H
#define SONGLIST_H

#include <QFrame>
#include <songinfo.h>
namespace Ui {
class songlist;
}

class songlist : public QFrame
{
    Q_OBJECT

public:
    explicit songlist(QWidget *parent = 0);
    ~songlist();
   void setLinfo(QList<songInfo> *);
   void setpagenum();
   void changepagedisp();
   void clearall();
   void setlabelinfo(int);
public slots:
    void disp();
    void giveselect(QString);
    void givefrist(QString);
signals:
    void giveselects(QString);
    void givefrists(QString);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_clicked_2();

private:
    Ui::songlist *ui;
    QList<songInfo> *L_song ;
     int pagenum ;
     int curpage ;
     int Lsize ;
};

#endif // SONGLIST_H
