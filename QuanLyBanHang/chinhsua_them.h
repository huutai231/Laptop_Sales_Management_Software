#ifndef CHINHSUA_THEM_H
#define CHINHSUA_THEM_H

#include <QMainWindow>

namespace Ui {
class ChinhSua_Them;
}

class ChinhSua_Them : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChinhSua_Them(QWidget *parent = nullptr);
    ~ChinhSua_Them();

private slots:
    void on_EXIT_BUTTON_clicked();

    void on_ADD_PRODUCT_BUTTON_clicked();

private:
    Ui::ChinhSua_Them *ui;
};

#endif // CHINHSUA_THEM_H
