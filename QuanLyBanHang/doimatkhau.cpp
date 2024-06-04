#include "doimatkhau.h"
#include "ui_doimatkhau.h"
#include <QMessageBox>

#include "QuanLyBanHang.h"
extern QuanLyBanHang QLBH;

DoiMatKhau::DoiMatKhau(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DoiMatKhau)
{
    ui->setupUi(this);
}

DoiMatKhau::~DoiMatKhau()
{
    delete ui;
}

void DoiMatKhau::on_DMK_BUTTON_clicked()
{
    if(!ui->NP_LINE->text().toStdString().empty() || !ui->ID_LINE->text().toStdString().empty() || !ui->CF_LINE->text().toStdString().empty())
    {
        if((ui->NP_LINE->text() == ui->CF_LINE->text()))
        {
            int kt = 1;
            for (int i = 0; i < QLBH.user.size(); i++) {
                if (QLBH.user[i].id == ui->ID_LINE->text().toStdString()) {
                    QLBH.changPassword(ui->ID_LINE->text().toStdString(), ui->NP_LINE->text().toStdString());
                    kt = 0;
                    break;
                }
            }
            if (kt == 0) {
                QMessageBox::information(this,tr("PASS CHANGE SUCCESS"), tr("PASS CHANGE SUCCESS"));
            }
            else {

                QMessageBox::information(this,tr("ACCOUNT IS NOT FIND"), tr("ACCOUNT IS NOT FIND"));
            }

            close();
            parentWidget()->show();
        }
        else
        {
            QMessageBox::critical(this,tr("PASS CHANGE ERROR"), tr("Incorrect Password"));
        }
    }
    else
    {
        QMessageBox::critical(this,tr("PASS CHANGE ERROR"), tr("Please fill full information!"));
    }
}


void DoiMatKhau::on_EXIT_BUTTON_clicked()
{
    close();
    parentWidget()->show();
}

