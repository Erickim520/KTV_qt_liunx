#include "movefunction.h"
#include "ui_movefunction.h"
#include<QDebug>
movefunction::movefunction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::movefunction)
{
    ui->setupUi(this);
    button[0] = ui->pushButton_13;
    button[1] = ui->pushButton_14;
    button[2] = ui->pushButton_15;
    button[3] = ui->pushButton_16;
    button[4] = ui->pushButton_17;
    button[5] = ui->pushButton_18;
    if(L.isEmpty())
   {
        L<<ui->pushButton_13<<ui->pushButton_14<<ui->pushButton_15<<ui->pushButton_16<<ui->pushButton_17<<ui->pushButton_18 ;
    }
    actgroup = new QParallelAnimationGroup;

    for(int i = 0 ; i < 6 ; i++)
    {
        data[i] = new QRect(button[i]->x(),button[i]->y(),button[i]->width(),button[i]->height());
        animation[i] = new QPropertyAnimation(button[i],"geometry");
        animation[i]->setDuration(1000);
        animation[i]->setEasingCurve(QEasingCurve::OutExpo);
        actgroup->addAnimation(animation[i]);
    }
   //设置透明
    QGraphicsOpacityEffect *effect = new QGraphicsOpacityEffect;
    effect->setOpacity(0.6);
    ui->pushButton_13->setGraphicsEffect(effect);
    ui->pushButton_14->setGraphicsEffect(effect);
    ui->pushButton_15->setGraphicsEffect(effect);
    ui->pushButton_16->setGraphicsEffect(effect);
    ui->pushButton_17->setGraphicsEffect(effect);
    ui->pushButton_18->setGraphicsEffect(effect);
    connect(ui->buttonGroup,SIGNAL(buttonClicked(QAbstractButton*)),this,SLOT(buttonGroup_x(QAbstractButton*)));
    tmpbutton = ui->pushButton_18 ;
}

movefunction::~movefunction()
{
    delete ui;
}

void movefunction::setStatepos()
{
    for(int  i  = 0 ; i < L.size();i++)
    {
        animation[i]->setStartValue(QRect(button[i]->x(),button[i]->y(),
                                          button[i]->width(),button[i]->height()));
     }
}
void movefunction::setEndpos()
{

    for(int  i  = 0 ; i < L.size();i++)
    {
            for(int j =0; j < 6 ; j++)
            {
                if(L.at(i) == button[j])
                {
                    animation[j]->setEndValue(*data[i]);
                }
            }

     }
}

void movefunction::buttonGroup_x(QAbstractButton *butt)
{
            setStatepos();
            L.removeOne(butt);
            L.push_back(butt);
            setEndpos();
            actgroup->start();
            if(butt ==tmpbutton)
           {
                    emit  funcpage(butt->objectName());
           }
            else
            {
                tmpbutton = butt ;
            }

 }




