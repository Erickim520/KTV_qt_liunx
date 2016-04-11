/********************************************************************************
** Form generated from reading UI file 'frame_py.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_PY_H
#define UI_FRAME_PY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Frame_py
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_0;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_16;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QPushButton *pushButton_21;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_26;
    QPushButton *pushButton_28;
    QPushButton *pushButton_27;
    QButtonGroup *buttonGroup;

    void setupUi(QFrame *Frame_py)
    {
        if (Frame_py->objectName().isEmpty())
            Frame_py->setObjectName(QStringLiteral("Frame_py"));
        Frame_py->resize(368, 424);
        Frame_py->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"	background:rgb(0, 0, 0)\n"
"}\n"
"QPushButton\n"
"{\n"
"	border:20px;\n"
"   color:rgb(255, 255, 255);\n"
"   background:rgb(48,46,57);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border:40px;\n"
"   color:rgb(0, 0, 0);\n"
"   background:rgb(0, 170, 255)\n"
"}\n"
"\n"
""));
        Frame_py->setFrameShape(QFrame::StyledPanel);
        Frame_py->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(Frame_py);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(Frame_py);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(1, 1));
        lineEdit->setBaseSize(QSize(1, 1));
        lineEdit->setCursor(QCursor(Qt::IBeamCursor));
        lineEdit->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        verticalLayout->addWidget(lineEdit);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(Frame_py);
        buttonGroup = new QButtonGroup(Frame_py);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(pushButton);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(1, 1));
        pushButton->setBaseSize(QSize(1, 1));
        pushButton->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(1, 1));
        pushButton_2->setBaseSize(QSize(1, 1));
        pushButton_2->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(1, 1));
        pushButton_3->setBaseSize(QSize(1, 1));
        pushButton_3->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(1, 1));
        pushButton_4->setBaseSize(QSize(1, 1));
        pushButton_4->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_4, 0, 3, 1, 1);

        pushButton_5 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(1, 1));
        pushButton_5->setBaseSize(QSize(1, 1));
        pushButton_5->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_5, 0, 4, 1, 1);

        pushButton_6 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_6);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(1, 1));
        pushButton_6->setBaseSize(QSize(1, 1));
        pushButton_6->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_6, 1, 0, 2, 1);

        pushButton_7 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_7);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(1, 1));
        pushButton_7->setBaseSize(QSize(1, 1));
        pushButton_7->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_7, 1, 1, 2, 1);

        pushButton_8 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_8);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(1, 1));
        pushButton_8->setBaseSize(QSize(1, 1));
        pushButton_8->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_8, 1, 2, 1, 1);

        pushButton_9 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_9);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(1, 1));
        pushButton_9->setBaseSize(QSize(1, 1));
        pushButton_9->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_9, 1, 3, 1, 1);

        pushButton_10 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_10);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setMinimumSize(QSize(1, 1));
        pushButton_10->setBaseSize(QSize(1, 1));
        pushButton_10->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_10, 1, 4, 1, 1);

        pushButton_14 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_14);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);
        pushButton_14->setMinimumSize(QSize(1, 1));
        pushButton_14->setBaseSize(QSize(1, 1));
        pushButton_14->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_14, 2, 2, 2, 1);

        pushButton_15 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_15);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);
        pushButton_15->setMinimumSize(QSize(1, 1));
        pushButton_15->setBaseSize(QSize(1, 1));
        pushButton_15->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_15, 2, 3, 2, 1);

        pushButton_0 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_0);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setMinimumSize(QSize(1, 1));
        pushButton_0->setBaseSize(QSize(1, 1));
        pushButton_0->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_0, 2, 4, 2, 1);

        pushButton_12 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_12);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setMinimumSize(QSize(1, 1));
        pushButton_12->setBaseSize(QSize(1, 1));
        pushButton_12->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_12, 3, 0, 1, 1);

        pushButton_13 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_13);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setMinimumSize(QSize(1, 1));
        pushButton_13->setBaseSize(QSize(1, 1));
        pushButton_13->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_13, 3, 1, 1, 1);

        pushButton_17 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_17);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        sizePolicy.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy);
        pushButton_17->setMinimumSize(QSize(1, 1));
        pushButton_17->setBaseSize(QSize(1, 1));
        pushButton_17->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_17, 4, 0, 1, 1);

        pushButton_18 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_18);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);
        pushButton_18->setMinimumSize(QSize(1, 1));
        pushButton_18->setBaseSize(QSize(1, 1));
        pushButton_18->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_18, 4, 1, 1, 1);

        pushButton_19 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_19);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        sizePolicy.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy);
        pushButton_19->setMinimumSize(QSize(1, 1));
        pushButton_19->setBaseSize(QSize(1, 1));
        pushButton_19->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_19, 4, 2, 2, 1);

        pushButton_20 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_20);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        sizePolicy.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy);
        pushButton_20->setMinimumSize(QSize(1, 1));
        pushButton_20->setBaseSize(QSize(1, 1));
        pushButton_20->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_20, 4, 3, 2, 1);

        pushButton_16 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_16);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);
        pushButton_16->setMinimumSize(QSize(1, 1));
        pushButton_16->setBaseSize(QSize(1, 1));
        pushButton_16->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_16, 4, 4, 2, 1);

        pushButton_22 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_22);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        sizePolicy.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy);
        pushButton_22->setMinimumSize(QSize(1, 1));
        pushButton_22->setBaseSize(QSize(1, 1));
        pushButton_22->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_22, 5, 0, 2, 1);

        pushButton_23 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_23);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        sizePolicy.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy);
        pushButton_23->setMinimumSize(QSize(1, 1));
        pushButton_23->setBaseSize(QSize(1, 1));
        pushButton_23->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_23, 5, 1, 2, 1);

        pushButton_24 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_24);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        sizePolicy.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy);
        pushButton_24->setMinimumSize(QSize(1, 1));
        pushButton_24->setBaseSize(QSize(1, 1));
        pushButton_24->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_24, 6, 2, 1, 1);

        pushButton_25 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_25);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        sizePolicy.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy);
        pushButton_25->setMinimumSize(QSize(1, 1));
        pushButton_25->setBaseSize(QSize(1, 1));
        pushButton_25->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_25, 6, 3, 1, 1);

        pushButton_21 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_21);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        sizePolicy.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy);
        pushButton_21->setMinimumSize(QSize(1, 1));
        pushButton_21->setBaseSize(QSize(1, 1));
        pushButton_21->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        gridLayout->addWidget(pushButton_21, 6, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_26 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_26);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        sizePolicy.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy);
        pushButton_26->setMinimumSize(QSize(1, 1));
        pushButton_26->setBaseSize(QSize(1, 1));
        pushButton_26->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        horizontalLayout->addWidget(pushButton_26);

        pushButton_28 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_28);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        sizePolicy.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy);
        pushButton_28->setMinimumSize(QSize(1, 1));
        pushButton_28->setBaseSize(QSize(1, 1));
        pushButton_28->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        horizontalLayout->addWidget(pushButton_28);

        pushButton_27 = new QPushButton(Frame_py);
        buttonGroup->addButton(pushButton_27);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        sizePolicy.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy);
        pushButton_27->setMinimumSize(QSize(1, 1));
        pushButton_27->setBaseSize(QSize(1, 1));
        pushButton_27->setStyleSheet(QLatin1String("color: rgb(172, 64, 202);\n"
"font: 24pt \"Ubuntu\";"));

        horizontalLayout->addWidget(pushButton_27);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);
        verticalLayout->setStretch(2, 1);

        retranslateUi(Frame_py);

        QMetaObject::connectSlotsByName(Frame_py);
    } // setupUi

    void retranslateUi(QFrame *Frame_py)
    {
        Frame_py->setWindowTitle(QApplication::translate("Frame_py", "Frame", 0));
        pushButton->setText(QApplication::translate("Frame_py", "A", 0));
        pushButton_2->setText(QApplication::translate("Frame_py", "B", 0));
        pushButton_3->setText(QApplication::translate("Frame_py", "C", 0));
        pushButton_4->setText(QApplication::translate("Frame_py", "D", 0));
        pushButton_5->setText(QApplication::translate("Frame_py", "E", 0));
        pushButton_6->setText(QApplication::translate("Frame_py", "F", 0));
        pushButton_7->setText(QApplication::translate("Frame_py", "G", 0));
        pushButton_8->setText(QApplication::translate("Frame_py", "H", 0));
        pushButton_9->setText(QApplication::translate("Frame_py", "I", 0));
        pushButton_10->setText(QApplication::translate("Frame_py", "J", 0));
        pushButton_14->setText(QApplication::translate("Frame_py", "M", 0));
        pushButton_15->setText(QApplication::translate("Frame_py", "N", 0));
        pushButton_0->setText(QApplication::translate("Frame_py", "O", 0));
        pushButton_12->setText(QApplication::translate("Frame_py", "K", 0));
        pushButton_13->setText(QApplication::translate("Frame_py", "L", 0));
        pushButton_17->setText(QApplication::translate("Frame_py", "P", 0));
        pushButton_18->setText(QApplication::translate("Frame_py", "Q", 0));
        pushButton_19->setText(QApplication::translate("Frame_py", "R", 0));
        pushButton_20->setText(QApplication::translate("Frame_py", "S", 0));
        pushButton_16->setText(QApplication::translate("Frame_py", "T", 0));
        pushButton_22->setText(QApplication::translate("Frame_py", "U", 0));
        pushButton_23->setText(QApplication::translate("Frame_py", "V", 0));
        pushButton_24->setText(QApplication::translate("Frame_py", "W", 0));
        pushButton_25->setText(QApplication::translate("Frame_py", "X", 0));
        pushButton_21->setText(QApplication::translate("Frame_py", "Y", 0));
        pushButton_26->setText(QApplication::translate("Frame_py", "Z", 0));
        pushButton_28->setText(QApplication::translate("Frame_py", "ce", 0));
        pushButton_27->setText(QApplication::translate("Frame_py", "back", 0));
    } // retranslateUi

};

namespace Ui {
    class Frame_py: public Ui_Frame_py {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_PY_H
