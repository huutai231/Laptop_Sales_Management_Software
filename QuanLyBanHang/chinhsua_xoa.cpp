#include "chinhsua_xoa.h"
#include "ui_chinhsua_xoa.h"

#include <QMessageBox>
#include "QuanLyBanHang.h"
extern QuanLyBanHang QLBH;

ChinhSua_Xoa::ChinhSua_Xoa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChinhSua_Xoa)
{
    ui->setupUi(this);
}

ChinhSua_Xoa::~ChinhSua_Xoa()
{
    delete ui;
}

/* Go back */
void ChinhSua_Xoa::on_EXIT_BUTTON_clicked()
{
    close();
    parentWidget()->show();
}

/* Delete product */
void ChinhSua_Xoa::on_DELETE_BUTTON_clicked()
{
    if (ui->PRODUCT_ID_LINE->text().toStdString() == "") {
        QMessageBox::information(this,tr("Error"), tr("Please fill full information!"));
    }
    else
    {
        if (QLBH.checkAddProduct(ui->PRODUCT_ID_LINE->text().toStdString())) {
            QMessageBox::critical(this,tr("Error"), tr("No found ID!"));
        }
        else
        {
            QLBH.xoaProduct(ui->PRODUCT_ID_LINE->text().toStdString());
            QMessageBox::information(this,tr("Delete Product Success"), tr("Product Has Been Delete"));

            ui->PRODUCT_ID_LINE->clear();
        }
    }

}

