#include "selectsongline.h"
#include "ui_selectsongline.h"
#include <QStringList>
selectsongline::selectsongline(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::selectsongline)
{
    ui->setupUi(this);
    //connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
   //connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(on_pushButton_2_clicked()));
}

selectsongline::~selectsongline()
{
    delete ui;
}
void selectsongline::setsonger(songInfo songer)
{
    ui->label->setText(QString("%1   %2   %3").arg(songer.So_name).arg(songer.Si_name).arg(songer.So_lang));
    ui->pushButton->show();
    ui->pushButton_2->show();
}
void  selectsongline::clearline()
{
    ui->label->clear();
    ui->pushButton->hide();
    ui->pushButton_2->hide();
}

void selectsongline::on_pushButton_clicked()
{
    QString str ;
    QStringList list ;
    str = ui->label->text() ;
    list =  str.split("   ", QString::SkipEmptyParts);
    emit delonesong(list.at(0));
}

void selectsongline::on_pushButton_2_clicked()
{
    QString str ;
    QStringList list ;
    str = ui->label->text() ;
    list =  str.split("   ", QString::SkipEmptyParts);
    emit fristonesong(list.at(0));
}
