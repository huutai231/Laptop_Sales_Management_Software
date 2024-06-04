#include "chinhsua_giamgia.h"
#include "ui_chinhsua_giamgia.h"

#include <QMessageBox>
#include "QuanLyBanHang.h"
extern QuanLyBanHang QLBH;

ChinhSua_GiamGia::ChinhSua_GiamGia(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChinhSua_GiamGia)
{
    ui->setupUi(this);
}

ChinhSua_GiamGia::~ChinhSua_GiamGia()
{
    delete ui;
}

/* Go back */
void ChinhSua_GiamGia::on_EXIT_BUTTON_clicked()
{
    close();
    parentWidget()->show();
}

/* Discount for product */
void ChinhSua_GiamGia::on_DISCOUNT_BUTTON_clicked()
{
    if (ui->PRODUCT_ID_LINE->text().toStdString() == ""
        || ui->DISCOUNT_LINE->text().toStdString() == "")
    {
        QMessageBox::critical(this,tr("Error"), tr("Please fill full information"));
    }
    else
    {
        if(QLBH.checkAddProduct(ui->PRODUCT_ID_LINE->text().toStdString())) {
            QMessageBox::critical(this,tr("Error"), tr("No found ID!"));
        }
        else {
            QLBH.giamGia(ui->PRODUCT_ID_LINE->text().toStdString(), ui->DISCOUNT_LINE->text().toInt());
            string a = "Discount price: " + std::to_string(QLBH.product[QLBH.findIndexProduct(ui->PRODUCT_ID_LINE->text().toStdString())].giaTien);
            QMessageBox::information(this,tr("Discount success"), QString(a.c_str()));
        }
    }
}

