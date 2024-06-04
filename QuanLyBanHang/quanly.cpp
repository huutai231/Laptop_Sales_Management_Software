#include "quanly.h"
#include "ui_quanly.h"

#include "QuanLyBanHang.h"
extern QuanLyBanHang QLBH;

QuanLy::QuanLy(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QuanLy)
{
    ui->setupUi(this);
}

QuanLy::~QuanLy()
{
    delete ui;
}

void QuanLy::on_EXIT_BUTTON_clicked()
{
    close();
    parentWidget()->show();
}


void QuanLy::on_LSGD_BUTTON_clicked()
{
    hide();
    LSGD = new LichSuGiaoDich(this);
    LSGD->show();
}


void QuanLy::on_TTKTN_BUTTON_clicked()
{
    hide();
    TTN = new TaoThuNgan(this);
    TTN->show();
}


void QuanLy::on_DMK_BUTTON_clicked()
{
    hide();
    DMK = new DoiMatKhau(this);
    DMK->show();
}


void QuanLy::on_CSSP_BUTTON_clicked()
{
    hide();
    CSSP = new ChinhSuaSanPham(this);
    CSSP->show();
}


void QuanLy::on_XKH_BUTTON_clicked()
{
    hide();
    DSKH = new DanhSachKhachHang(this);
    DSKH->show();
}

