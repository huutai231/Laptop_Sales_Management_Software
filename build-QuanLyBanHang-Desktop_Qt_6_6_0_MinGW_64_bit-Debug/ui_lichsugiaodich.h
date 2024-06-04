/********************************************************************************
** Form generated from reading UI file 'lichsugiaodich.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICHSUGIAODICH_H
#define UI_LICHSUGIAODICH_H

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

class Ui_LichSuGiaoDich
{
public:
    QWidget *Form;
    QFrame *frame;
    QTableWidget *LSGD_TV;
    QPushButton *EXIT_BUTTON;
    QLabel *label;
    QToolButton *toolButton;

    void setupUi(QMainWindow *LichSuGiaoDich)
    {
        if (LichSuGiaoDich->objectName().isEmpty())
            LichSuGiaoDich->setObjectName("LichSuGiaoDich");
        LichSuGiaoDich->resize(727, 471);
        LichSuGiaoDich->setMinimumSize(QSize(727, 471));
        LichSuGiaoDich->setMaximumSize(QSize(727, 471));
        LichSuGiaoDich->setStyleSheet(QString::fromUtf8("#Form\n"
"{\n"
"	background-image: url(:/background/BACKGROUND/bg1.jpg);\n"
"}"));
        Form = new QWidget(LichSuGiaoDich);
        Form->setObjectName("Form");
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(19, 69, 691, 371));
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
        LSGD_TV = new QTableWidget(frame);
        if (LSGD_TV->columnCount() < 4)
            LSGD_TV->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        LSGD_TV->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        LSGD_TV->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        LSGD_TV->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        LSGD_TV->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        LSGD_TV->setObjectName("LSGD_TV");
        LSGD_TV->setGeometry(QRect(10, 90, 671, 271));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LSGD_TV->sizePolicy().hasHeightForWidth());
        LSGD_TV->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        LSGD_TV->setFont(font);
        LSGD_TV->setStyleSheet(QString::fromUtf8("background-color: rgb(19, 255, 188);\n"
"font: 900 italic 12pt \"Segoe UI\";"));
        LSGD_TV->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        LSGD_TV->setEditTriggers(QAbstractItemView::NoEditTriggers);
        LSGD_TV->horizontalHeader()->setMinimumSectionSize(57);
        LSGD_TV->verticalHeader()->setVisible(false);
        LSGD_TV->verticalHeader()->setDefaultSectionSize(34);
        EXIT_BUTTON = new QPushButton(frame);
        EXIT_BUTTON->setObjectName("EXIT_BUTTON");
        EXIT_BUTTON->setGeometry(QRect(430, 10, 251, 71));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        EXIT_BUTTON->setFont(font1);
        EXIT_BUTTON->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 127);"));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(159, 21, 241, 41));
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
        toolButton->setGeometry(QRect(20, 20, 121, 121));
        toolButton->setFont(font1);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color: qconicalgradient(cx:0.489, cy:0.5, angle:0, stop:0.460227 rgba(246, 230, 116, 255));\n"
"	border-radius: 60px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/ICON/writing.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(128, 128));
        LichSuGiaoDich->setCentralWidget(Form);

        retranslateUi(LichSuGiaoDich);

        QMetaObject::connectSlotsByName(LichSuGiaoDich);
    } // setupUi

    void retranslateUi(QMainWindow *LichSuGiaoDich)
    {
        LichSuGiaoDich->setWindowTitle(QCoreApplication::translate("LichSuGiaoDich", "Trade's History", nullptr));
        QTableWidgetItem *___qtablewidgetitem = LSGD_TV->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("LichSuGiaoDich", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = LSGD_TV->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("LichSuGiaoDich", "Product ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = LSGD_TV->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("LichSuGiaoDich", "Product Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = LSGD_TV->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("LichSuGiaoDich", "Price", nullptr));
        EXIT_BUTTON->setText(QCoreApplication::translate("LichSuGiaoDich", "GO BACK", nullptr));
        label->setText(QCoreApplication::translate("LichSuGiaoDich", "TRADE'S HISTORY", nullptr));
        toolButton->setText(QCoreApplication::translate("LichSuGiaoDich", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LichSuGiaoDich: public Ui_LichSuGiaoDich {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICHSUGIAODICH_H
