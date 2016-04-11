/********************************************************************************
** Form generated from reading UI file 'songlist.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONGLIST_H
#define UI_SONGLIST_H

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
#include "songline.h"

QT_BEGIN_NAMESPACE

class Ui_songlist
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    songline *widget;
    songline *widget_2;
    songline *widget_4;
    songline *widget_5;
    songline *widget_6;
    songline *widget_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QFrame *songlist)
    {
        if (songlist->objectName().isEmpty())
            songlist->setObjectName(QStringLiteral("songlist"));
        songlist->resize(588, 379);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(songlist->sizePolicy().hasHeightForWidth());
        songlist->setSizePolicy(sizePolicy);
        songlist->setMinimumSize(QSize(1, 1));
        songlist->setBaseSize(QSize(1, 1));
        songlist->setStyleSheet(QStringLiteral(""));
        songlist->setFrameShape(QFrame::StyledPanel);
        songlist->setFrameShadow(QFrame::Raised);
        songlist->setLineWidth(1);
        songlist->setMidLineWidth(1);
        verticalLayout_2 = new QVBoxLayout(songlist);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new songline(songlist);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(1, 1));
        widget->setBaseSize(QSize(1, 1));

        verticalLayout->addWidget(widget);

        widget_2 = new songline(songlist);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        verticalLayout->addWidget(widget_2);

        widget_4 = new songline(songlist);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(1, 1));
        widget_4->setBaseSize(QSize(1, 1));

        verticalLayout->addWidget(widget_4);

        widget_5 = new songline(songlist);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        widget_5->setMinimumSize(QSize(1, 1));
        widget_5->setBaseSize(QSize(1, 1));

        verticalLayout->addWidget(widget_5);

        widget_6 = new songline(songlist);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        sizePolicy.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy);
        widget_6->setMinimumSize(QSize(1, 1));
        widget_6->setBaseSize(QSize(1, 1));

        verticalLayout->addWidget(widget_6);

        widget_7 = new songline(songlist);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        sizePolicy.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy);
        widget_7->setMinimumSize(QSize(1, 1));
        widget_7->setBaseSize(QSize(1, 1));

        verticalLayout->addWidget(widget_7);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 1);

        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(songlist);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(1, 1));
        pushButton->setBaseSize(QSize(1, 1));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/image/zuo.png);"));

        horizontalLayout->addWidget(pushButton);

        label = new QLabel(songlist);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(1, 1));
        label->setBaseSize(QSize(1, 1));

        horizontalLayout->addWidget(label);

        pushButton_2 = new QPushButton(songlist);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(1, 1));
        pushButton_2->setBaseSize(QSize(1, 1));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/image/you.png);"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 2);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2->setStretch(0, 8);
        verticalLayout_2->setStretch(1, 1);

        retranslateUi(songlist);

        QMetaObject::connectSlotsByName(songlist);
    } // setupUi

    void retranslateUi(QFrame *songlist)
    {
        songlist->setWindowTitle(QApplication::translate("songlist", "Frame", 0));
        pushButton->setText(QString());
        label->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class songlist: public Ui_songlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONGLIST_H
