#include "danhsachkhachhang.h"
#include "ui_danhsachkhachhang.h"

#include "QuanLyBanHang.h"
extern QuanLyBanHang QLBH;

DanhSachKhachHang::DanhSachKhachHang(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DanhSachKhachHang)
{
    ui->setupUi(this);
    ui->DSKH_TV->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);

    int numUser = QLBH.user.size();
    int dem = 0;
    for (int i = 0; i < QLBH.user.size(); i++) {
        if (QLBH.user[i].type == 1) {
            dem++;
        }
    }
    int k = 0;
    ui->DSKH_TV->setRowCount(dem);
    for(int i = 0; i < numUser; i++) {
        if (QLBH.user[i].type != 0 && QLBH.user[i].type !=2) {
            QTableWidgetItem* item = new QTableWidgetItem();
            item->setText(QString(QLBH.user[i].id.c_str()));
            ui->DSKH_TV->setItem(k, 0, item);
            item = new QTableWidgetItem();
            item->setText(QString(QLBH.user[i].name.c_str()));
            ui->DSKH_TV->setItem(k, 1, item);
            item = new QTableWidgetItem();
            item->setText(QString(QLBH.showMoney(QLBH.user[i].money).c_str()));
            ui->DSKH_TV->setItem(k, 2, item);
            //        item->setText(QString(QLBH.user[i].id.c_str()));
            //        ui->DSKH_TV->setItem(i, 3, item);
            k++;
        }

    }
}

DanhSachKhachHang::~DanhSachKhachHang()
{
    delete ui;
}

void DanhSachKhachHang::on_EXIT_BUTTON_clicked()
{
    close();
    parentWidget()->show();
}

