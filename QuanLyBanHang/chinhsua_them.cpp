#include "chinhsua_them.h"
#include "ui_chinhsua_them.h"

#include <QMessageBox>
#include "QuanLyBanHang.h"
extern QuanLyBanHang QLBH;

ChinhSua_Them::ChinhSua_Them(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChinhSua_Them)
{
    ui->setupUi(this);
}

ChinhSua_Them::~ChinhSua_Them()
{
    delete ui;
}

/* Go back */
void ChinhSua_Them::on_EXIT_BUTTON_clicked()
{
    close();
    parentWidget()->show();
}

/* Add more product */
void ChinhSua_Them::on_ADD_PRODUCT_BUTTON_clicked()
{
    if(ui->PRODUCT_ID_LINE->text() == ""
        || ui->PRODUCT_NAME_LINE->text() == ""
        || ui->PRODUCT_QUANTITY_LINE->text() == ""
        || ui->PRODUCT_PRICE_LINE->text() == "")
    {
        QMessageBox::information(this,tr("Error"), tr("Please fill full information!"));
    }
    else
    {
        string id = ui->PRODUCT_ID_LINE->text().toStdString();
        string name = ui->PRODUCT_NAME_LINE->text().toStdString();
        int num = ui->PRODUCT_QUANTITY_LINE->text().toInt();
        long long price = ui->PRODUCT_PRICE_LINE->text().toLongLong();

        if (QLBH.checkAddProduct(id)) {
            QLBH.addProduct(id, num, name, price);
            QMessageBox::information(this,tr("Add Product Success"), tr("New Product Has Been Add"));

            ui->PRODUCT_ID_LINE->clear();
            ui->PRODUCT_NAME_LINE->clear();
            ui->PRODUCT_QUANTITY_LINE->clear();
            ui->PRODUCT_PRICE_LINE->clear();
        }
        else {
            QLBH.product[QLBH.findIndexProduct(id)].soLuong += num;
            QMessageBox::information(this,tr("Add Number Product Success"), tr("Number Product Has Been Add"));
            ui->PRODUCT_ID_LINE->clear();
            ui->PRODUCT_NAME_LINE->clear();
            ui->PRODUCT_QUANTITY_LINE->clear();
            ui->PRODUCT_PRICE_LINE->clear();

        }
    }

}

