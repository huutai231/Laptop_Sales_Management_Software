#include "dangkykhachhang.h"
#include "ui_dangkykhachhang.h"
#include "iostream"
#include "QuanLyBanHang.h"
#include <QMessageBox>
extern QuanLyBanHang QLBH;
using namespace std;

DangKyKhachHang::DangKyKhachHang(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DangKyKhachHang)
{
    ui->setupUi(this);
}

DangKyKhachHang::~DangKyKhachHang()
{
    delete ui;
}

DangKyKhachHang::getType()
{
    return Type;
}

/* Create customer account */
void DangKyKhachHang::on_DK_BUTTON_clicked()
{
    string inputID = ui->ID_LINE->text().toStdString();
    string inputPW = ui->PASSWORD_LINE->text().toStdString();
    string inputNAME = ui->NAME_LINE->text().toStdString();

    if (QLBH.checkSignUp(inputID) == 1) {
        QMessageBox::information(this,tr("Signup Success"), tr("New Account Has Been Add"));

        hide();
        // CHECK AND ADD USER IF VALID
        parentWidget()->show();
        QLBH.addUser(inputID,inputPW,inputNAME,1,0);
    }
    else {
        QMessageBox::critical(this,tr("Fail"), tr("Your ID Has Been Used"));
    }

}


void DangKyKhachHang::on_EXIT_BUTTON_clicked()
{
    close();
    parentWidget()->show();
}

