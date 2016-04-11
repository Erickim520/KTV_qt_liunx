#include "frame_py.h"
#include "ui_frame_py.h"

Frame_py::Frame_py(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_py)
{
    ui->setupUi(this);
    connect(ui->buttonGroup,SIGNAL(buttonClicked(QAbstractButton*)),this,SLOT(QButtonGroup_py(QAbstractButton*)));
    ui->lineEdit->setReadOnly(true);

}

Frame_py::~Frame_py()
{
    delete ui;
}
void  Frame_py::QButtonGroup_py(QAbstractButton *button)
{
    if(button->text() =="ce")
    {
        ui->lineEdit->clear();
    }
    else if(button->text() =="back")
    {
         QString str = ui->lineEdit->text();
         str.chop(1);
        ui->lineEdit->setText(str);
    }
    else
    {
         ui->lineEdit->setText(ui->lineEdit->text()+button->text());
    }
    emit signal_py(ui->lineEdit->text());
}
