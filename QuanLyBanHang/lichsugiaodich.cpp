#include "lichsugiaodich.h"
#include "ui_lichsugiaodich.h"

#include "QuanLyBanHang.h"
extern QuanLyBanHang QLBH;

LichSuGiaoDich::LichSuGiaoDich(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LichSuGiaoDich)
{
    ui->setupUi(this);
    ui->LSGD_TV->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);

    int numLS = QLBH.lichSuGiaoDich.size();

    if(numLS > 0) {
        ui->LSGD_TV->setRowCount(numLS);
        for(int i = 0; i < numLS; i++)
        {
            QTableWidgetItem* item = new QTableWidgetItem();
            string d = to_string(QLBH.lichSuGiaoDich[i].thoiGian.day) + "/";
            string mth = to_string(QLBH.lichSuGiaoDich[i].thoiGian.month) + "/";
            string y = to_string(QLBH.lichSuGiaoDich[i].thoiGian.year) + " ";
            string h = to_string(QLBH.lichSuGiaoDich[i].thoiGian.hour) + ":";
            string m = to_string(QLBH.lichSuGiaoDich[i].thoiGian.minute) + ":";
            string s = to_string(QLBH.lichSuGiaoDich[i].thoiGian.second);
            item->setText(QString((d+mth+y+h+m+s).c_str()));
            ui->LSGD_TV->setItem(i, 0, item);

            item = new QTableWidgetItem();
            item->setText(QString(QLBH.lichSuGiaoDich[i].maSanPham.c_str()));
            ui->LSGD_TV->setItem(i, 1, item);

            item = new QTableWidgetItem();
            item->setText(QString(QLBH.product[QLBH.findIndexProduct(QLBH.lichSuGiaoDich[i].maSanPham)].tenSanPham.c_str()));
            ui->LSGD_TV->setItem(i, 2, item);

            item = new QTableWidgetItem();
            item->setText(QString(QLBH.showMoney(QLBH.product[QLBH.findIndexProduct(QLBH.lichSuGiaoDich[i].maSanPham)].giaTien).c_str()));
            ui->LSGD_TV->setItem(i, 3, item);
        }
    }
    else
    {
        ui->LSGD_TV->clear();
    }
}

LichSuGiaoDich::~LichSuGiaoDich()
{
    delete ui;
}

void LichSuGiaoDich::on_EXIT_BUTTON_clicked()
{
    close();
    parentWidget()->show();
}

