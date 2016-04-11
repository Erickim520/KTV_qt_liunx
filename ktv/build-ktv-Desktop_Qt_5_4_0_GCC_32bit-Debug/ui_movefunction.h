/********************************************************************************
** Form generated from reading UI file 'movefunction.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVEFUNCTION_H
#define UI_MOVEFUNCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_movefunction
{
public:
    QPushButton *pushButton_14;
    QPushButton *pushButton_16;
    QPushButton *pushButton_18;
    QPushButton *pushButton_17;
    QPushButton *pushButton_13;
    QPushButton *pushButton_15;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *movefunction)
    {
        if (movefunction->objectName().isEmpty())
            movefunction->setObjectName(QStringLiteral("movefunction"));
        movefunction->resize(685, 329);
        pushButton_14 = new QPushButton(movefunction);
        buttonGroup = new QButtonGroup(movefunction);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(pushButton_14);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(160, 30, 121, 131));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);
        pushButton_14->setMinimumSize(QSize(1, 1));
        pushButton_14->setBaseSize(QSize(1, 1));
        pushButton_14->setStyleSheet(QStringLiteral("border-image: url(:/image/gexing.jpg);"));
        pushButton_16 = new QPushButton(movefunction);
        buttonGroup->addButton(pushButton_16);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(420, 30, 121, 131));
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);
        pushButton_16->setMinimumSize(QSize(1, 1));
        pushButton_16->setBaseSize(QSize(1, 1));
        pushButton_18 = new QPushButton(movefunction);
        buttonGroup->addButton(pushButton_18);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(190, 170, 291, 131));
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);
        pushButton_18->setMinimumSize(QSize(1, 1));
        pushButton_18->setBaseSize(QSize(1, 1));
        pushButton_18->setStyleSheet(QStringLiteral("border-image: url(:/image/paihangbang.jpg);"));
        pushButton_17 = new QPushButton(movefunction);
        buttonGroup->addButton(pushButton_17);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(550, 30, 121, 131));
        sizePolicy.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy);
        pushButton_17->setMinimumSize(QSize(1, 1));
        pushButton_17->setBaseSize(QSize(1, 1));
        pushButton_13 = new QPushButton(movefunction);
        buttonGroup->addButton(pushButton_13);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(30, 30, 121, 131));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setMinimumSize(QSize(1, 1));
        pushButton_13->setBaseSize(QSize(1, 1));
        pushButton_13->setStyleSheet(QStringLiteral("border-image: url(:/2);"));
        pushButton_15 = new QPushButton(movefunction);
        buttonGroup->addButton(pushButton_15);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(290, 30, 121, 131));
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);
        pushButton_15->setMinimumSize(QSize(1, 1));
        pushButton_15->setBaseSize(QSize(1, 1));

        retranslateUi(movefunction);

        QMetaObject::connectSlotsByName(movefunction);
    } // setupUi

    void retranslateUi(QWidget *movefunction)
    {
        movefunction->setWindowTitle(QApplication::translate("movefunction", "Form", 0));
        pushButton_14->setText(QApplication::translate("movefunction", "2", 0));
        pushButton_16->setText(QApplication::translate("movefunction", "\351\207\221\346\233\262", 0));
        pushButton_18->setText(QString());
        pushButton_17->setText(QApplication::translate("movefunction", "5", 0));
        pushButton_13->setText(QApplication::translate("movefunction", "1", 0));
        pushButton_15->setText(QApplication::translate("movefunction", "\350\257\255\347\247\215", 0));
    } // retranslateUi

};

namespace Ui {
    class movefunction: public Ui_movefunction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVEFUNCTION_H
