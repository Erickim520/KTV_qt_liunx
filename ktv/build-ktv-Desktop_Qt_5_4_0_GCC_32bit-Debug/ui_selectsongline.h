/********************************************************************************
** Form generated from reading UI file 'selectsongline.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTSONGLINE_H
#define UI_SELECTSONGLINE_H

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

class Ui_selectsongline
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *selectsongline)
    {
        if (selectsongline->objectName().isEmpty())
            selectsongline->setObjectName(QStringLiteral("selectsongline"));
        selectsongline->resize(432, 79);
        selectsongline->setStyleSheet(QLatin1String("color: rgb(235, 238, 46);\n"
"font: 14pt \"Ubuntu\";"));
        horizontalLayout = new QHBoxLayout(selectsongline);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(selectsongline);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(1, 1));
        label->setBaseSize(QSize(1, 1));
        label->setStyleSheet(QLatin1String("color: rgb(194, 214, 26);\n"
"font: 18pt \"Ubuntu\";"));

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(selectsongline);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(1, 1));
        pushButton->setBaseSize(QSize(1, 1));
        pushButton->setCursor(QCursor(Qt::CrossCursor));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/image/re.png);"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(selectsongline);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(1, 1));
        pushButton_2->setBaseSize(QSize(1, 1));
        pushButton_2->setCursor(QCursor(Qt::UpArrowCursor));
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/image/frist.png);"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        retranslateUi(selectsongline);

        QMetaObject::connectSlotsByName(selectsongline);
    } // setupUi

    void retranslateUi(QWidget *selectsongline)
    {
        selectsongline->setWindowTitle(QApplication::translate("selectsongline", "Form", 0));
        label->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class selectsongline: public Ui_selectsongline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTSONGLINE_H
