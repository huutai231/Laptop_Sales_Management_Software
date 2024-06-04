/********************************************************************************
** Form generated from reading UI file 'chinhsua_them.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHINHSUA_THEM_H
#define UI_CHINHSUA_THEM_H

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

class Ui_ChinhSua_Them
{
public:
    QWidget *Form;
    QFrame *frame;
    QGroupBox *groupBox;
    QLabel *PRODUCT_ID_LABEL;
    QLineEdit *PRODUCT_ID_LINE;
    QPushButton *ADD_PRODUCT_BUTTON;
    QPushButton *EXIT_BUTTON;
    QLabel *PRODUCT_NAME_LABEL;
    QLineEdit *PRODUCT_NAME_LINE;
    QLineEdit *PRODUCT_QUANTITY_LINE;
    QLabel *PRODUCT_QUANTITY_LABEL;
    QLabel *PRODUCT_PRICE_LABEL;
    QLineEdit *PRODUCT_PRICE_LINE;
    QLabel *label;
    QToolButton *toolButton;

    void setupUi(QMainWindow *ChinhSua_Them)
    {
        if (ChinhSua_Them->objectName().isEmpty())
            ChinhSua_Them->setObjectName("ChinhSua_Them");
        ChinhSua_Them->resize(447, 522);
        ChinhSua_Them->setMinimumSize(QSize(447, 499));
        ChinhSua_Them->setMaximumSize(QSize(447, 522));
        ChinhSua_Them->setStyleSheet(QString::fromUtf8("#Form\n"
"{\n"
"	background-image: url(:/background/BACKGROUND/bg1.jpg);\n"
"}"));
        Form = new QWidget(ChinhSua_Them);
        Form->setObjectName("Form");
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(27, 77, 391, 421));
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
        groupBox->setGeometry(QRect(10, 80, 371, 331));
        groupBox->setFlat(false);
        PRODUCT_ID_LABEL = new QLabel(groupBox);
        PRODUCT_ID_LABEL->setObjectName("PRODUCT_ID_LABEL");
        PRODUCT_ID_LABEL->setGeometry(QRect(10, 23, 131, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        PRODUCT_ID_LABEL->setFont(font);
        PRODUCT_ID_LABEL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PRODUCT_ID_LINE = new QLineEdit(groupBox);
        PRODUCT_ID_LINE->setObjectName("PRODUCT_ID_LINE");
        PRODUCT_ID_LINE->setGeometry(QRect(152, 19, 211, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        PRODUCT_ID_LINE->setFont(font1);
        PRODUCT_ID_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ADD_PRODUCT_BUTTON = new QPushButton(groupBox);
        ADD_PRODUCT_BUTTON->setObjectName("ADD_PRODUCT_BUTTON");
        ADD_PRODUCT_BUTTON->setGeometry(QRect(10, 221, 351, 41));
        ADD_PRODUCT_BUTTON->setFont(font1);
        ADD_PRODUCT_BUTTON->setFlat(false);
        EXIT_BUTTON = new QPushButton(groupBox);
        EXIT_BUTTON->setObjectName("EXIT_BUTTON");
        EXIT_BUTTON->setGeometry(QRect(10, 281, 351, 41));
        EXIT_BUTTON->setFont(font1);
        EXIT_BUTTON->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);"));
        EXIT_BUTTON->setFlat(false);
        PRODUCT_NAME_LABEL = new QLabel(groupBox);
        PRODUCT_NAME_LABEL->setObjectName("PRODUCT_NAME_LABEL");
        PRODUCT_NAME_LABEL->setGeometry(QRect(9, 124, 131, 30));
        PRODUCT_NAME_LABEL->setFont(font);
        PRODUCT_NAME_LABEL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PRODUCT_NAME_LINE = new QLineEdit(groupBox);
        PRODUCT_NAME_LINE->setObjectName("PRODUCT_NAME_LINE");
        PRODUCT_NAME_LINE->setGeometry(QRect(151, 120, 211, 31));
        PRODUCT_NAME_LINE->setFont(font1);
        PRODUCT_NAME_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        PRODUCT_QUANTITY_LINE = new QLineEdit(groupBox);
        PRODUCT_QUANTITY_LINE->setObjectName("PRODUCT_QUANTITY_LINE");
        PRODUCT_QUANTITY_LINE->setGeometry(QRect(150, 70, 211, 31));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        PRODUCT_QUANTITY_LINE->setFont(font2);
        PRODUCT_QUANTITY_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        PRODUCT_QUANTITY_LABEL = new QLabel(groupBox);
        PRODUCT_QUANTITY_LABEL->setObjectName("PRODUCT_QUANTITY_LABEL");
        PRODUCT_QUANTITY_LABEL->setGeometry(QRect(9, 73, 131, 31));
        PRODUCT_QUANTITY_LABEL->setFont(font);
        PRODUCT_QUANTITY_LABEL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PRODUCT_PRICE_LABEL = new QLabel(groupBox);
        PRODUCT_PRICE_LABEL->setObjectName("PRODUCT_PRICE_LABEL");
        PRODUCT_PRICE_LABEL->setGeometry(QRect(8, 179, 131, 20));
        PRODUCT_PRICE_LABEL->setFont(font);
        PRODUCT_PRICE_LABEL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PRODUCT_PRICE_LINE = new QLineEdit(groupBox);
        PRODUCT_PRICE_LINE->setObjectName("PRODUCT_PRICE_LINE");
        PRODUCT_PRICE_LINE->setGeometry(QRect(150, 170, 211, 31));
        PRODUCT_PRICE_LINE->setFont(font1);
        PRODUCT_PRICE_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(127, 18, 241, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setItalic(false);
        label->setFont(font3);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("font: 900 20pt \"Segoe UI\";"));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        label->setIndent(-1);
        toolButton = new QToolButton(Form);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(27, 20, 121, 121));
        toolButton->setFont(font1);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color: qconicalgradient(cx:0.489, cy:0.5, angle:0, stop:0.460227 rgba(246, 230, 116, 255));\n"
"	border-radius: 60px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/ICON/add-to-basket.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(128, 128));
        ChinhSua_Them->setCentralWidget(Form);

        retranslateUi(ChinhSua_Them);

        QMetaObject::connectSlotsByName(ChinhSua_Them);
    } // setupUi

    void retranslateUi(QMainWindow *ChinhSua_Them)
    {
        ChinhSua_Them->setWindowTitle(QCoreApplication::translate("ChinhSua_Them", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        PRODUCT_ID_LABEL->setText(QCoreApplication::translate("ChinhSua_Them", "Product ID", nullptr));
        PRODUCT_ID_LINE->setText(QString());
        PRODUCT_ID_LINE->setPlaceholderText(QCoreApplication::translate("ChinhSua_Them", "Enter Product ID", nullptr));
        ADD_PRODUCT_BUTTON->setText(QCoreApplication::translate("ChinhSua_Them", "ADD PRODUCT", nullptr));
        EXIT_BUTTON->setText(QCoreApplication::translate("ChinhSua_Them", "GO BACK", nullptr));
        PRODUCT_NAME_LABEL->setText(QCoreApplication::translate("ChinhSua_Them", "Name", nullptr));
        PRODUCT_NAME_LINE->setText(QString());
        PRODUCT_NAME_LINE->setPlaceholderText(QCoreApplication::translate("ChinhSua_Them", "Enter Product Name", nullptr));
        PRODUCT_QUANTITY_LINE->setText(QString());
        PRODUCT_QUANTITY_LINE->setPlaceholderText(QCoreApplication::translate("ChinhSua_Them", "Enter Product Number", nullptr));
        PRODUCT_QUANTITY_LABEL->setText(QCoreApplication::translate("ChinhSua_Them", "Quantity", nullptr));
        PRODUCT_PRICE_LABEL->setText(QCoreApplication::translate("ChinhSua_Them", "Price", nullptr));
        PRODUCT_PRICE_LINE->setText(QString());
        PRODUCT_PRICE_LINE->setPlaceholderText(QCoreApplication::translate("ChinhSua_Them", "Enter Product Price", nullptr));
        label->setText(QCoreApplication::translate("ChinhSua_Them", "ADD PRODUCT", nullptr));
        toolButton->setText(QCoreApplication::translate("ChinhSua_Them", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChinhSua_Them: public Ui_ChinhSua_Them {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHINHSUA_THEM_H
