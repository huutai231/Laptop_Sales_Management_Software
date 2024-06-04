#include "thungan.h"
#include "ui_thungan.h"
#include "QuanLyBanHang.h"
#include "dangnhap.h"
#include "ui_dangnhap.h"
#include <QMessageBox>
extern QuanLyBanHang QLBH;
ThuNgan::ThuNgan(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThuNgan)
{
    ui->setupUi(this);
}

ThuNgan::~ThuNgan()
{
    delete ui;
}

void ThuNgan::on_EXIT_BUTTON_clicked()
{
    close();
    parentWidget()->show();

}

/* Add money for customer */
void ThuNgan::on_ADD_MONEY_BUTTON_clicked()
{
    string id = ui->ID_LINE->text().toStdString();;
    long long st = ui->ST_LINE->text().toLongLong();

    if (!QLBH.checkSignUp(id)) {
        QLBH.addMoney(id, st);
        QMessageBox::information(this,tr("Notice"), tr("Add money successfully"));
        ui->ID_LINE->clear();
        ui->ST_LINE->clear();
    }
    else
    {
        QMessageBox::critical(this,tr("Error"), tr("No found ID"));
    }
}

