/********************************************************************************
** Form generated from reading UI file 'mplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MPLAYER_H
#define UI_MPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mplayer
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_3;
    QSlider *horizontalSlider_2;

    void setupUi(QWidget *mplayer)
    {
        if (mplayer->objectName().isEmpty())
            mplayer->setObjectName(QStringLiteral("mplayer"));
        mplayer->resize(665, 354);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mplayer->sizePolicy().hasHeightForWidth());
        mplayer->setSizePolicy(sizePolicy);
        mplayer->setMinimumSize(QSize(1, 1));
        mplayer->setBaseSize(QSize(1, 1));
        verticalLayout_3 = new QVBoxLayout(mplayer);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(mplayer);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setMinimumSize(QSize(1, 1));
        frame_3->setBaseSize(QSize(1, 1));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(frame_3);

        horizontalSlider_2 = new QSlider(mplayer);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        sizePolicy.setHeightForWidth(horizontalSlider_2->sizePolicy().hasHeightForWidth());
        horizontalSlider_2->setSizePolicy(sizePolicy);
        horizontalSlider_2->setMinimumSize(QSize(1, 1));
        horizontalSlider_2->setBaseSize(QSize(1, 1));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_2);

        verticalLayout_3->setStretch(0, 10);
        verticalLayout_3->setStretch(1, 1);

        retranslateUi(mplayer);

        QMetaObject::connectSlotsByName(mplayer);
    } // setupUi

    void retranslateUi(QWidget *mplayer)
    {
        mplayer->setWindowTitle(QApplication::translate("mplayer", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class mplayer: public Ui_mplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MPLAYER_H
