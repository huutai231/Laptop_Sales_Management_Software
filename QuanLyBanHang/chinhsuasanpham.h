#ifndef CHINHSUASANPHAM_H
#define CHINHSUASANPHAM_H

#include <QMainWindow>
#include "chinhsua_giamgia.h"
#include "chinhsua_them.h"
#include "chinhsua_xoa.h"
#include "khachhang.h"

namespace Ui {
class ChinhSuaSanPham;
}

class ChinhSuaSanPham : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChinhSuaSanPham(QWidget *parent = nullptr);
    ~ChinhSuaSanPham();

private slots:
    void on_EXIT_BUTTON_clicked();

    void on_T_BUTTON_clicked();

    void on_X_BUTTON_clicked();

    void on_HT_BUTTON_clicked();

    void on_GG_BUTTON_clicked();

private:
    Ui::ChinhSuaSanPham *ui;
    ChinhSua_GiamGia   *CSGG;
    ChinhSua_Them      *CST ;
    ChinhSua_Xoa       *CSX ;
    KhachHang          *HT  ;
};

#endif // CHINHSUASANPHAM_H
