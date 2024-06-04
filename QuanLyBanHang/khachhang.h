#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <QMainWindow>
#include "QPlainTextEdit"
using namespace std;

namespace Ui {
class KhachHang;
}

class KhachHang : public QMainWindow
{
    Q_OBJECT

public:
    explicit KhachHang(QWidget *parent = nullptr, string id = "");
    ~KhachHang();

private slots:
    void on_EXIT_BUTTON_clicked();

    void on_LEFT_BUTTON_clicked();

    void on_RIGHT_BUTTON_clicked();

    void on_BUY_BUTTON_clicked();

    void on_BUY_BUTTON_2_clicked();

    void on_BUY_BUTTON_3_clicked();

    void updateProductDisplay(int step);
    void muaSanPham(QPlainTextEdit *textEdit);
    bool coTheMuaHang(const string& userId, long long giaTienSanPham);

private:
    Ui::KhachHang *ui;
    int indexUser;
    QString text;
    bool displayFirstProduct = true;
    int currentProductIndex = 0;
    string displayedProductID;

};

#endif // KHACHHANG_H
