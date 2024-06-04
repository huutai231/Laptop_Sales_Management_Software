#ifndef DANHSACHKHACHHANG_H
#define DANHSACHKHACHHANG_H

#include <QMainWindow>

namespace Ui {
class DanhSachKhachHang;
}

class DanhSachKhachHang : public QMainWindow
{
    Q_OBJECT

public:
    explicit DanhSachKhachHang(QWidget *parent = nullptr);
    ~DanhSachKhachHang();

private slots:
    void on_EXIT_BUTTON_clicked();

private:
    Ui::DanhSachKhachHang *ui;
};

#endif // DANHSACHKHACHHANG_H
