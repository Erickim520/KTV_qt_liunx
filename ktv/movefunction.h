#ifndef MOVEFUNCTION_H
#define MOVEFUNCTION_H

#include <QWidget>
#include <QPushButton>
#include <QParallelAnimationGroup>
#include <QPropertyAnimation>
#include <QList>
#include <QGraphicsOpacityEffect>
namespace Ui {
class movefunction;
}

class movefunction : public QWidget
{
    Q_OBJECT

public:
    explicit movefunction(QWidget *parent = 0);
    ~movefunction();
    void setStatepos();
    void setEndpos();
public slots:
    void buttonGroup_x(QAbstractButton *);                                  //主界面的按钮主
signals:
    void funcpage(QString);
private:
    QPropertyAnimation *animation[6];
    QParallelAnimationGroup *actgroup;
    QList <QAbstractButton*> L  ;
    Ui::movefunction *ui;
    QRect   *data[6];
    QPushButton *button[6];
    QAbstractButton *tmpbutton ;
};

#endif // MOVEFUNCTION_H
