#include "dangnhap.h"
#include "ui_dangnhap.h"
#include <string>
#include <iostream>
#include <QMessageBox>
#include <QuanLyBanHang.h>
#include <fstream>
using namespace std;

extern QuanLyBanHang QLBH;

DangNhap::DangNhap(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DangNhap)
{
    ui->setupUi(this);
}

DangNhap::~DangNhap()
{
    delete ui;
}



void DangNhap::on_DK_BUTTON_clicked()
{
    hide();
    DKKH = new DangKyKhachHang(this);
    DKKH->show();
}


void DangNhap::on_DN_BUTTON_clicked()
{
    string inputID = ui->ID_LINE->text().toStdString();
    string inputPW = ui->PW_LINE->text().toStdString();

    //    int userIndex = -1; // Sử dụng một biến để lưu chỉ số người dùng
    //    for (int i = 0; i < QLBH.user.size(); i++) {
    //        if (inputID == QLBH.user[i].id && inputPW == QLBH.user[i].password && typeUser == QLBH.user[i].type) {
    //            userIndex = i; // Lưu chỉ số người dùng nếu tìm thấy
    //            break; // Thoát khỏi vòng lặp nếu tìm thấy người dùng
    //        }
    //    }

    //    if (userIndex >= 0) {
    //        hide();
    //        KH = new KhachHang(this, 0);
    //        ui->ID_LINE->clear();
    //        ui->PW_LINE->clear();
    //        KH->show();
    //        QLBH.user.erase(QLBH.user.begin() + userIndex);
    //    }
    //    else
    //    {
    //        QLBH.xuatFileUser();
    //        int cashierIndex = -1; // Sử dụng một biến để lưu chỉ số người dùng
    //        int typeCashier = 2;

    //        for (int i = 0; i < QLBH.user.size(); i++) {
    //            if (inputID == QLBH.user[i].id && inputPW == QLBH.user[i].password && typeCashier == QLBH.user[i].type) {
    //                cashierIndex = i; // Lưu chỉ số người dùng nếu tìm thấy
    //                break; // Thoát khỏi vòng lặp nếu tìm thấy người dùng
    //            }
    //        }

    //        if (cashierIndex >= 0) {
    //            hide();
    //            TN = new ThuNgan(this);
    //            ui->ID_LINE->clear();
    //            ui->PW_LINE->clear();
    //            TN->show();
    //            QLBH.user.erase(QLBH.user.begin() + cashierIndex);
    //        }
    //        else
    //        {
    //            QLBH.xuatFileUser();
    //            int managerIndex = -1; // Sử dụng một biến để lưu chỉ số người dùng
    //            int typeManager = 0;

    //            for (int i = 0; i < QLBH.user.size(); i++) {
    //                if (inputID == QLBH.user[i].id && inputPW == QLBH.user[i].password && typeManager == QLBH.user[i].type) {
    //                    managerIndex = i; // Lưu chỉ số người dùng nếu tìm thấy
    //                    break; // Thoát khỏi vòng lặp nếu tìm thấy người dùng
    //                }
    //            }

    //            if (managerIndex >= 0) {
    //                hide();
    //                QL = new QuanLy(this);
    //                ui->ID_LINE->clear();
    //                ui->PW_LINE->clear();
    //                QL->show();
    //                QLBH.user.erase(QLBH.user.begin() + managerIndex);
    //            }
    //            else
    //            {
    //                QMessageBox::critical(this,tr("LOGIN ERROR"), tr("Incorrect ID or Password"));
    //            }
    //        }
    //    }
    if(QLBH.checkLogIn(inputID, inputPW) == 0)
    {
        ui->ID_LINE->clear();
        ui->PW_LINE->clear();
        hide();
        QL = new QuanLy(this);
        QL->show();
    }
    else if(QLBH.checkLogIn(inputID, inputPW) == 1) {
        ui->ID_LINE->clear();
        ui->PW_LINE->clear();
        hide();
        KH = new KhachHang(this, inputID);
        KH->show();
    }
    else if(QLBH.checkLogIn(inputID, inputPW) == 2) {
        ui->ID_LINE->clear();
        ui->PW_LINE->clear();
        hide();
        TN = new ThuNgan(this);
        TN->show();
    }
    else
    {
        QMessageBox::critical(this,tr("LOGIN ERROR"), tr("Incorrect ID or Password"));
    }

}
void DangNhap::on_TERMINATE_BUTTON_clicked()
{
    /* Do some thing before exit */
    QLBH.ghiFileGiaoDich();
    QLBH.ghiFileSanPham();
    QLBH.ghiFileUser();

    /* Exit Application */
    QApplication::exit();
}

