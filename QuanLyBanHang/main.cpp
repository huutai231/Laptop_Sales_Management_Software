#include "dangnhap.h"

#include <QApplication>

#include<QDebug>
#include "QuanLyBanHang.h"

QuanLyBanHang QLBH = QuanLyBanHang();
using namespace std;
int main(int argc, char *argv[])
{
    QLBH.xuatFileUser();
    QLBH.xuatFileGiaoDich();
    QLBH.xuatFileSanPham();

    QApplication a(argc, argv);
    DangNhap w;
    w.show();
    return a.exec();
}
