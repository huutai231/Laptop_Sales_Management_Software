/********************************************************************************
** Form generated from reading UI file 'dangnhap.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANGNHAP_H
#define UI_DANGNHAP_H

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

class Ui_DangNhap
{
public:
    QWidget *Form;
    QFrame *frame;
    QLabel *DN_LABEL;
    QGroupBox *groupBox;
    QLineEdit *ID_LINE;
    QLineEdit *PW_LINE;
    QPushButton *DN_BUTTON;
    QPushButton *DK_BUTTON;
    QLabel *label;
    QLabel *PASS_LABEL;
    QLabel *UID_LABEL;
    QPushButton *TERMINATE_BUTTON;
    QToolButton *toolButton;

    void setupUi(QMainWindow *DangNhap)
    {
        if (DangNhap->objectName().isEmpty())
            DangNhap->setObjectName("DangNhap");
        DangNhap->resize(368, 519);
        DangNhap->setMinimumSize(QSize(368, 519));
        DangNhap->setMaximumSize(QSize(368, 519));
        DangNhap->setAutoFillBackground(true);
        DangNhap->setStyleSheet(QString::fromUtf8("#Form\n"
"{\n"
"	background-image: url(:/background/BACKGROUND/bg1.jpg);\n"
"}"));
        DangNhap->setDocumentMode(false);
        DangNhap->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        Form = new QWidget(DangNhap);
        Form->setObjectName("Form");
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 60, 291, 441));
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
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        DN_LABEL = new QLabel(frame);
        DN_LABEL->setObjectName("DN_LABEL");
        DN_LABEL->setGeometry(QRect(100, 3, 91, 41));
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
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(15, 60, 261, 361));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	border: 2px solid rgb(255, 255, 127);\n"
"}"));
        groupBox->setFlat(false);
        ID_LINE = new QLineEdit(groupBox);
        ID_LINE->setObjectName("ID_LINE");
        ID_LINE->setGeometry(QRect(10, 60, 241, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        ID_LINE->setFont(font1);
        ID_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        PW_LINE = new QLineEdit(groupBox);
        PW_LINE->setObjectName("PW_LINE");
        PW_LINE->setGeometry(QRect(10, 166, 241, 31));
        PW_LINE->setFont(font1);
        PW_LINE->setEchoMode(QLineEdit::Password);
        PW_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        DN_BUTTON = new QPushButton(groupBox);
        DN_BUTTON->setObjectName("DN_BUTTON");
        DN_BUTTON->setGeometry(QRect(10, 224, 241, 41));
        DN_BUTTON->setFont(font1);
        DN_BUTTON->setStyleSheet(QString::fromUtf8(""));
        DN_BUTTON->setFlat(false);
        DK_BUTTON = new QPushButton(groupBox);
        DK_BUTTON->setObjectName("DK_BUTTON");
        DK_BUTTON->setGeometry(QRect(10, 303, 241, 41));
        DK_BUTTON->setFont(font1);
        DK_BUTTON->setFlat(false);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(113, 275, 31, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 900 12pt \"Segoe UI\";"));
        label->setAlignment(Qt::AlignCenter);
        PASS_LABEL = new QLabel(groupBox);
        PASS_LABEL->setObjectName("PASS_LABEL");
        PASS_LABEL->setGeometry(QRect(10, 116, 131, 41));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        PASS_LABEL->setFont(font2);
        PASS_LABEL->setAutoFillBackground(false);
        PASS_LABEL->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        PASS_LABEL->setTextFormat(Qt::PlainText);
        PASS_LABEL->setScaledContents(false);
        PASS_LABEL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        UID_LABEL = new QLabel(groupBox);
        UID_LABEL->setObjectName("UID_LABEL");
        UID_LABEL->setGeometry(QRect(10, 10, 101, 31));
        UID_LABEL->setFont(font2);
        UID_LABEL->setAutoFillBackground(false);
        UID_LABEL->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        UID_LABEL->setTextFormat(Qt::PlainText);
        UID_LABEL->setScaledContents(false);
        UID_LABEL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        TERMINATE_BUTTON = new QPushButton(frame);
        TERMINATE_BUTTON->setObjectName("TERMINATE_BUTTON");
        TERMINATE_BUTTON->setGeometry(QRect(210, 0, 81, 51));
        TERMINATE_BUTTON->setFont(font1);
        TERMINATE_BUTTON->setStyleSheet(QString::fromUtf8("#TERMINATE_BUTTON\n"
"{\n"
"	background-color: rgb(255, 85, 127); \n"
"   \n"
"	background-color: rgb(255, 0, 0);\n"
"	border-radius: 20px\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/ICON/switch.png"), QSize(), QIcon::Normal, QIcon::Off);
        TERMINATE_BUTTON->setIcon(icon);
        TERMINATE_BUTTON->setIconSize(QSize(48, 48));
        TERMINATE_BUTTON->setFlat(false);
        toolButton = new QToolButton(Form);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(40, 20, 91, 91));
        toolButton->setFont(font1);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color: qconicalgradient(cx:0.489, cy:0.5, angle:0, stop:0.460227 rgba(246, 230, 116, 255));\n"
"	border-radius: 30px;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/ICON/user2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(64, 64));
        DangNhap->setCentralWidget(Form);

        retranslateUi(DangNhap);

        QMetaObject::connectSlotsByName(DangNhap);
    } // setupUi

    void retranslateUi(QMainWindow *DangNhap)
    {
        DangNhap->setWindowTitle(QCoreApplication::translate("DangNhap", "\304\220\304\203ng Nh\341\272\255p", nullptr));
        DN_LABEL->setText(QCoreApplication::translate("DangNhap", "LOGIN", nullptr));
        groupBox->setTitle(QString());
        ID_LINE->setText(QString());
        ID_LINE->setPlaceholderText(QCoreApplication::translate("DangNhap", "User ID", nullptr));
        PW_LINE->setText(QString());
        PW_LINE->setPlaceholderText(QCoreApplication::translate("DangNhap", "Password", nullptr));
        DN_BUTTON->setText(QCoreApplication::translate("DangNhap", "LOGIN", nullptr));
        DK_BUTTON->setText(QCoreApplication::translate("DangNhap", "SIGNUP", nullptr));
        label->setText(QCoreApplication::translate("DangNhap", "OR", nullptr));
        PASS_LABEL->setText(QCoreApplication::translate("DangNhap", "Password", nullptr));
        UID_LABEL->setText(QCoreApplication::translate("DangNhap", "User ID", nullptr));
        TERMINATE_BUTTON->setText(QString());
        toolButton->setText(QCoreApplication::translate("DangNhap", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DangNhap: public Ui_DangNhap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANGNHAP_H
