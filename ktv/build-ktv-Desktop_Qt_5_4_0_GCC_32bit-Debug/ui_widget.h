/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "allchooesfram.h"
#include "frame_py.h"
#include "mplayer.h"
#include "selectedsong.h"
#include "songerfram.h"
#include "songlist.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    songlist *frame;
    Frame_py *frame_2;
    QLabel *label;
    QWidget *page_3;
    songerfram *frame_6;
    QWidget *page_4;
    QPushButton *pushButton_huayu;
    QPushButton *pushButton_yueyu;
    QPushButton *pushButton_english;
    QPushButton *pushButton_han;
    QWidget *page_5;
    QPushButton *pushButton_jd;
    QPushButton *pushButton_lx;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *page_6;
    QWidget *page_7;
    QLabel *label_2;
    QWidget *page_8;
    mplayer *widget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_YB;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_next;
    QPushButton *pushButton_select;
    QPushButton *pushButton_mp;
    selectedsong *frame_3;
    allchooesfram *frame_4;
    QPushButton *pushButton_add;
    QPushButton *pushButton_del;
    QLabel *label_cursong;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(737, 492);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 30, 711, 381));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(page->sizePolicy().hasHeightForWidth());
        page->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        frame = new songlist(page_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 10, 421, 351));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new Frame_py(page_2);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(470, 10, 231, 351));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 81, 17));
        label->setStyleSheet(QLatin1String("border-color: rgba(225, 76, 76, 168);\n"
"font: 75 oblique 11pt \"Nimbus Mono L\";"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        frame_6 = new songerfram(page_3);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(40, 30, 561, 301));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        pushButton_huayu = new QPushButton(page_4);
        buttonGroup = new QButtonGroup(Widget);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(pushButton_huayu);
        pushButton_huayu->setObjectName(QStringLiteral("pushButton_huayu"));
        pushButton_huayu->setGeometry(QRect(40, 50, 99, 91));
        pushButton_yueyu = new QPushButton(page_4);
        buttonGroup->addButton(pushButton_yueyu);
        pushButton_yueyu->setObjectName(QStringLiteral("pushButton_yueyu"));
        pushButton_yueyu->setGeometry(QRect(190, 50, 99, 91));
        pushButton_english = new QPushButton(page_4);
        buttonGroup->addButton(pushButton_english);
        pushButton_english->setObjectName(QStringLiteral("pushButton_english"));
        pushButton_english->setGeometry(QRect(340, 50, 99, 91));
        pushButton_han = new QPushButton(page_4);
        buttonGroup->addButton(pushButton_han);
        pushButton_han->setObjectName(QStringLiteral("pushButton_han"));
        pushButton_han->setGeometry(QRect(490, 50, 99, 91));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        pushButton_jd = new QPushButton(page_5);
        buttonGroup_2 = new QButtonGroup(Widget);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(pushButton_jd);
        pushButton_jd->setObjectName(QStringLiteral("pushButton_jd"));
        pushButton_jd->setGeometry(QRect(80, 90, 99, 91));
        pushButton_lx = new QPushButton(page_5);
        buttonGroup_2->addButton(pushButton_lx);
        pushButton_lx->setObjectName(QStringLiteral("pushButton_lx"));
        pushButton_lx->setGeometry(QRect(190, 90, 99, 91));
        pushButton_8 = new QPushButton(page_5);
        buttonGroup_2->addButton(pushButton_8);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(300, 90, 99, 91));
        pushButton_9 = new QPushButton(page_5);
        buttonGroup_2->addButton(pushButton_9);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(410, 90, 99, 91));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        label_2 = new QLabel(page_7);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(536, 40, 51, 281));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        widget = new mplayer(page_8);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 721, 381));
        stackedWidget->addWidget(page_8);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 410, 661, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(1, 1));
        pushButton_4->setBaseSize(QSize(1, 1));
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        pushButton_4->setStyleSheet(QStringLiteral("border-image: url(:/image/zhuye.jpg);"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_YB = new QPushButton(layoutWidget);
        pushButton_YB->setObjectName(QStringLiteral("pushButton_YB"));
        sizePolicy.setHeightForWidth(pushButton_YB->sizePolicy().hasHeightForWidth());
        pushButton_YB->setSizePolicy(sizePolicy);
        pushButton_YB->setMinimumSize(QSize(1, 1));
        pushButton_YB->setBaseSize(QSize(1, 1));
        pushButton_YB->setStyleSheet(QLatin1String("QPushbutton{\n"
"border:4px groove gray;\n"
"border-radius:30px;\n"
"}\n"
"QPushbutton::pressed\n"
"{\n"
"margin:15px;\n"
"}"));

        horizontalLayout->addWidget(pushButton_YB);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(1, 1));
        pushButton_2->setBaseSize(QSize(1, 1));
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_2->setStyleSheet(QLatin1String("border-image: url(:/vois);\n"
""));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(1, 1));
        pushButton_3->setBaseSize(QSize(1, 1));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/stop);"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(1, 1));
        pushButton_5->setBaseSize(QSize(1, 1));
        pushButton_5->setFocusPolicy(Qt::NoFocus);
        pushButton_5->setStyleSheet(QStringLiteral("border-image: url(:/image/fuwu.jpg);"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(1, 1));
        pushButton_6->setBaseSize(QSize(1, 1));
        pushButton_6->setFocusPolicy(Qt::NoFocus);
        pushButton_6->setStyleSheet(QStringLiteral("border-image: url(:/image/review.png);"));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_next = new QPushButton(layoutWidget);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        sizePolicy.setHeightForWidth(pushButton_next->sizePolicy().hasHeightForWidth());
        pushButton_next->setSizePolicy(sizePolicy);
        pushButton_next->setMinimumSize(QSize(1, 1));
        pushButton_next->setBaseSize(QSize(1, 1));
        pushButton_next->setFocusPolicy(Qt::ClickFocus);
        pushButton_next->setStyleSheet(QStringLiteral("border-image: url(:/next);"));

        horizontalLayout->addWidget(pushButton_next);

        pushButton_select = new QPushButton(layoutWidget);
        pushButton_select->setObjectName(QStringLiteral("pushButton_select"));
        sizePolicy.setHeightForWidth(pushButton_select->sizePolicy().hasHeightForWidth());
        pushButton_select->setSizePolicy(sizePolicy);
        pushButton_select->setMinimumSize(QSize(1, 1));
        pushButton_select->setBaseSize(QSize(1, 1));

        horizontalLayout->addWidget(pushButton_select);

        pushButton_mp = new QPushButton(layoutWidget);
        pushButton_mp->setObjectName(QStringLiteral("pushButton_mp"));
        sizePolicy.setHeightForWidth(pushButton_mp->sizePolicy().hasHeightForWidth());
        pushButton_mp->setSizePolicy(sizePolicy);
        pushButton_mp->setMinimumSize(QSize(1, 1));
        pushButton_mp->setBaseSize(QSize(1, 1));

        horizontalLayout->addWidget(pushButton_mp);

        frame_3 = new selectedsong(Widget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 10, 21, 21));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_4 = new allchooesfram(Widget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(40, 10, 21, 21));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        pushButton_add = new QPushButton(Widget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(670, 400, 61, 51));
        pushButton_add->setFocusPolicy(Qt::ClickFocus);
        pushButton_add->setStyleSheet(QStringLiteral("border-image: url(:/+);"));
        pushButton_del = new QPushButton(Widget);
        pushButton_del->setObjectName(QStringLiteral("pushButton_del"));
        pushButton_del->setGeometry(QRect(670, 440, 61, 51));
        pushButton_del->setFocusPolicy(Qt::ClickFocus);
        pushButton_del->setStyleSheet(QStringLiteral("border-image: url(:/-);"));
        label_cursong = new QLabel(Widget);
        label_cursong->setObjectName(QStringLiteral("label_cursong"));
        label_cursong->setGeometry(QRect(150, 10, 441, 20));
        label_cursong->setStyleSheet(QLatin1String("color: rgb(228, 15, 15);\n"
"font: 12pt \"Ubuntu\";"));

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "songname", 0));
        pushButton_huayu->setText(QApplication::translate("Widget", "\345\215\216\350\257\255", 0));
        pushButton_yueyu->setText(QApplication::translate("Widget", "\347\262\244\350\257\255", 0));
        pushButton_english->setText(QApplication::translate("Widget", "\350\213\261\350\257\255", 0));
        pushButton_han->setText(QApplication::translate("Widget", "\351\237\251\350\257\255", 0));
        pushButton_jd->setText(QApplication::translate("Widget", "\347\273\217\345\205\270\350\200\201\346\255\214", 0));
        pushButton_lx->setText(QApplication::translate("Widget", "\346\265\201\350\241\214\351\207\221\346\233\262", 0));
        pushButton_8->setText(QApplication::translate("Widget", "pop", 0));
        pushButton_9->setText(QApplication::translate("Widget", "hot", 0));
        label_2->setText(QString());
        pushButton_4->setText(QString());
        pushButton_YB->setText(QApplication::translate("Widget", "\344\274\264\345\224\261", 0));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_next->setText(QString());
        pushButton_select->setText(QApplication::translate("Widget", "\345\267\262\347\202\271", 0));
        pushButton_mp->setText(QApplication::translate("Widget", "\350\277\224\345\233\236", 0));
        pushButton_add->setText(QString());
        pushButton_del->setText(QString());
        label_cursong->setText(QApplication::translate("Widget", "\345\275\223\345\211\215\346\255\243\345\234\250\346\222\255\346\224\276\346\255\214\346\233\262\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
