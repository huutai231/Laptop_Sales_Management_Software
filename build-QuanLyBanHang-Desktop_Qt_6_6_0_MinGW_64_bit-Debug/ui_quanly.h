/********************************************************************************
** Form generated from reading UI file 'quanly.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUANLY_H
#define UI_QUANLY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuanLy
{
public:
    QWidget *Form;
    QFrame *frame;
    QGroupBox *groupBox;
    QPushButton *XKH_BUTTON;
    QPushButton *TTKTN_BUTTON;
    QPushButton *DMK_BUTTON;
    QPushButton *LSGD_BUTTON;
    QPushButton *CSSP_BUTTON;
    QPushButton *EXIT_BUTTON;
    QLabel *QL_LABEL;
    QLabel *QL_LABEL_2;
    QToolButton *toolButton;

    void setupUi(QMainWindow *QuanLy)
    {
        if (QuanLy->objectName().isEmpty())
            QuanLy->setObjectName("QuanLy");
        QuanLy->resize(543, 399);
        QuanLy->setMinimumSize(QSize(460, 230));
        QuanLy->setMaximumSize(QSize(1000, 1000));
        QuanLy->setStyleSheet(QString::fromUtf8("#Form\n"
"{\n"
"	background-image: url(:/background/BACKGROUND/bg1.jpg);\n"
"}"));
        Form = new QWidget(QuanLy);
        Form->setObjectName("Form");
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(26, 90, 491, 281));
        frame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	background-color: #222;\n"
"	border-radius: 20px;\n"
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
        groupBox->setGeometry(QRect(10, 70, 471, 201));
        XKH_BUTTON = new QPushButton(groupBox);
        XKH_BUTTON->setObjectName("XKH_BUTTON");
        XKH_BUTTON->setGeometry(QRect(11, 18, 180, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        XKH_BUTTON->setFont(font);
        XKH_BUTTON->setFlat(false);
        TTKTN_BUTTON = new QPushButton(groupBox);
        TTKTN_BUTTON->setObjectName("TTKTN_BUTTON");
        TTKTN_BUTTON->setGeometry(QRect(209, 18, 251, 41));
        TTKTN_BUTTON->setFont(font);
        TTKTN_BUTTON->setFlat(false);
        DMK_BUTTON = new QPushButton(groupBox);
        DMK_BUTTON->setObjectName("DMK_BUTTON");
        DMK_BUTTON->setGeometry(QRect(209, 81, 251, 41));
        DMK_BUTTON->setFont(font);
        DMK_BUTTON->setFlat(false);
        LSGD_BUTTON = new QPushButton(groupBox);
        LSGD_BUTTON->setObjectName("LSGD_BUTTON");
        LSGD_BUTTON->setGeometry(QRect(11, 81, 180, 41));
        LSGD_BUTTON->setFont(font);
        LSGD_BUTTON->setFlat(false);
        CSSP_BUTTON = new QPushButton(groupBox);
        CSSP_BUTTON->setObjectName("CSSP_BUTTON");
        CSSP_BUTTON->setGeometry(QRect(10, 141, 311, 41));
        CSSP_BUTTON->setFont(font);
        CSSP_BUTTON->setFlat(false);
        EXIT_BUTTON = new QPushButton(groupBox);
        EXIT_BUTTON->setObjectName("EXIT_BUTTON");
        EXIT_BUTTON->setGeometry(QRect(337, 141, 121, 41));
        EXIT_BUTTON->setFont(font);
        EXIT_BUTTON->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);"));
        EXIT_BUTTON->setFlat(false);
        QL_LABEL = new QLabel(frame);
        QL_LABEL->setObjectName("QL_LABEL");
        QL_LABEL->setGeometry(QRect(18, 12, 151, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        QL_LABEL->setFont(font1);
        QL_LABEL->setAutoFillBackground(false);
        QL_LABEL->setStyleSheet(QString::fromUtf8("font: 900 20pt \"Segoe UI\";"));
        QL_LABEL->setTextFormat(Qt::PlainText);
        QL_LABEL->setAlignment(Qt::AlignCenter);
        QL_LABEL_2 = new QLabel(frame);
        QL_LABEL_2->setObjectName("QL_LABEL_2");
        QL_LABEL_2->setGeometry(QRect(321, 12, 151, 41));
        QL_LABEL_2->setFont(font1);
        QL_LABEL_2->setAutoFillBackground(false);
        QL_LABEL_2->setStyleSheet(QString::fromUtf8("font: 900 20pt \"Segoe UI\";"));
        QL_LABEL_2->setTextFormat(Qt::PlainText);
        QL_LABEL_2->setAlignment(Qt::AlignCenter);
        toolButton = new QToolButton(Form);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(208, 30, 121, 121));
        toolButton->setFont(font);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color: qconicalgradient(cx:0.489, cy:0.5, angle:0, stop:0.460227 rgba(246, 230, 116, 255));\n"
"	border-radius: 15px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/ICON/man.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(128, 128));
        QuanLy->setCentralWidget(Form);

        retranslateUi(QuanLy);

        QMetaObject::connectSlotsByName(QuanLy);
    } // setupUi

    void retranslateUi(QMainWindow *QuanLy)
    {
        QuanLy->setWindowTitle(QCoreApplication::translate("QuanLy", "Qu\341\272\243n L\303\275", nullptr));
        groupBox->setTitle(QString());
        XKH_BUTTON->setText(QCoreApplication::translate("QuanLy", "CUSTOMER INFO", nullptr));
        TTKTN_BUTTON->setText(QCoreApplication::translate("QuanLy", "CREATE STAFF ACCOUNT", nullptr));
        DMK_BUTTON->setText(QCoreApplication::translate("QuanLy", "PASSWORD CHANGE", nullptr));
        LSGD_BUTTON->setText(QCoreApplication::translate("QuanLy", "TRADE HISTORY", nullptr));
        CSSP_BUTTON->setText(QCoreApplication::translate("QuanLy", "PRODUCT MODIFY", nullptr));
        EXIT_BUTTON->setText(QCoreApplication::translate("QuanLy", "GO BACK", nullptr));
        QL_LABEL->setText(QCoreApplication::translate("QuanLy", "MANAGER", nullptr));
        QL_LABEL_2->setText(QCoreApplication::translate("QuanLy", "INTERFACE", nullptr));
        toolButton->setText(QCoreApplication::translate("QuanLy", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuanLy: public Ui_QuanLy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUANLY_H
