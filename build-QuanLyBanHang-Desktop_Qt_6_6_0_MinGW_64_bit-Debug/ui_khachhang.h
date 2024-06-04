/********************************************************************************
** Form generated from reading UI file 'khachhang.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KHACHHANG_H
#define UI_KHACHHANG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KhachHang
{
public:
    QWidget *Form;
    QFrame *frame;
    QPushButton *EXIT_BUTTON;
    QPlainTextEdit *INFO_EDIT;
    QLabel *DN_LABEL;
    QPlainTextEdit *INFO_EDIT_2;
    QPlainTextEdit *INFO_EDIT_3;
    QPushButton *BUY_BUTTON;
    QPushButton *BUY_BUTTON_2;
    QPushButton *BUY_BUTTON_3;
    QPushButton *LEFT_BUTTON;
    QPushButton *RIGHT_BUTTON;
    QLabel *PRODUCT_LABEL;
    QLabel *PRODUCT_LABEL_2;
    QLabel *PRODUCT_LABEL_3;
    QLabel *lblMoney;
    QToolButton *toolButton;
    QLabel *lblHello;

    void setupUi(QMainWindow *KhachHang)
    {
        if (KhachHang->objectName().isEmpty())
            KhachHang->setObjectName("KhachHang");
        KhachHang->resize(917, 585);
        KhachHang->setStyleSheet(QString::fromUtf8("#Form\n"
"{\n"
"	background-image: url(:/background/BACKGROUND/bg1.jpg);\n"
"}"));
        Form = new QWidget(KhachHang);
        Form->setObjectName("Form");
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(27, 43, 861, 511));
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
"}\n"
"\n"
"#INFO_EDIT\n"
"{\n"
"		border: 2px solid rgb(255, 255, 127);\n"
"		border-radius: 0;\n"
"}\n"
"\n"
"#INFO_EDIT_2\n"
"{\n"
"		border: 2px solid rgb(255, 255, 127);\n"
"		border-radius: 0;\n"
"}\n"
"\n"
"#INFO_EDIT_3\n"
"{\n"
"		border: 2px solid rgb(255, 255, 127);\n"
"		border-radius: 0;\n"
"}\n"
"\n"
"#LEFT_BUTTON\n"
"{\n"
"	\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"#RIGHT_BUTTON\n"
"{\n"
"	border-radius: 20px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        EXIT_BUTTON = new QPushButton(frame);
        EXIT_BUTTON->setObjectName("EXIT_BUTTON");
        EXIT_BUTTON->setGeometry(QRect(10, 10, 141, 41));
        EXIT_BUTTON->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI\";\n"
"background-color: rgb(255, 85, 127);"));
        INFO_EDIT = new QPlainTextEdit(frame);
        INFO_EDIT->setObjectName("INFO_EDIT");
        INFO_EDIT->setGeometry(QRect(9, 277, 241, 111));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(INFO_EDIT->sizePolicy().hasHeightForWidth());
        INFO_EDIT->setSizePolicy(sizePolicy);
        INFO_EDIT->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"font: 700 italic 10pt \"Segoe UI\";"));
        INFO_EDIT->setReadOnly(true);
        DN_LABEL = new QLabel(frame);
        DN_LABEL->setObjectName("DN_LABEL");
        DN_LABEL->setGeometry(QRect(172, 9, 531, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        DN_LABEL->setFont(font);
        DN_LABEL->setAutoFillBackground(false);
        DN_LABEL->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 900 20pt \"Segoe UI\";"));
        DN_LABEL->setTextFormat(Qt::PlainText);
        DN_LABEL->setScaledContents(false);
        DN_LABEL->setAlignment(Qt::AlignCenter);
        INFO_EDIT_2 = new QPlainTextEdit(frame);
        INFO_EDIT_2->setObjectName("INFO_EDIT_2");
        INFO_EDIT_2->setGeometry(QRect(312, 277, 241, 111));
        INFO_EDIT_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"font: 700 italic 10pt \"Segoe UI\";"));
        INFO_EDIT_2->setReadOnly(true);
        INFO_EDIT_3 = new QPlainTextEdit(frame);
        INFO_EDIT_3->setObjectName("INFO_EDIT_3");
        INFO_EDIT_3->setGeometry(QRect(610, 277, 241, 111));
        INFO_EDIT_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"font: 700 italic 10pt \"Segoe UI\";"));
        INFO_EDIT_3->setReadOnly(true);
        BUY_BUTTON = new QPushButton(frame);
        BUY_BUTTON->setObjectName("BUY_BUTTON");
        BUY_BUTTON->setGeometry(QRect(9, 390, 241, 31));
        BUY_BUTTON->setStyleSheet(QString::fromUtf8("font: 900 20pt \"Segoe UI\";\n"
"background-color: rgb(241, 237, 255);\n"
""));
        BUY_BUTTON_2 = new QPushButton(frame);
        BUY_BUTTON_2->setObjectName("BUY_BUTTON_2");
        BUY_BUTTON_2->setGeometry(QRect(312, 390, 241, 31));
        BUY_BUTTON_2->setStyleSheet(QString::fromUtf8("font: 900 20pt \"Segoe UI\";\n"
"background-color: rgb(241, 237, 255);\n"
""));
        BUY_BUTTON_3 = new QPushButton(frame);
        BUY_BUTTON_3->setObjectName("BUY_BUTTON_3");
        BUY_BUTTON_3->setGeometry(QRect(610, 390, 241, 31));
        BUY_BUTTON_3->setStyleSheet(QString::fromUtf8("font: 900 20pt \"Segoe UI\";\n"
"background-color: rgb(241, 237, 255);\n"
""));
        LEFT_BUTTON = new QPushButton(frame);
        LEFT_BUTTON->setObjectName("LEFT_BUTTON");
        LEFT_BUTTON->setGeometry(QRect(0, 440, 71, 71));
        LEFT_BUTTON->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/ICON/left-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        LEFT_BUTTON->setIcon(icon);
        LEFT_BUTTON->setIconSize(QSize(64, 64));
        RIGHT_BUTTON = new QPushButton(frame);
        RIGHT_BUTTON->setObjectName("RIGHT_BUTTON");
        RIGHT_BUTTON->setGeometry(QRect(790, 440, 71, 71));
        RIGHT_BUTTON->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/ICON/right-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        RIGHT_BUTTON->setIcon(icon1);
        RIGHT_BUTTON->setIconSize(QSize(64, 64));
        PRODUCT_LABEL = new QLabel(frame);
        PRODUCT_LABEL->setObjectName("PRODUCT_LABEL");
        PRODUCT_LABEL->setGeometry(QRect(9, 80, 241, 191));
        PRODUCT_LABEL->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PRODUCT_LABEL->setPixmap(QPixmap(QString::fromUtf8(":/background/BACKGROUND/desktop computer-rafiki.png")));
        PRODUCT_LABEL->setScaledContents(true);
        PRODUCT_LABEL_2 = new QLabel(frame);
        PRODUCT_LABEL_2->setObjectName("PRODUCT_LABEL_2");
        PRODUCT_LABEL_2->setGeometry(QRect(312, 80, 241, 191));
        PRODUCT_LABEL_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PRODUCT_LABEL_2->setPixmap(QPixmap(QString::fromUtf8(":/background/BACKGROUND/desktop computer-rafiki.png")));
        PRODUCT_LABEL_2->setScaledContents(true);
        PRODUCT_LABEL_3 = new QLabel(frame);
        PRODUCT_LABEL_3->setObjectName("PRODUCT_LABEL_3");
        PRODUCT_LABEL_3->setGeometry(QRect(610, 80, 241, 191));
        PRODUCT_LABEL_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PRODUCT_LABEL_3->setPixmap(QPixmap(QString::fromUtf8(":/background/BACKGROUND/desktop computer-rafiki.png")));
        PRODUCT_LABEL_3->setScaledContents(true);
        lblMoney = new QLabel(frame);
        lblMoney->setObjectName("lblMoney");
        lblMoney->setGeometry(QRect(250, 460, 361, 31));
        lblMoney->setAlignment(Qt::AlignCenter);
        toolButton = new QToolButton(Form);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(410, 10, 91, 91));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        toolButton->setFont(font1);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	\n"
"	background-color: rgb(255, 156, 43);\n"
"	border-radius: 45px;\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/ICON/laptop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon2);
        toolButton->setIconSize(QSize(128, 128));
        lblHello = new QLabel(Form);
        lblHello->setObjectName("lblHello");
        lblHello->setGeometry(QRect(530, 10, 371, 20));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        lblHello->setFont(font2);
        KhachHang->setCentralWidget(Form);

        retranslateUi(KhachHang);

        QMetaObject::connectSlotsByName(KhachHang);
    } // setupUi

    void retranslateUi(QMainWindow *KhachHang)
    {
        KhachHang->setWindowTitle(QCoreApplication::translate("KhachHang", "MainWindow", nullptr));
        EXIT_BUTTON->setText(QCoreApplication::translate("KhachHang", "GO BACK", nullptr));
        INFO_EDIT->setPlainText(QCoreApplication::translate("KhachHang", "Name:\n"
"\n"
"Price:", nullptr));
        DN_LABEL->setText(QCoreApplication::translate("KhachHang", "WELCOME TO             LAPTOP STORE", nullptr));
        INFO_EDIT_2->setPlainText(QCoreApplication::translate("KhachHang", "Name:\n"
"\n"
"Price:", nullptr));
        INFO_EDIT_3->setPlainText(QCoreApplication::translate("KhachHang", "Name:\n"
"\n"
"Price:", nullptr));
        BUY_BUTTON->setText(QCoreApplication::translate("KhachHang", "BUY", nullptr));
        BUY_BUTTON_2->setText(QCoreApplication::translate("KhachHang", "BUY", nullptr));
        BUY_BUTTON_3->setText(QCoreApplication::translate("KhachHang", "BUY", nullptr));
        LEFT_BUTTON->setText(QString());
        RIGHT_BUTTON->setText(QString());
        PRODUCT_LABEL->setText(QString());
        PRODUCT_LABEL_2->setText(QString());
        PRODUCT_LABEL_3->setText(QString());
        lblMoney->setText(QCoreApplication::translate("KhachHang", "Ti\341\273\201n c\341\273\247a b\341\272\241n:", nullptr));
        toolButton->setText(QCoreApplication::translate("KhachHang", "...", nullptr));
        lblHello->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class KhachHang: public Ui_KhachHang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KHACHHANG_H
