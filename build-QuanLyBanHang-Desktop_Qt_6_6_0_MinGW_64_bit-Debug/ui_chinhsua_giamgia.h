/********************************************************************************
** Form generated from reading UI file 'chinhsua_giamgia.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHINHSUA_GIAMGIA_H
#define UI_CHINHSUA_GIAMGIA_H

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

class Ui_ChinhSua_GiamGia
{
public:
    QWidget *Form;
    QToolButton *toolButton;
    QFrame *frame;
    QGroupBox *groupBox;
    QLabel *ID_LABEL;
    QLineEdit *PRODUCT_ID_LINE;
    QPushButton *DISCOUNT_BUTTON;
    QPushButton *EXIT_BUTTON;
    QLineEdit *DISCOUNT_LINE;
    QLabel *ID_LABEL_2;
    QLabel *label;

    void setupUi(QMainWindow *ChinhSua_GiamGia)
    {
        if (ChinhSua_GiamGia->objectName().isEmpty())
            ChinhSua_GiamGia->setObjectName("ChinhSua_GiamGia");
        ChinhSua_GiamGia->resize(433, 445);
        ChinhSua_GiamGia->setMinimumSize(QSize(433, 445));
        ChinhSua_GiamGia->setMaximumSize(QSize(433, 445));
        ChinhSua_GiamGia->setStyleSheet(QString::fromUtf8("#Form\n"
"{\n"
"	background-image: url(:/background/BACKGROUND/bg1.jpg);\n"
"}"));
        Form = new QWidget(ChinhSua_GiamGia);
        Form->setObjectName("Form");
        toolButton = new QToolButton(Form);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(26, 24, 121, 121));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        toolButton->setFont(font);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color: qconicalgradient(cx:0.489, cy:0.5, angle:0, stop:0.460227 rgba(246, 230, 116, 255));\n"
"	border-radius: 60px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/ICON/shopping-online.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(128, 128));
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(26, 81, 381, 341));
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
        groupBox->setGeometry(QRect(10, 80, 361, 251));
        groupBox->setFlat(false);
        ID_LABEL = new QLabel(groupBox);
        ID_LABEL->setObjectName("ID_LABEL");
        ID_LABEL->setGeometry(QRect(9, 20, 131, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        ID_LABEL->setFont(font1);
        ID_LABEL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PRODUCT_ID_LINE = new QLineEdit(groupBox);
        PRODUCT_ID_LINE->setObjectName("PRODUCT_ID_LINE");
        PRODUCT_ID_LINE->setGeometry(QRect(151, 19, 201, 31));
        PRODUCT_ID_LINE->setFont(font);
        PRODUCT_ID_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        DISCOUNT_BUTTON = new QPushButton(groupBox);
        DISCOUNT_BUTTON->setObjectName("DISCOUNT_BUTTON");
        DISCOUNT_BUTTON->setGeometry(QRect(10, 125, 341, 41));
        DISCOUNT_BUTTON->setFont(font);
        DISCOUNT_BUTTON->setFlat(false);
        EXIT_BUTTON = new QPushButton(groupBox);
        EXIT_BUTTON->setObjectName("EXIT_BUTTON");
        EXIT_BUTTON->setGeometry(QRect(10, 190, 341, 41));
        EXIT_BUTTON->setFont(font);
        EXIT_BUTTON->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);"));
        EXIT_BUTTON->setFlat(false);
        DISCOUNT_LINE = new QLineEdit(groupBox);
        DISCOUNT_LINE->setObjectName("DISCOUNT_LINE");
        DISCOUNT_LINE->setGeometry(QRect(152, 69, 201, 31));
        DISCOUNT_LINE->setFont(font);
        DISCOUNT_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ID_LABEL_2 = new QLabel(groupBox);
        ID_LABEL_2->setObjectName("ID_LABEL_2");
        ID_LABEL_2->setGeometry(QRect(17, 70, 121, 30));
        ID_LABEL_2->setFont(font1);
        ID_LABEL_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(127, 18, 241, 41));
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
        ChinhSua_GiamGia->setCentralWidget(Form);
        frame->raise();
        toolButton->raise();

        retranslateUi(ChinhSua_GiamGia);

        QMetaObject::connectSlotsByName(ChinhSua_GiamGia);
    } // setupUi

    void retranslateUi(QMainWindow *ChinhSua_GiamGia)
    {
        ChinhSua_GiamGia->setWindowTitle(QCoreApplication::translate("ChinhSua_GiamGia", "MainWindow", nullptr));
        toolButton->setText(QCoreApplication::translate("ChinhSua_GiamGia", "...", nullptr));
        groupBox->setTitle(QString());
        ID_LABEL->setText(QCoreApplication::translate("ChinhSua_GiamGia", "Product ID", nullptr));
        PRODUCT_ID_LINE->setText(QString());
        PRODUCT_ID_LINE->setPlaceholderText(QCoreApplication::translate("ChinhSua_GiamGia", "Enter Product ID", nullptr));
        DISCOUNT_BUTTON->setText(QCoreApplication::translate("ChinhSua_GiamGia", "DISCOUNT", nullptr));
        EXIT_BUTTON->setText(QCoreApplication::translate("ChinhSua_GiamGia", "GO BACK", nullptr));
        DISCOUNT_LINE->setText(QString());
        DISCOUNT_LINE->setPlaceholderText(QCoreApplication::translate("ChinhSua_GiamGia", "Discount Percent", nullptr));
        ID_LABEL_2->setText(QCoreApplication::translate("ChinhSua_GiamGia", "Discount", nullptr));
        label->setText(QCoreApplication::translate("ChinhSua_GiamGia", "DISCOUNT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChinhSua_GiamGia: public Ui_ChinhSua_GiamGia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHINHSUA_GIAMGIA_H
