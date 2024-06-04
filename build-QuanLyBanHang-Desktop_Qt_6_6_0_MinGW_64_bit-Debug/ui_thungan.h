/********************************************************************************
** Form generated from reading UI file 'thungan.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THUNGAN_H
#define UI_THUNGAN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThuNgan
{
public:
    QWidget *Form;
    QFrame *frame;
    QGroupBox *groupBox;
    QLabel *ID_LABEL;
    QLabel *MONEY_LABEL;
    QLineEdit *ID_LINE;
    QLineEdit *ST_LINE;
    QPushButton *ADD_MONEY_BUTTON;
    QPushButton *EXIT_BUTTON;
    QLabel *label;
    QToolButton *toolButton;

    void setupUi(QMainWindow *ThuNgan)
    {
        if (ThuNgan->objectName().isEmpty())
            ThuNgan->setObjectName("ThuNgan");
        ThuNgan->resize(441, 469);
        ThuNgan->setMinimumSize(QSize(441, 469));
        ThuNgan->setMaximumSize(QSize(441, 500));
        ThuNgan->setStyleSheet(QString::fromUtf8("#Form\n"
"{\n"
"	background-image: url(:/background/BACKGROUND/bg1.jpg);\n"
"}"));
        Form = new QWidget(ThuNgan);
        Form->setObjectName("Form");
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 115, 381, 331));
        frame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	background-color: #222;\n"
"	border-radius: 20px\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	background: red;\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	background: transparent;\n"
"	border:none;\n"
"	color:#717072;\n"
"	border-bottom: 1px solid #717072;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color: white;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	border: 2px solid rgb(255, 255, 127);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 80, 361, 241));
        groupBox->setFlat(false);
        ID_LABEL = new QLabel(groupBox);
        ID_LABEL->setObjectName("ID_LABEL");
        ID_LABEL->setGeometry(QRect(49, 13, 51, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        ID_LABEL->setFont(font);
        ID_LABEL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MONEY_LABEL = new QLabel(groupBox);
        MONEY_LABEL->setObjectName("MONEY_LABEL");
        MONEY_LABEL->setGeometry(QRect(10, 65, 101, 31));
        MONEY_LABEL->setFont(font);
        ID_LINE = new QLineEdit(groupBox);
        ID_LINE->setObjectName("ID_LINE");
        ID_LINE->setGeometry(QRect(121, 9, 231, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        ID_LINE->setFont(font1);
        ID_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ST_LINE = new QLineEdit(groupBox);
        ST_LINE->setObjectName("ST_LINE");
        ST_LINE->setGeometry(QRect(121, 61, 231, 31));
        ST_LINE->setFont(font1);
        ST_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ADD_MONEY_BUTTON = new QPushButton(groupBox);
        ADD_MONEY_BUTTON->setObjectName("ADD_MONEY_BUTTON");
        ADD_MONEY_BUTTON->setGeometry(QRect(10, 120, 341, 51));
        ADD_MONEY_BUTTON->setFont(font1);
        ADD_MONEY_BUTTON->setFlat(false);
        EXIT_BUTTON = new QPushButton(groupBox);
        EXIT_BUTTON->setObjectName("EXIT_BUTTON");
        EXIT_BUTTON->setGeometry(QRect(10, 180, 341, 51));
        EXIT_BUTTON->setFont(font1);
        EXIT_BUTTON->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);"));
        EXIT_BUTTON->setFlat(false);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(53, 29, 271, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(false);
        label->setFont(font2);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("font: 900 20pt \"Segoe UI\";"));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        label->setIndent(-1);
        toolButton = new QToolButton(Form);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(160, 20, 121, 121));
        toolButton->setFont(font1);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color: qconicalgradient(cx:0.489, cy:0.5, angle:0, stop:0.460227 rgba(246, 230, 116, 255));\n"
"	border-radius: 15px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/ICON/cash-register.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(128, 128));
        ThuNgan->setCentralWidget(Form);

        retranslateUi(ThuNgan);

        QMetaObject::connectSlotsByName(ThuNgan);
    } // setupUi

    void retranslateUi(QMainWindow *ThuNgan)
    {
        ThuNgan->setWindowTitle(QCoreApplication::translate("ThuNgan", "Thu Ng\303\242n", nullptr));
        groupBox->setTitle(QString());
        ID_LABEL->setText(QCoreApplication::translate("ThuNgan", "ID:", nullptr));
        MONEY_LABEL->setText(QCoreApplication::translate("ThuNgan", "Money:", nullptr));
        ID_LINE->setText(QString());
        ID_LINE->setPlaceholderText(QCoreApplication::translate("ThuNgan", "Enter Customer ID", nullptr));
        ST_LINE->setText(QString());
        ST_LINE->setPlaceholderText(QCoreApplication::translate("ThuNgan", "Enter Money", nullptr));
        ADD_MONEY_BUTTON->setText(QCoreApplication::translate("ThuNgan", "ADD MONEY", nullptr));
        EXIT_BUTTON->setText(QCoreApplication::translate("ThuNgan", "GO BACK", nullptr));
        label->setText(QCoreApplication::translate("ThuNgan", "CASHIER INTERFACE", nullptr));
        toolButton->setText(QCoreApplication::translate("ThuNgan", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThuNgan: public Ui_ThuNgan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THUNGAN_H
