#ifndef SONGLINE_H
#define SONGLINE_H

#include <QWidget>
#include "songinfo.h"
namespace Ui {
class songline;
}

class songline : public QWidget
{
    Q_OBJECT

public:
    explicit songline(QWidget *parent = 0);
    ~songline();
   void setsonger(songInfo) ;
   void clearline();
private slots:
   void on_pushButton_clicked();
   void on_pushButton_2_clicked();

signals:
   void select(QString);
   void frist(QString);
private:
    Ui::songline *ui;
    songInfo *temp ;
};

#endif // SONGLINE_H
