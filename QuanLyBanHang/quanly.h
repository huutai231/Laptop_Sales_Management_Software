#ifndef QUANLY_H
#define QUANLY_H

#include <QMainWindow>
#include "lichsugiaodich.h"
#include "danhsachkhachhang.h"
#include "doimatkhau.h"
#include "chinhsuasanpham.h"
#include "taothungan.h"

namespace Ui {
class QuanLy;
}

class QuanLy : public QMainWindow
{
    Q_OBJECT

public:
    explicit QuanLy(QWidget *parent = nullptr);
    ~QuanLy();

private slots:


    void on_EXIT_BUTTON_clicked();

    void on_LSGD_BUTTON_clicked();

    void on_TTKTN_BUTTON_clicked();

    void on_DMK_BUTTON_clicked();

    void on_CSSP_BUTTON_clicked();

    void on_XKH_BUTTON_clicked();

private:
    Ui::QuanLy *ui;
    LichSuGiaoDich      *LSGD;
    DoiMatKhau          *DMK ;
    ChinhSuaSanPham     *CSSP;
    TaoThuNgan          *TTN;
    DanhSachKhachHang   *DSKH;
};

#endif // QUANLY_H
