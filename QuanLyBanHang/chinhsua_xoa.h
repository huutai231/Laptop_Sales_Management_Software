#ifndef CHINHSUA_XOA_H
#define CHINHSUA_XOA_H

#include <QMainWindow>

namespace Ui {
class ChinhSua_Xoa;
}

class ChinhSua_Xoa : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChinhSua_Xoa(QWidget *parent = nullptr);
    ~ChinhSua_Xoa();

private slots:
    void on_EXIT_BUTTON_clicked();

    void on_DELETE_BUTTON_clicked();

private:
    Ui::ChinhSua_Xoa *ui;
};

#endif // CHINHSUA_XOA_H
