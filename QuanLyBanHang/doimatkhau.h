#ifndef DOIMATKHAU_H
#define DOIMATKHAU_H

#include <QMainWindow>

namespace Ui {
class DoiMatKhau;
}

class DoiMatKhau : public QMainWindow
{
    Q_OBJECT

public:
    explicit DoiMatKhau(QWidget *parent = nullptr);
    ~DoiMatKhau();

private slots:
    void on_DMK_BUTTON_clicked();

    void on_EXIT_BUTTON_clicked();

private:
    Ui::DoiMatKhau *ui;
};

#endif // DOIMATKHAU_H
