#include "data_db.h"
#include <QDebug>
data_db::data_db(QObject *parent) : QObject(parent)
{
    db = QSqlDatabase::addDatabase("QSQLITE")   ;
    db.setDatabaseName("ktv.db");
    if(!db.open())
    {
        qDebug("error!!");
        return;
    }
    query = new QSqlQuery(db);

}

data_db::~data_db()
{
    db.close();
}
void data_db::setlist(QList<songInfo> *L)
{
    infoL  =  L ;
}
void data_db::setsonger(QList<songInfo> *L)
{
    songerinfoL = L ;
}
 void data_db::setallinfoL(QList<songInfo> *L)
 {
     allinfoL = L ;
 }
void data_db::search_songer()
{
    songInfo  infosonger  ;
    query->exec("select * from SingerInfo;");
    songerinfoL->clear();    //清除链表
    while (query->next())
    {
        infosonger.Si_id = query->value(0).toInt();
        infosonger.Si_name= query->value(1).toString();
        infosonger.Si_place = query->value(2).toString();
        infosonger.Si_sex = query->value(3).toString();
        infosonger.Si_photo_place = query->value(4).toString();
        infosonger.Si_py = query->value(5).toString();
       
        songerinfoL->push_back(infosonger);
    }
    emit finshedsonger();
}
void data_db::songerchooes(int id)
{
    songInfo  info  ;
    query->exec(QString("select * from SongInfo where Si_id like '%1';").arg(id));
    allinfoL->clear();    //清除链表
    while (query->next())
    {
        info.So_id = query->value(0).toInt() ;
        info.So_name = query->value(1).toString() ;
        info.Si_name = query->value(2).toString() ;
        info.So_lang = query->value(3).toString() ;
        info.So_tayp = query->value(4).toString() ;
        info.So_path = query->value(5).toString() ;
        info.So_pinyin = query->value(6).toString() ;
        info.So_data = query->value(7).toString() ;
        info.So_remark = query->value(8).toString() ;
        info.So_times = query->value(9).toString() ;
        info.So_new = query->value(10).toString() ;
        info.Si_id = query->value(11).toInt() ;
        allinfoL->push_back(info);
    }
    emit finshserch();
}
void data_db::search_songname(QString  str)
{
    songInfo  info  ;
    query->exec(QString("select * from SongInfo where So_pinyin like '%1%';").arg(str));
    infoL->clear();    //清除链表
    while(query->next())
    {
        //ui->textEdit->setText(query->value(0).toString());    //+query.value(2).toString()+query.value(3).toString()
        info.So_id = query->value(0).toInt() ;
        info.So_name = query->value(1).toString() ;
        info.Si_name = query->value(2).toString() ;
        info.So_lang = query->value(3).toString() ;
        info.So_tayp = query->value(4).toString() ;
        info.So_path = query->value(5).toString() ;
        info.So_pinyin = query->value(6).toString() ;
        info.So_data = query->value(7).toString() ;
        info.So_remark = query->value(8).toString() ;
        info.So_times = query->value(9).toString() ;
        info.So_new = query->value(10).toString() ;
        info.Si_id = query->value(11).toInt() ;
        infoL->push_back(info);
    }
    emit finshed();
}
void data_db::luaguage(QString str)
{
    songInfo  info  ;
    query->exec(QString("select * from SongInfo where So_lang like '%1';").arg(str));
    allinfoL->clear();    //清除链表
    while (query->next())
    {
        info.So_id = query->value(0).toInt() ;
        info.So_name = query->value(1).toString() ;
        info.Si_name = query->value(2).toString() ;
        info.So_lang = query->value(3).toString() ;
        info.So_tayp = query->value(4).toString() ;
        info.So_path = query->value(5).toString() ;
        info.So_pinyin = query->value(6).toString() ;
        info.So_data = query->value(7).toString() ;
        info.So_remark = query->value(8).toString() ;
        info.So_times = query->value(9).toString() ;
        info.So_new = query->value(10).toString() ;
        info.Si_id = query->value(11).toInt() ;
        allinfoL->push_back(info);
    }
    emit finishserachluaguage() ;
}
void data_db::musictype(QString str)
{
    songInfo  info  ;
    query->exec(QString("select * from SongInfo where So_type like '%1';").arg(str));
    allinfoL->clear();    //清除链表
    while (query->next())
    {
        info.So_id = query->value(0).toInt() ;
        info.So_name = query->value(1).toString() ;
        info.Si_name = query->value(2).toString() ;
        info.So_lang = query->value(3).toString() ;
        info.So_tayp = query->value(4).toString() ;
        info.So_path = query->value(5).toString() ;
        info.So_pinyin = query->value(6).toString() ;
        info.So_data = query->value(7).toString() ;
        info.So_remark = query->value(8).toString() ;
        info.So_times = query->value(9).toString() ;
        info.So_new = query->value(10).toString() ;
        info.Si_id = query->value(11).toInt() ;
        allinfoL->push_back(info);
    }
    emit finisherachtype();
}
void data_db::ranked()
{
    songInfo  info  ;\
    allinfoL->clear();    //清除链表
     query->exec(QString("select * from SongInfo;"));
    while (query->next())
    {
        info.So_id = query->value(0).toInt() ;
        info.So_name = query->value(1).toString() ;
        info.Si_name = query->value(2).toString() ;
        info.So_lang = query->value(3).toString() ;
        info.So_tayp = query->value(4).toString() ;
        info.So_path = query->value(5).toString() ;
        info.So_pinyin = query->value(6).toString() ;
        info.So_data = query->value(7).toString() ;
        info.So_remark = query->value(8).toString() ;
        info.So_times = query->value(9).toString() ;
        info.So_new = query->value(10).toString() ;
        info.Si_id = query->value(11).toInt() ;
        allinfoL->push_back(info);
    }
    for(int i = 0 ;i < allinfoL->size();i++)
    {
        for(int j = i ;j< allinfoL->size();j++)
        {
            if(allinfoL->at(i).So_times<allinfoL->at(j).So_times)
            {
                allinfoL->swap(i,j);
            }
        }
    }
   emit finishserachtimes();

}
