/********************************************************************************
** Form generated from reading UI file 'doimatkhau.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOIMATKHAU_H
#define UI_DOIMATKHAU_H

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

class Ui_DoiMatKhau
{
public:
    QWidget *Form;
    QFrame *frame;
    QGroupBox *groupBox;
    QLabel *ID_LABEL;
    QLabel *NP_LABEL;
    QLineEdit *ID_LINE;
    QLineEdit *NP_LINE;
    QPushButton *DMK_BUTTON;
    QLabel *CF_LABEL;
    QLineEdit *CF_LINE;
    QPushButton *EXIT_BUTTON;
    QLabel *label;
    QToolButton *toolButton;

    void setupUi(QMainWindow *DoiMatKhau)
    {
        if (DoiMatKhau->objectName().isEmpty())
            DoiMatKhau->setObjectName("DoiMatKhau");
        DoiMatKhau->resize(368, 606);
        DoiMatKhau->setMinimumSize(QSize(368, 200));
        DoiMatKhau->setMaximumSize(QSize(500, 1000));
        DoiMatKhau->setStyleSheet(QString::fromUtf8("#Form\n"
"{\n"
"	background-image: url(:/background/BACKGROUND/bg1.jpg);\n"
"}"));
        Form = new QWidget(DoiMatKhau);
        Form->setObjectName("Form");
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(34, 80, 301, 511));
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
        groupBox->setGeometry(QRect(10, 100, 281, 401));
        groupBox->setFlat(false);
        ID_LABEL = new QLabel(groupBox);
        ID_LABEL->setObjectName("ID_LABEL");
        ID_LABEL->setGeometry(QRect(10, 8, 41, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        ID_LABEL->setFont(font);
        ID_LABEL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        NP_LABEL = new QLabel(groupBox);
        NP_LABEL->setObjectName("NP_LABEL");
        NP_LABEL->setGeometry(QRect(10, 100, 131, 31));
        NP_LABEL->setFont(font);
        ID_LINE = new QLineEdit(groupBox);
        ID_LINE->setObjectName("ID_LINE");
        ID_LINE->setGeometry(QRect(10, 50, 261, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        ID_LINE->setFont(font1);
        ID_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        NP_LINE = new QLineEdit(groupBox);
        NP_LINE->setObjectName("NP_LINE");
        NP_LINE->setGeometry(QRect(10, 140, 261, 31));
        NP_LINE->setFont(font1);
        NP_LINE->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        NP_LINE->setEchoMode(QLineEdit::Password);
        NP_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        DMK_BUTTON = new QPushButton(groupBox);
        DMK_BUTTON->setObjectName("DMK_BUTTON");
        DMK_BUTTON->setGeometry(QRect(10, 290, 261, 41));
        DMK_BUTTON->setFont(font1);
        DMK_BUTTON->setFlat(false);
        CF_LABEL = new QLabel(groupBox);
        CF_LABEL->setObjectName("CF_LABEL");
        CF_LABEL->setGeometry(QRect(10, 190, 111, 31));
        CF_LABEL->setFont(font);
        CF_LINE = new QLineEdit(groupBox);
        CF_LINE->setObjectName("CF_LINE");
        CF_LINE->setGeometry(QRect(10, 230, 261, 31));
        CF_LINE->setFont(font1);
        CF_LINE->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        CF_LINE->setEchoMode(QLineEdit::Password);
        CF_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        EXIT_BUTTON = new QPushButton(groupBox);
        EXIT_BUTTON->setObjectName("EXIT_BUTTON");
        EXIT_BUTTON->setGeometry(QRect(10, 346, 261, 41));
        EXIT_BUTTON->setFont(font1);
        EXIT_BUTTON->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);"));
        EXIT_BUTTON->setFlat(false);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 54, 301, 41));
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
        toolButton = new QToolButton(Form);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(135, 31, 101, 101));
        toolButton->setFont(font1);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color: rgb(255, 151, 250);\n"
"	\n"
"	\n"
"	border-radius: 50px;;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/ICON/reset-password.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(100, 100));
        DoiMatKhau->setCentralWidget(Form);

        retranslateUi(DoiMatKhau);

        QMetaObject::connectSlotsByName(DoiMatKhau);
    } // setupUi

    void retranslateUi(QMainWindow *DoiMatKhau)
    {
        DoiMatKhau->setWindowTitle(QCoreApplication::translate("DoiMatKhau", "\304\220\341\273\225i M\341\272\255t Kh\341\272\251u", nullptr));
        groupBox->setTitle(QString());
        ID_LABEL->setText(QCoreApplication::translate("DoiMatKhau", "ID:", nullptr));
        NP_LABEL->setText(QCoreApplication::translate("DoiMatKhau", "New pass:", nullptr));
        ID_LINE->setText(QString());
        ID_LINE->setPlaceholderText(QCoreApplication::translate("DoiMatKhau", "Enter Your ID", nullptr));
        NP_LINE->setText(QString());
        NP_LINE->setPlaceholderText(QCoreApplication::translate("DoiMatKhau", "Enter New Password", nullptr));
        DMK_BUTTON->setText(QCoreApplication::translate("DoiMatKhau", "CHANGE PASSWORD", nullptr));
        CF_LABEL->setText(QCoreApplication::translate("DoiMatKhau", "Confirm:", nullptr));
        CF_LINE->setText(QString());
        CF_LINE->setPlaceholderText(QCoreApplication::translate("DoiMatKhau", "Confirm Your Password", nullptr));
        EXIT_BUTTON->setText(QCoreApplication::translate("DoiMatKhau", "GO BACK", nullptr));
        label->setText(QCoreApplication::translate("DoiMatKhau", "CHANGE PASSWORD", nullptr));
        toolButton->setText(QCoreApplication::translate("DoiMatKhau", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoiMatKhau: public Ui_DoiMatKhau {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOIMATKHAU_H
