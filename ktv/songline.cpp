#include "songline.h"
#include "ui_songline.h"

songline::songline(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::songline)
{
    ui->setupUi(this);

}

songline::~songline()
{
    delete ui;
}
void songline::clearline()
{
    ui->label->clear();
    ui->label_2->clear();
    ui->label_3->clear();
    ui->label_4->clear();

    ui->pushButton->hide();
    ui->pushButton_2->hide();
}

void songline::setsonger(songInfo songer)
{
    ui->label->setText(QString::number(songer.So_id));
    ui->label_2->setText(songer.So_name);
    ui->label_3->setText(songer.Si_name);
    ui->label_4->setText(songer.So_lang);

    ui->pushButton->show();
    ui->pushButton_2->show();
}

void songline::on_pushButton_clicked()
{
    emit select(ui->label_2->text());
}

void songline::on_pushButton_2_clicked()
{
    emit frist(ui->label_2->text());
}
