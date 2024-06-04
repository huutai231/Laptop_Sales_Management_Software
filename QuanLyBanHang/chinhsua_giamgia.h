#ifndef CHINHSUA_GIAMGIA_H
#define CHINHSUA_GIAMGIA_H

#include <QMainWindow>

namespace Ui {
class ChinhSua_GiamGia;
}

class ChinhSua_GiamGia : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChinhSua_GiamGia(QWidget *parent = nullptr);
    ~ChinhSua_GiamGia();

private slots:
    void on_EXIT_BUTTON_clicked();

    void on_DISCOUNT_BUTTON_clicked();

private:
    Ui::ChinhSua_GiamGia *ui;
};

#endif // CHINHSUA_GIAMGIA_H
