#ifndef SONGERFRAM_H
#define SONGERFRAM_H

#include <QFrame>
#include<QAbstractButton>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include "songinfo.h"
namespace Ui {
class songerfram;
}

class songerfram : public QFrame
{
    Q_OBJECT

public:
    explicit songerfram(QWidget *parent = 0);
    ~songerfram();
    void setLinfo(QList<songInfo> *);
    void setpicload(QString);
    void clearall();

public slots:
    void GrupButton(QAbstractButton*);

    void dispsonger();
    void work(QNetworkReply *);
signals:
    void onepeople(int);
private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

private:
    QString dealstr(QString str);
    void howmanypic(int num);
    void setpagenum();
    Ui::songerfram *ui;
    QNetworkAccessManager *manager;
    QList<songInfo> *L_songer;
    QString picload ;
    int curpage ;
    int pagenum ;
    int Lsize ;
};

#endif // SONGERFRAM_H
