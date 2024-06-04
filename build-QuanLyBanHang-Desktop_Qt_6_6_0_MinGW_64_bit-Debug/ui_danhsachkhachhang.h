/********************************************************************************
** Form generated from reading UI file 'danhsachkhachhang.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANHSACHKHACHHANG_H
#define UI_DANHSACHKHACHHANG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DanhSachKhachHang
{
public:
    QWidget *Form;
    QFrame *frame;
    QTableWidget *DSKH_TV;
    QLabel *label;
    QPushButton *EXIT_BUTTON;
    QToolButton *toolButton;

    void setupUi(QMainWindow *DanhSachKhachHang)
    {
        if (DanhSachKhachHang->objectName().isEmpty())
            DanhSachKhachHang->setObjectName("DanhSachKhachHang");
        DanhSachKhachHang->resize(692, 453);
        DanhSachKhachHang->setMinimumSize(QSize(692, 453));
        DanhSachKhachHang->setMaximumSize(QSize(692, 453));
        DanhSachKhachHang->setStyleSheet(QString::fromUtf8("#Form\n"
"{\n"
"	background-image: url(:/background/BACKGROUND/bg1.jpg);\n"
"}"));
        Form = new QWidget(DanhSachKhachHang);
        Form->setObjectName("Form");
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 60, 651, 371));
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
        DSKH_TV = new QTableWidget(frame);
        if (DSKH_TV->columnCount() < 3)
            DSKH_TV->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        DSKH_TV->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        DSKH_TV->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        DSKH_TV->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        DSKH_TV->setObjectName("DSKH_TV");
        DSKH_TV->setGeometry(QRect(10, 90, 631, 271));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DSKH_TV->sizePolicy().hasHeightForWidth());
        DSKH_TV->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        DSKH_TV->setFont(font);
        DSKH_TV->setStyleSheet(QString::fromUtf8("background-color: rgb(19, 255, 188);"));
        DSKH_TV->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        DSKH_TV->setEditTriggers(QAbstractItemView::NoEditTriggers);
        DSKH_TV->horizontalHeader()->setMinimumSectionSize(57);
        DSKH_TV->verticalHeader()->setVisible(false);
        DSKH_TV->verticalHeader()->setDefaultSectionSize(34);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 20, 361, 41));
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
        EXIT_BUTTON = new QPushButton(frame);
        EXIT_BUTTON->setObjectName("EXIT_BUTTON");
        EXIT_BUTTON->setGeometry(QRect(480, 10, 161, 71));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        EXIT_BUTTON->setFont(font2);
        EXIT_BUTTON->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);"));
        toolButton = new QToolButton(Form);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(20, 20, 121, 121));
        toolButton->setFont(font2);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color: qconicalgradient(cx:0.489, cy:0.5, angle:0, stop:0.460227 rgba(246, 230, 116, 255));\n"
"	border-radius: 60px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/ICON/contact-list.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(128, 128));
        DanhSachKhachHang->setCentralWidget(Form);

        retranslateUi(DanhSachKhachHang);

        QMetaObject::connectSlotsByName(DanhSachKhachHang);
    } // setupUi

    void retranslateUi(QMainWindow *DanhSachKhachHang)
    {
        DanhSachKhachHang->setWindowTitle(QCoreApplication::translate("DanhSachKhachHang", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = DSKH_TV->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DanhSachKhachHang", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = DSKH_TV->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DanhSachKhachHang", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = DSKH_TV->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DanhSachKhachHang", "Current Cash", nullptr));
        label->setText(QCoreApplication::translate("DanhSachKhachHang", "LIST OF CUSTOMER", nullptr));
        EXIT_BUTTON->setText(QCoreApplication::translate("DanhSachKhachHang", "GO BACK", nullptr));
        toolButton->setText(QCoreApplication::translate("DanhSachKhachHang", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DanhSachKhachHang: public Ui_DanhSachKhachHang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANHSACHKHACHHANG_H
