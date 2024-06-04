/********************************************************************************
** Form generated from reading UI file 'chinhsuasanpham.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHINHSUASANPHAM_H
#define UI_CHINHSUASANPHAM_H

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

class Ui_ChinhSuaSanPham
{
public:
    QWidget *Form;
    QFrame *frame;
    QGroupBox *groupBox;
    QPushButton *HT_BUTTON;
    QPushButton *GG_BUTTON;
    QPushButton *T_BUTTON;
    QPushButton *X_BUTTON;
    QPushButton *EXIT_BUTTON;
    QLabel *label;
    QToolButton *toolButton;

    void setupUi(QMainWindow *ChinhSuaSanPham)
    {
        if (ChinhSuaSanPham->objectName().isEmpty())
            ChinhSuaSanPham->setObjectName("ChinhSuaSanPham");
        ChinhSuaSanPham->resize(423, 472);
        ChinhSuaSanPham->setMinimumSize(QSize(423, 472));
        ChinhSuaSanPham->setMaximumSize(QSize(423, 472));
        ChinhSuaSanPham->setStyleSheet(QString::fromUtf8("#Form\n"
"{\n"
"	background-image: url(:/background/BACKGROUND/bg1.jpg);\n"
"}"));
        Form = new QWidget(ChinhSuaSanPham);
        Form->setObjectName("Form");
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(25, 95, 371, 321));
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
        groupBox->setGeometry(QRect(10, 120, 351, 191));
        groupBox->setFlat(false);
        HT_BUTTON = new QPushButton(groupBox);
        HT_BUTTON->setObjectName("HT_BUTTON");
        HT_BUTTON->setGeometry(QRect(10, 80, 161, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        HT_BUTTON->setFont(font);
        HT_BUTTON->setFlat(false);
        GG_BUTTON = new QPushButton(groupBox);
        GG_BUTTON->setObjectName("GG_BUTTON");
        GG_BUTTON->setGeometry(QRect(180, 80, 161, 41));
        GG_BUTTON->setFont(font);
        GG_BUTTON->setFlat(false);
        T_BUTTON = new QPushButton(groupBox);
        T_BUTTON->setObjectName("T_BUTTON");
        T_BUTTON->setGeometry(QRect(10, 18, 161, 41));
        T_BUTTON->setFont(font);
        T_BUTTON->setFlat(false);
        X_BUTTON = new QPushButton(groupBox);
        X_BUTTON->setObjectName("X_BUTTON");
        X_BUTTON->setGeometry(QRect(180, 18, 161, 41));
        X_BUTTON->setFont(font);
        X_BUTTON->setFlat(false);
        EXIT_BUTTON = new QPushButton(groupBox);
        EXIT_BUTTON->setObjectName("EXIT_BUTTON");
        EXIT_BUTTON->setGeometry(QRect(10, 140, 331, 41));
        EXIT_BUTTON->setFont(font);
        EXIT_BUTTON->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);"));
        EXIT_BUTTON->setFlat(false);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(5, 65, 361, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("font: 900 20pt \"Segoe UI\";"));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        toolButton = new QToolButton(Form);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(150, 25, 121, 121));
        toolButton->setFont(font);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color: qconicalgradient(cx:0.489, cy:0.5, angle:0, stop:0.460227 rgba(246, 230, 116, 255));\n"
"	border-radius: 60px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/ICON/modify.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(128, 128));
        ChinhSuaSanPham->setCentralWidget(Form);

        retranslateUi(ChinhSuaSanPham);

        QMetaObject::connectSlotsByName(ChinhSuaSanPham);
    } // setupUi

    void retranslateUi(QMainWindow *ChinhSuaSanPham)
    {
        ChinhSuaSanPham->setWindowTitle(QCoreApplication::translate("ChinhSuaSanPham", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        HT_BUTTON->setText(QCoreApplication::translate("ChinhSuaSanPham", "DISPLAY", nullptr));
        GG_BUTTON->setText(QCoreApplication::translate("ChinhSuaSanPham", "DISCOUNT", nullptr));
        T_BUTTON->setText(QCoreApplication::translate("ChinhSuaSanPham", "ADD", nullptr));
        X_BUTTON->setText(QCoreApplication::translate("ChinhSuaSanPham", "DELETE", nullptr));
        EXIT_BUTTON->setText(QCoreApplication::translate("ChinhSuaSanPham", "GO BACK", nullptr));
        label->setText(QCoreApplication::translate("ChinhSuaSanPham", "PRODUCT MODIFY", nullptr));
        toolButton->setText(QCoreApplication::translate("ChinhSuaSanPham", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChinhSuaSanPham: public Ui_ChinhSuaSanPham {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHINHSUASANPHAM_H
