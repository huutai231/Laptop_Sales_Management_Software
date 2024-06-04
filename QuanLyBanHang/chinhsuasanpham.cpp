#include "chinhsuasanpham.h"
#include "ui_chinhsuasanpham.h"

ChinhSuaSanPham::ChinhSuaSanPham(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChinhSuaSanPham)
{
    ui->setupUi(this);
}

ChinhSuaSanPham::~ChinhSuaSanPham()
{
    delete ui;
}

void ChinhSuaSanPham::on_EXIT_BUTTON_clicked()
{
    close();
    parentWidget()->show();
}


void ChinhSuaSanPham::on_T_BUTTON_clicked()
{
    hide();
    CST = new ChinhSua_Them(this);
    CST->show();
}


void ChinhSuaSanPham::on_X_BUTTON_clicked()
{
    hide();
    CSX = new ChinhSua_Xoa(this);
    CSX->show();
}


void ChinhSuaSanPham::on_HT_BUTTON_clicked()
{
    hide();
    HT = new KhachHang(this, "ad");
    HT->show();
}

/* Discount add */
void ChinhSuaSanPham::on_GG_BUTTON_clicked()
{
    hide();
    CSGG = new ChinhSua_GiamGia(this);
    CSGG->show();
}

