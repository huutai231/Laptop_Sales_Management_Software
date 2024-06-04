#ifndef LICHSUGIAODICH_H
#define LICHSUGIAODICH_H

#include <QMainWindow>

namespace Ui {
class LichSuGiaoDich;
}

class LichSuGiaoDich : public QMainWindow
{
    Q_OBJECT

public:
    explicit LichSuGiaoDich(QWidget *parent = nullptr);
    ~LichSuGiaoDich();

private slots:
    void on_EXIT_BUTTON_clicked();

private:
    Ui::LichSuGiaoDich *ui;
};

#endif // LICHSUGIAODICH_H
