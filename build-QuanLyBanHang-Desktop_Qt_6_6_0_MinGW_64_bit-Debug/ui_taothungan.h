/********************************************************************************
** Form generated from reading UI file 'taothungan.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAOTHUNGAN_H
#define UI_TAOTHUNGAN_H

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

class Ui_TaoThuNgan
{
public:
    QWidget *Form;
    QFrame *frame;
    QGroupBox *groupBox;
    QLabel *ID_LABEL;
    QLabel *PW_LABEL;
    QLineEdit *ID_LINE;
    QLineEdit *PW_LINE;
    QPushButton *CA_BUTTON;
    QLabel *NAME_LABEL;
    QLineEdit *NAME_LINE;
    QPushButton *EXIT_BUTTON;
    QLabel *label;
    QToolButton *toolButton;

    void setupUi(QMainWindow *TaoThuNgan)
    {
        if (TaoThuNgan->objectName().isEmpty())
            TaoThuNgan->setObjectName("TaoThuNgan");
        TaoThuNgan->resize(348, 638);
        TaoThuNgan->setStyleSheet(QString::fromUtf8("#Form\n"
"{\n"
"	background-image: url(:/background/BACKGROUND/bg1.jpg);\n"
"}"));
        Form = new QWidget(TaoThuNgan);
        Form->setObjectName("Form");
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 80, 291, 531));
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
        groupBox->setGeometry(QRect(15, 114, 261, 401));
        groupBox->setFlat(false);
        ID_LABEL = new QLabel(groupBox);
        ID_LABEL->setObjectName("ID_LABEL");
        ID_LABEL->setGeometry(QRect(10, 10, 91, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        ID_LABEL->setFont(font);
        ID_LABEL->setLayoutDirection(Qt::LeftToRight);
        ID_LABEL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        PW_LABEL = new QLabel(groupBox);
        PW_LABEL->setObjectName("PW_LABEL");
        PW_LABEL->setGeometry(QRect(10, 194, 131, 31));
        PW_LABEL->setFont(font);
        ID_LINE = new QLineEdit(groupBox);
        ID_LINE->setObjectName("ID_LINE");
        ID_LINE->setGeometry(QRect(10, 49, 241, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        ID_LINE->setFont(font1);
        ID_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        PW_LINE = new QLineEdit(groupBox);
        PW_LINE->setObjectName("PW_LINE");
        PW_LINE->setGeometry(QRect(10, 234, 241, 31));
        PW_LINE->setFont(font1);
        PW_LINE->setEchoMode(QLineEdit::Password);
        PW_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CA_BUTTON = new QPushButton(groupBox);
        CA_BUTTON->setObjectName("CA_BUTTON");
        CA_BUTTON->setGeometry(QRect(10, 290, 241, 41));
        CA_BUTTON->setFont(font1);
        CA_BUTTON->setFlat(false);
        NAME_LABEL = new QLabel(groupBox);
        NAME_LABEL->setObjectName("NAME_LABEL");
        NAME_LABEL->setGeometry(QRect(10, 101, 111, 31));
        NAME_LABEL->setFont(font);
        NAME_LINE = new QLineEdit(groupBox);
        NAME_LINE->setObjectName("NAME_LINE");
        NAME_LINE->setGeometry(QRect(10, 140, 241, 31));
        NAME_LINE->setFont(font1);
        NAME_LINE->setEchoMode(QLineEdit::Normal);
        NAME_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        EXIT_BUTTON = new QPushButton(groupBox);
        EXIT_BUTTON->setObjectName("EXIT_BUTTON");
        EXIT_BUTTON->setGeometry(QRect(10, 345, 241, 41));
        EXIT_BUTTON->setFont(font1);
        EXIT_BUTTON->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);"));
        EXIT_BUTTON->setFlat(false);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 66, 291, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font2);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 900 20pt \"Segoe UI\";"));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        toolButton = new QToolButton(Form);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(115, 20, 121, 121));
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
        TaoThuNgan->setCentralWidget(Form);

        retranslateUi(TaoThuNgan);

        QMetaObject::connectSlotsByName(TaoThuNgan);
    } // setupUi

    void retranslateUi(QMainWindow *TaoThuNgan)
    {
        TaoThuNgan->setWindowTitle(QCoreApplication::translate("TaoThuNgan", "T\341\272\241o T\303\240i Kho\341\272\243n Thu Ng\303\242n", nullptr));
        groupBox->setTitle(QString());
        ID_LABEL->setText(QCoreApplication::translate("TaoThuNgan", "User ID", nullptr));
        PW_LABEL->setText(QCoreApplication::translate("TaoThuNgan", "Password", nullptr));
        ID_LINE->setText(QString());
        ID_LINE->setPlaceholderText(QCoreApplication::translate("TaoThuNgan", "User ID", nullptr));
        PW_LINE->setText(QString());
        PW_LINE->setPlaceholderText(QCoreApplication::translate("TaoThuNgan", "Password", nullptr));
        CA_BUTTON->setText(QCoreApplication::translate("TaoThuNgan", "CREATE ACCOUNT", nullptr));
        NAME_LABEL->setText(QCoreApplication::translate("TaoThuNgan", "Name", nullptr));
        NAME_LINE->setText(QString());
        NAME_LINE->setPlaceholderText(QCoreApplication::translate("TaoThuNgan", "Enter Your Name", nullptr));
        EXIT_BUTTON->setText(QCoreApplication::translate("TaoThuNgan", "GO BACK", nullptr));
        label->setText(QCoreApplication::translate("TaoThuNgan", "CREATE ACCOUNT", nullptr));
        toolButton->setText(QCoreApplication::translate("TaoThuNgan", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaoThuNgan: public Ui_TaoThuNgan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAOTHUNGAN_H
