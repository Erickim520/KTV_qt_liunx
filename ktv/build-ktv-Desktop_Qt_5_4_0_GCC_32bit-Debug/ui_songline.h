/********************************************************************************
** Form generated from reading UI file 'songline.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONGLINE_H
#define UI_SONGLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_songline
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *songline)
    {
        if (songline->objectName().isEmpty())
            songline->setObjectName(QStringLiteral("songline"));
        songline->resize(544, 39);
        songline->setMinimumSize(QSize(1, 1));
        songline->setStyleSheet(QLatin1String("color: rgb(139, 38, 151);\n"
"font: 13pt \"Ubuntu\";"));
        horizontalLayout = new QHBoxLayout(songline);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(songline);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(1, 1));
        label->setBaseSize(QSize(1, 1));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(songline);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(1, 1));
        label_2->setBaseSize(QSize(1, 1));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(songline);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(1, 1));
        label_3->setBaseSize(QSize(1, 1));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(songline);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(1, 1));
        label_4->setBaseSize(QSize(1, 1));

        horizontalLayout->addWidget(label_4);

        pushButton = new QPushButton(songline);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(1, 1));
        pushButton->setBaseSize(QSize(1, 1));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/image/select.png);"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(songline);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(1, 1));
        pushButton_2->setBaseSize(QSize(1, 1));
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/image/frist.png);"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 8);
        horizontalLayout->setStretch(2, 3);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);

        retranslateUi(songline);

        QMetaObject::connectSlotsByName(songline);
    } // setupUi

    void retranslateUi(QWidget *songline)
    {
        songline->setWindowTitle(QApplication::translate("songline", "Form", 0));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class songline: public Ui_songline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONGLINE_H
