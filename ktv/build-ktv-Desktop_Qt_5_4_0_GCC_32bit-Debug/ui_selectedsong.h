/********************************************************************************
** Form generated from reading UI file 'selectedsong.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTEDSONG_H
#define UI_SELECTEDSONG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "selectsongline.h"

QT_BEGIN_NAMESPACE

class Ui_selectedsong
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    selectsongline *widget;
    selectsongline *widget_2;
    selectsongline *widget_3;
    selectsongline *widget_4;
    selectsongline *widget_5;
    selectsongline *widget_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_mix;

    void setupUi(QFrame *selectedsong)
    {
        if (selectedsong->objectName().isEmpty())
            selectedsong->setObjectName(QStringLiteral("selectedsong"));
        selectedsong->resize(416, 415);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectedsong->sizePolicy().hasHeightForWidth());
        selectedsong->setSizePolicy(sizePolicy);
        selectedsong->setMinimumSize(QSize(1, 1));
        selectedsong->setStyleSheet(QLatin1String("color: rgb(194, 214, 26);\n"
"font: 18pt \"Ubuntu\";"));
        selectedsong->setFrameShape(QFrame::StyledPanel);
        selectedsong->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(selectedsong);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_4 = new QPushButton(selectedsong);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setBaseSize(QSize(1, 1));

        horizontalLayout_2->addWidget(pushButton_4);

        horizontalLayout_2->setStretch(0, 50);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(selectedsong);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(1, 1));
        label->setBaseSize(QSize(1, 1));
        label->setStyleSheet(QLatin1String("color: rgb(235, 238, 46);\n"
"font: 14pt \"Ubuntu\";"));

        verticalLayout->addWidget(label);

        widget = new selectsongline(selectedsong);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(1, 1));
        widget->setBaseSize(QSize(1, 1));

        verticalLayout->addWidget(widget);

        widget_2 = new selectsongline(selectedsong);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(1, 1));
        widget_2->setBaseSize(QSize(1, 1));

        verticalLayout->addWidget(widget_2);

        widget_3 = new selectsongline(selectedsong);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setMinimumSize(QSize(1, 1));
        widget_3->setBaseSize(QSize(1, 1));

        verticalLayout->addWidget(widget_3);

        widget_4 = new selectsongline(selectedsong);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(1, 1));
        widget_4->setBaseSize(QSize(1, 1));

        verticalLayout->addWidget(widget_4);

        widget_5 = new selectsongline(selectedsong);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        widget_5->setMinimumSize(QSize(1, 1));
        widget_5->setBaseSize(QSize(1, 1));

        verticalLayout->addWidget(widget_5);

        widget_6 = new selectsongline(selectedsong);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        sizePolicy.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy);
        widget_6->setMinimumSize(QSize(1, 1));
        widget_6->setBaseSize(QSize(1, 1));

        verticalLayout->addWidget(widget_6);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 1);
        verticalLayout->setStretch(6, 1);

        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(selectedsong);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(1, 1));
        pushButton->setBaseSize(QSize(1, 1));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/image/zuo.png);"));

        horizontalLayout->addWidget(pushButton);

        label_2 = new QLabel(selectedsong);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(1, 1));
        label_2->setBaseSize(QSize(1, 1));

        horizontalLayout->addWidget(label_2);

        pushButton_2 = new QPushButton(selectedsong);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(1, 1));
        pushButton_2->setBaseSize(QSize(1, 1));
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/image/you.png);"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_mix = new QPushButton(selectedsong);
        pushButton_mix->setObjectName(QStringLiteral("pushButton_mix"));
        sizePolicy.setHeightForWidth(pushButton_mix->sizePolicy().hasHeightForWidth());
        pushButton_mix->setSizePolicy(sizePolicy);
        pushButton_mix->setMinimumSize(QSize(1, 1));
        pushButton_mix->setBaseSize(QSize(1, 1));
        pushButton_mix->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout->addWidget(pushButton_mix);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 3);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 8);
        verticalLayout_2->setStretch(2, 1);

        retranslateUi(selectedsong);

        QMetaObject::connectSlotsByName(selectedsong);
    } // setupUi

    void retranslateUi(QFrame *selectedsong)
    {
        selectedsong->setWindowTitle(QApplication::translate("selectedsong", "Frame", 0));
        pushButton_4->setText(QApplication::translate("selectedsong", "X", 0));
        label->setText(QApplication::translate("selectedsong", "\345\267\262\347\202\271\346\255\214\346\233\262", 0));
        pushButton->setText(QString());
        label_2->setText(QString());
        pushButton_2->setText(QString());
        pushButton_mix->setText(QApplication::translate("selectedsong", "\344\271\261\345\272\217", 0));
    } // retranslateUi

};

namespace Ui {
    class selectedsong: public Ui_selectedsong {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTEDSONG_H
