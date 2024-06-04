/********************************************************************************
** Form generated from reading UI file 'chinhsua_xoa.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHINHSUA_XOA_H
#define UI_CHINHSUA_XOA_H

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

class Ui_ChinhSua_Xoa
{
public:
    QWidget *Form;
    QFrame *frame;
    QGroupBox *groupBox;
    QLabel *ID_LABEL;
    QLineEdit *PRODUCT_ID_LINE;
    QPushButton *DELETE_BUTTON;
    QPushButton *EXIT_BUTTON;
    QLabel *label;
    QToolButton *toolButton;

    void setupUi(QMainWindow *ChinhSua_Xoa)
    {
        if (ChinhSua_Xoa->objectName().isEmpty())
            ChinhSua_Xoa->setObjectName("ChinhSua_Xoa");
        ChinhSua_Xoa->resize(438, 366);
        ChinhSua_Xoa->setMinimumSize(QSize(438, 366));
        ChinhSua_Xoa->setMaximumSize(QSize(438, 366));
        ChinhSua_Xoa->setStyleSheet(QString::fromUtf8("#Form\n"
"{\n"
"	background-image: url(:/background/BACKGROUND/bg1.jpg);\n"
"}"));
        Form = new QWidget(ChinhSua_Xoa);
        Form->setObjectName("Form");
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(29, 70, 381, 271));
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
        groupBox->setGeometry(QRect(10, 80, 361, 181));
        groupBox->setFlat(false);
        ID_LABEL = new QLabel(groupBox);
        ID_LABEL->setObjectName("ID_LABEL");
        ID_LABEL->setGeometry(QRect(9, 20, 131, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        ID_LABEL->setFont(font);
        ID_LABEL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PRODUCT_ID_LINE = new QLineEdit(groupBox);
        PRODUCT_ID_LINE->setObjectName("PRODUCT_ID_LINE");
        PRODUCT_ID_LINE->setGeometry(QRect(151, 19, 201, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        PRODUCT_ID_LINE->setFont(font1);
        PRODUCT_ID_LINE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        DELETE_BUTTON = new QPushButton(groupBox);
        DELETE_BUTTON->setObjectName("DELETE_BUTTON");
        DELETE_BUTTON->setGeometry(QRect(10, 68, 341, 41));
        DELETE_BUTTON->setFont(font1);
        DELETE_BUTTON->setFlat(false);
        EXIT_BUTTON = new QPushButton(groupBox);
        EXIT_BUTTON->setObjectName("EXIT_BUTTON");
        EXIT_BUTTON->setGeometry(QRect(10, 125, 341, 41));
        EXIT_BUTTON->setFont(font1);
        EXIT_BUTTON->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);"));
        EXIT_BUTTON->setFlat(false);
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
        toolButton = new QToolButton(Form);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(29, 20, 121, 121));
        toolButton->setFont(font1);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color: qconicalgradient(cx:0.489, cy:0.5, angle:0, stop:0.460227 rgba(246, 230, 116, 255));\n"
"	border-radius: 60px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/ICON/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(128, 128));
        ChinhSua_Xoa->setCentralWidget(Form);

        retranslateUi(ChinhSua_Xoa);

        QMetaObject::connectSlotsByName(ChinhSua_Xoa);
    } // setupUi

    void retranslateUi(QMainWindow *ChinhSua_Xoa)
    {
        ChinhSua_Xoa->setWindowTitle(QCoreApplication::translate("ChinhSua_Xoa", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        ID_LABEL->setText(QCoreApplication::translate("ChinhSua_Xoa", "Product ID", nullptr));
        PRODUCT_ID_LINE->setText(QString());
        PRODUCT_ID_LINE->setPlaceholderText(QCoreApplication::translate("ChinhSua_Xoa", "Enter Product ID", nullptr));
        DELETE_BUTTON->setText(QCoreApplication::translate("ChinhSua_Xoa", "DELETE", nullptr));
        EXIT_BUTTON->setText(QCoreApplication::translate("ChinhSua_Xoa", "GO BACK", nullptr));
        label->setText(QCoreApplication::translate("ChinhSua_Xoa", "DELETE PRODUCT", nullptr));
        toolButton->setText(QCoreApplication::translate("ChinhSua_Xoa", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChinhSua_Xoa: public Ui_ChinhSua_Xoa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHINHSUA_XOA_H
