#ifndef SONGINFO_H
#define SONGINFO_H

#include <QObject>
class songInfo
{
public:
    songInfo();
    ~songInfo();
    int Si_id ;
    QString  Si_name;
    QString  Si_place;
    QString  Si_sex;
    QString  Si_photo_place;
    QString  Si_py;

     int So_id ;
     QString So_name ;
     QString So_lang ;
     QString So_tayp ;
     QString So_path;
     QString So_pinyin ;
     QString So_data ;
     QString So_remark ;
     QString So_times ;
     QString So_new ;
};

#endif // SONGINFO_H
