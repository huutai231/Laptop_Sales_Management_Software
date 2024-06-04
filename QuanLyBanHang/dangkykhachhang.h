#ifndef DANGKYKHACHHANG_H
#define DANGKYKHACHHANG_H

#include <QMainWindow>

namespace Ui {
class DangKyKhachHang;
}

class DangKyKhachHang : public QMainWindow
{
    Q_OBJECT

public:
    explicit DangKyKhachHang(QWidget *parent = nullptr);
    int getType();
    ~DangKyKhachHang();

private slots:
    void on_DK_BUTTON_clicked();

    void on_EXIT_BUTTON_clicked();

private:
    Ui::DangKyKhachHang *ui;
    const int Type = 0;
};

#endif // DANGKYKHACHHANG_H
