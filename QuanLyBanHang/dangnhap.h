#ifndef DANGNHAP_H
#define DANGNHAP_H

#include <QMainWindow>
#include "dangkykhachhang.h"
#include "quanly.h"
#include "thungan.h"
#include "khachhang.h"

QT_BEGIN_NAMESPACE
namespace Ui { class DangNhap; }
QT_END_NAMESPACE

class DangNhap : public QMainWindow
{
    Q_OBJECT

public:
    DangNhap(QWidget *parent = nullptr);
    ~DangNhap();

private slots:
    void on_DK_BUTTON_clicked();

    void on_DN_BUTTON_clicked();

    void on_TERMINATE_BUTTON_clicked();

private:
    Ui::DangNhap    *ui  ;
    DangKyKhachHang *DKKH;
    KhachHang       *KH  ;
    QuanLy          *QL  ;
    ThuNgan         *TN  ;
};
#endif // DANGNHAP_H
