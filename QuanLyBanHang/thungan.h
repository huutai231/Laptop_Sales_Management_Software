#ifndef THUNGAN_H
#define THUNGAN_H

#include <QMainWindow>

namespace Ui {
class ThuNgan;
}

class ThuNgan : public QMainWindow
{
    Q_OBJECT

public:
    explicit ThuNgan(QWidget *parent = nullptr);
    ~ThuNgan();

private slots:
    void on_EXIT_BUTTON_clicked();

    void on_ADD_MONEY_BUTTON_clicked();

private:
    Ui::ThuNgan *ui;
};

#endif // THUNGAN_H
