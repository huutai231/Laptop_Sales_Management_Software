#include "taothungan.h"
#include "ui_taothungan.h"
#include <QMessageBox>

#include "QuanLyBanHang.h"
extern QuanLyBanHang QLBH;

TaoThuNgan::TaoThuNgan(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TaoThuNgan)
{
    ui->setupUi(this);
}

TaoThuNgan::~TaoThuNgan()
{
    delete ui;
}

void TaoThuNgan::on_CA_BUTTON_clicked()
{
    if(ui->ID_LINE->text().toStdString() == ""
        || ui->PW_LINE->text().toStdString() == ""
        || ui->NAME_LINE->text().toStdString() == "")
    {
        QMessageBox::critical(this,tr("Signup Error"), tr("Please fill full information!"));
    }
    else
    {
        if(QLBH.checkSignUp(ui->ID_LINE->text().toStdString()) == 1) {
            QLBH.addUser(ui->ID_LINE->text().toStdString(), ui->PW_LINE->text().toStdString(), ui->NAME_LINE->text().toStdString(), 2, 0);
            QMessageBox::information(this,tr("Signup Success"), tr("New Account Has Been Add"));

            close();
            parentWidget()->show();
        }
        else
        {
            QMessageBox::critical(this,tr("Fail"), tr("This ID Has Been Add"));
        }
    }
}


void TaoThuNgan::on_EXIT_BUTTON_clicked()
{
    close();
    parentWidget()->show();
}

