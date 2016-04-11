#ifndef SELECTSONGLINE_H
#define SELECTSONGLINE_H

#include <QWidget>
#include <songinfo.h>
namespace Ui {
class selectsongline;
}

class selectsongline : public QWidget
{
    Q_OBJECT

public:
    explicit selectsongline(QWidget *parent = 0);
    ~selectsongline();
    void setsonger(songInfo) ;
     void clearline();
signals:
     void delonesong(QString);
     void fristonesong(QString);
private slots:
     void on_pushButton_clicked();

     void on_pushButton_2_clicked();

private:
    Ui::selectsongline *ui;
};

#endif // SELECTSONGLINE_H
