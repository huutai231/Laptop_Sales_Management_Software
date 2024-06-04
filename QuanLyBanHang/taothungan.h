#ifndef TAOTHUNGAN_H
#define TAOTHUNGAN_H

#include <QMainWindow>

namespace Ui {
class TaoThuNgan;
}

class TaoThuNgan : public QMainWindow
{
    Q_OBJECT

public:
    explicit TaoThuNgan(QWidget *parent = nullptr);
    ~TaoThuNgan();

private slots:
    void on_CA_BUTTON_clicked();


    void on_EXIT_BUTTON_clicked();

private:
    Ui::TaoThuNgan *ui;
};

#endif // TAOTHUNGAN_H
