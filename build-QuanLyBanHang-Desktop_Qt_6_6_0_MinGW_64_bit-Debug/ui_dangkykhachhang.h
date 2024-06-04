/********************************************************************************
** Form generated from reading UI file 'dangkykhachhang.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANGKYKHACHHANG_H
#define UI_DANGKYKHACHHANG_H

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

class Ui_DangKyKhachHang
{
public:
    QWidget *Form;
    QFrame *frame;
    QGroupBox *groupBox;
    QLabel *ID_LABEL;
    QLabel *PASSWORD_LABEL;
    QLineEdit *ID_LINE;
    QLineEdit *PASSWORD_LINE;
    QPushButton *DK_BUTTON;
    QLabel *NAME_LABEL;
    QLineEdit *NAME_LINE;
    QPushButton *EXIT_BUTTON;
    QLabel *label;
    QToolButton *toolButton;

    void setupUi(QMainWindow *DangKyKhachHang)
    {
        if (DangKyKhachHang->objectName().isEmpty())
            DangKyKhachHang->setObjectName("DangKyKhachHang");
        DangKyKhachHang->resize(348, 631);
        DangKyKhachHang->setMinimumSize(QSize(0, 0));
        DangKyKhachHang->setMaximumSize(QSize(1000, 1000));
        DangKyKhachHang->setStyleSheet(QString::fromUtf8("#Form\n"
"{\n"
"	background-image: url(:/background/BACKGROUND/bg1.jpg);\n"
"}"));
        Form = new QWidget(DangKyKhachHang);
        Form->setObjectName("Form");
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(19, 90, 311, 521));
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
        groupBox->setGeometry(QRect(10, 130, 291, 381));
        groupBox->setFlat(false);
        ID_LABEL = new QLabel(groupBox);
        ID_LABEL->setObjectName("ID_LABEL");
        ID_LABEL->setGeometry(QRect(11, 6, 41, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        ID_LABEL->setFont(font);
        ID_LABEL->setLayoutDirection(Qt::LeftToRight);
        ID_LABEL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        PASSWORD_LABEL = new QLabel(groupBox);
        PASSWORD_LABEL->setObjectName("PASSWORD_LABEL");
        PASSWORD_LABEL->setGeometry(QRect(10, 171, 131, 31));
        PASSWORD_LABEL->setFont(font);
        ID_LINE = new QLineEdit(groupBox);
        ID_LINE->setObjectName("ID_LINE");
        ID_LINE->setGeometry(QRect(10, 43, 271, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        ID_LINE->setFont(font1);
        ID_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        PASSWORD_LINE = new QLineEdit(groupBox);
        PASSWORD_LINE->setObjectName("PASSWORD_LINE");
        PASSWORD_LINE->setGeometry(QRect(10, 210, 271, 31));
        PASSWORD_LINE->setFont(font1);
        PASSWORD_LINE->setEchoMode(QLineEdit::Password);
        PASSWORD_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        DK_BUTTON = new QPushButton(groupBox);
        DK_BUTTON->setObjectName("DK_BUTTON");
        DK_BUTTON->setGeometry(QRect(10, 265, 271, 41));
        DK_BUTTON->setFont(font1);
        DK_BUTTON->setFlat(false);
        NAME_LABEL = new QLabel(groupBox);
        NAME_LABEL->setObjectName("NAME_LABEL");
        NAME_LABEL->setGeometry(QRect(10, 89, 111, 31));
        NAME_LABEL->setFont(font);
        NAME_LINE = new QLineEdit(groupBox);
        NAME_LINE->setObjectName("NAME_LINE");
        NAME_LINE->setGeometry(QRect(10, 128, 271, 31));
        NAME_LINE->setFont(font1);
        NAME_LINE->setEchoMode(QLineEdit::Normal);
        NAME_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        EXIT_BUTTON = new QPushButton(groupBox);
        EXIT_BUTTON->setObjectName("EXIT_BUTTON");
        EXIT_BUTTON->setGeometry(QRect(10, 323, 271, 41));
        EXIT_BUTTON->setFont(font1);
        EXIT_BUTTON->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);"));
        EXIT_BUTTON->setFlat(false);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(5, 70, 301, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(false);
        label->setFont(font2);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 900 20pt \"Segoe UI\";"));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        toolButton = new QToolButton(Form);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(114, 30, 121, 121));
        toolButton->setFont(font1);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color: qconicalgradient(cx:0.489, cy:0.5, angle:0, stop:0.460227 rgba(246, 230, 116, 255));\n"
"	border-radius: 60px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/ICON/written-paper.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(80, 80));
        DangKyKhachHang->setCentralWidget(Form);

        retranslateUi(DangKyKhachHang);

        QMetaObject::connectSlotsByName(DangKyKhachHang);
    } // setupUi

    void retranslateUi(QMainWindow *DangKyKhachHang)
    {
        DangKyKhachHang->setWindowTitle(QCoreApplication::translate("DangKyKhachHang", "\304\220\304\203ng K\303\275 Kh\303\241ch H\303\240ng", nullptr));
        groupBox->setTitle(QString());
        ID_LABEL->setText(QCoreApplication::translate("DangKyKhachHang", "ID", nullptr));
        PASSWORD_LABEL->setText(QCoreApplication::translate("DangKyKhachHang", "Password", nullptr));
        ID_LINE->setText(QString());
        ID_LINE->setPlaceholderText(QCoreApplication::translate("DangKyKhachHang", "Enter Your ID", nullptr));
        PASSWORD_LINE->setText(QString());
        PASSWORD_LINE->setPlaceholderText(QCoreApplication::translate("DangKyKhachHang", "Enter Your Password", nullptr));
        DK_BUTTON->setText(QCoreApplication::translate("DangKyKhachHang", "CREATE ACCOUNT", nullptr));
        NAME_LABEL->setText(QCoreApplication::translate("DangKyKhachHang", "Name", nullptr));
        NAME_LINE->setText(QString());
        NAME_LINE->setPlaceholderText(QCoreApplication::translate("DangKyKhachHang", "Enter Your Name", nullptr));
        EXIT_BUTTON->setText(QCoreApplication::translate("DangKyKhachHang", "GO BACK", nullptr));
        label->setText(QCoreApplication::translate("DangKyKhachHang", "CUSTOMER ACCOUNT", nullptr));
        toolButton->setText(QCoreApplication::translate("DangKyKhachHang", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DangKyKhachHang: public Ui_DangKyKhachHang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANGKYKHACHHANG_H
