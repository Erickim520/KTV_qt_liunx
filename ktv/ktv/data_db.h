#ifndef DATA_DB_H
#define DATA_DB_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include "frame_py.h"
#include "songinfo.h"
#include <QVariant>
class data_db : public QObject
{
    Q_OBJECT
public:
    explicit data_db(QObject *parent = 0);
    ~data_db();
     void setlist(QList<songInfo> *);
     void setsonger(QList<songInfo> *);
     void setallinfoL(QList<songInfo> *);
signals:
        void finshed();
        void finshedsonger();
        void finshserch();
        void finishserachluaguage();
        void finisherachtype();
        void finishserachtimes();
public slots:
    void search_songname(QString);
    void search_songer();
    void songerchooes(int);
    void luaguage(QString);
    void musictype(QString);
    void ranked();
private:
    QSqlDatabase db ;
    QSqlQuery *query;
    QList<songInfo> *infoL ;
     QList<songInfo> *songerinfoL;
     QList<songInfo> *allinfoL ;
};



#endif // DATA_DB_H
