#include "khachhang.h"
#include "ui_khachhang.h"
#include "QuanLyBanHang.h"
#include <QMessageBox>

extern QuanLyBanHang QLBH;

KhachHang::KhachHang(QWidget *parent, string id) :
    QMainWindow(parent),
    ui(new Ui::KhachHang)
{
    ui->setupUi(this);
    indexUser = QLBH.findIndexUser(id);

    if(QLBH.user[indexUser].type == 0)
    {
        ui->BUY_BUTTON->hide();
        ui->BUY_BUTTON_2->hide();
        ui->BUY_BUTTON_3->hide();
    }


    if (!QLBH.product.empty()) {
        const SanPham& firstProduct = QLBH.product[0];
        QString productInfo = "Mã Sản Phẩm: " + QString::fromStdString(firstProduct.maSanPham) + "\n" +
                              "Số Lượng: " + QString::number(firstProduct.soLuong) + "\n" +
                              "Tên Sản Phẩm: " + QString::fromStdString(firstProduct.tenSanPham) + "\n" +
                              "Giá Tiền: " + QString::fromStdString(QLBH.showMoney(firstProduct.giaTien)) + "\n\n";

        ui->INFO_EDIT->setPlainText(productInfo);
    } else {
        ui->INFO_EDIT->setPlainText("Không có sản phẩm.");
    }

    if (!QLBH.product.empty()) {
        const SanPham& firstProduct = QLBH.product[1];
        QString productInfo = "Mã Sản Phẩm: " + QString::fromStdString(firstProduct.maSanPham) + "\n" +
                              "Số Lượng: " + QString::number(firstProduct.soLuong) + "\n" +
                              "Tên Sản Phẩm: " + QString::fromStdString(firstProduct.tenSanPham) + "\n" +
                              "Giá Tiền: " + QString::fromStdString(QLBH.showMoney(firstProduct.giaTien)) + "\n\n";

        ui->INFO_EDIT_2->setPlainText(productInfo);
    } else {
        ui->INFO_EDIT_2->setPlainText("Không có sản phẩm.");
    }

    if (!QLBH.product.empty()) {
        const SanPham& firstProduct = QLBH.product[2];
        QString productInfo = "Mã Sản Phẩm: " + QString::fromStdString(firstProduct.maSanPham) + "\n" +
                              "Số Lượng: " + QString::number(firstProduct.soLuong) + "\n" +
                              "Tên Sản Phẩm: " + QString::fromStdString(firstProduct.tenSanPham) + "\n" +
                              "Giá Tiền: " + QString::fromStdString(QLBH.showMoney(firstProduct.giaTien)) + "\n\n";

        ui->INFO_EDIT_3->setPlainText(productInfo);
    } else {
        ui->INFO_EDIT_3->setPlainText("Không có sản phẩm.");
    }

    // in tien hien tai
    int index = indexUser;
    if (index != -1) {
        QString moneyString = QString(QLBH.showMoney(QLBH.user[index].money).c_str());
        ui->lblMoney->setText("Tiền hiện tại: " + moneyString);
    } else {
        ui->lblMoney->setText("CÁC SẢN PHẨM HIỆN CÓ");
    }

    //loi chao khach hang
    if (index != -1 && index < QLBH.user.size()) {
        QString userName = QString::fromStdString(QLBH.user[index].name);
        ui->lblHello->setText("Hello, " + userName);
    }
}

KhachHang::~KhachHang()
{
    delete ui;
}

/* Go back */
void KhachHang::on_EXIT_BUTTON_clicked()
{
    close();
    parentWidget()->show();
}

/* Change the store page */
void KhachHang::on_LEFT_BUTTON_clicked()
{
    updateProductDisplay(-3);
}

/* Change the store page */
void KhachHang::on_RIGHT_BUTTON_clicked()
{
    updateProductDisplay(3);
}

/* Buy the first product */
void KhachHang::on_BUY_BUTTON_clicked()
{
    // kiem tra san pham dau tien co ton tai khong
    if (QLBH.product[0].soLuong > 0) {
        // Thực hiện việc mua hàng ở đây
        try {
            muaSanPham(ui->INFO_EDIT);
        } catch (const std::exception& e) {
            QMessageBox::warning(this, "Mua hàng", "Có lỗi xảy ra khi mua sản phẩm!");
        }
    } else {
        QMessageBox::warning(this, "Mua hàng", "Sản phẩm không tồn tại!");
    }

    int index = indexUser;
    if (index != -1) {
        QString moneyString = QString(QLBH.showMoney(QLBH.user[index].money).c_str());
        ui->lblMoney->setText("Tiền hiện tại: " + moneyString);
    } else {
        ui->lblMoney->setText("CÁC SẢN PHẨM HIỆN CÓ");
    }
}

/* Buy the second product */
void KhachHang::on_BUY_BUTTON_2_clicked()
{
    if (QLBH.product[1].soLuong > 0) {
        const SanPham& sanPhamMua = QLBH.product[1];
        try {

            muaSanPham(ui->INFO_EDIT_2);
        } catch (const std::exception& e) {
            QMessageBox::warning(this, "Mua hàng", "Có lỗi xảy ra khi mua sản phẩm!");
        }
    } else
    {
        QMessageBox::warning(this, "Mua hàng", "Sản phẩm không tồn tại!");
    }

    int index = indexUser;
    if (index != -1) {
        QString moneyString = QString(QLBH.showMoney(QLBH.user[index].money).c_str());
        ui->lblMoney->setText("Tiền hiện tại: " + moneyString);
    } else {
        ui->lblMoney->setText("CÁC SẢN PHẨM HIỆN CÓ");
    }
}

/* Buy the third product */
void KhachHang::on_BUY_BUTTON_3_clicked()
{
    if (QLBH.product[2].soLuong > 0) {
        try {
            muaSanPham(ui->INFO_EDIT_3);
        } catch (const std::exception& e) {
            QMessageBox::warning(this, "Mua hàng", "Có lỗi xảy ra khi mua sản phẩm!");
        }
    } else {
        QMessageBox::warning(this, "Mua hàng", "Sản phẩm không tồn tại!");
    }

    int index = indexUser;
    if (index != -1) {
        QString moneyString = QString(to_string(QLBH.user[index].money).c_str());
        ui->lblMoney->setText("Tiền hiện tại: " + moneyString);
    } else {
        ui->lblMoney->setText("CÁC SẢN PHẨM HIỆN CÓ");
    }
}

void KhachHang::updateProductDisplay(int step)
{
    //QLBH.xuatFileSanPham();
    int productCount = QLBH.product.size();

    // Cap nhat index san pham hien tai
    currentProductIndex = (productCount + currentProductIndex + step) % productCount;

    for (int i = 0; i < 3; ++i) {
        QString productInfo;
        int index = (currentProductIndex + i) % productCount;

        if (index >= 0 && index < productCount) {
            const SanPham& selectedProduct = QLBH.product[index];
            productInfo = "Mã Sản Phẩm: " + QString::fromStdString(selectedProduct.maSanPham) +
                          "\nSố Lượng: " + QString::number(selectedProduct.soLuong) +
                          "\nTên Sản Phẩm: " + QString::fromStdString(selectedProduct.tenSanPham) +
                          "\nGiá Tiền: " + QString::fromStdString(QLBH.showMoney(selectedProduct.giaTien)) + "\n\n";
        } else {
            productInfo = "Không có sản phẩm.";
        }

        if (i == 0) {
            ui->INFO_EDIT->setPlainText(productInfo);
        } else if (i == 1) {
            ui->INFO_EDIT_2->setPlainText(productInfo);
        } else if (i == 2) {
            ui->INFO_EDIT_3->setPlainText(productInfo);
            break;
        }
    }
}
void KhachHang::muaSanPham(QPlainTextEdit *textEdit)
{
    //Lay thông tin tu san pham qtext tương ứng
    QString productInfo = textEdit->toPlainText();
    // Lay ma san opham
    QStringList lines = productInfo.split('\n');
    QString maSanPhamLine = lines[0]; // Gia dinh don dau tien la ma sp
    QString maSanPham = maSanPhamLine.split(": ").at(1).trimmed();

    // tim chi so san pham
    int index = QLBH.findIndexProduct(maSanPham.toStdString());

    cout << maSanPham.toStdString() << endl;
    // tine hanh mua san pham
    if (index >= 0 && QLBH.product[index].soLuong > 0) {
        // điều kiện kiểm tra so sánh tiền với tiền sản phẩm
        if (coTheMuaHang(QLBH.user[indexUser].id, QLBH.product[index].giaTien)) {
            // mua hagn
            QLBH.muaHang(QLBH.user[indexUser].id, QLBH.product[index].maSanPham);

            // cap nhat lại thông tin mua hang
            productInfo = "Mã Sản Phẩm: " + maSanPham + "\n" +
                          "Số Lượng còn lại: " + QString::number(QLBH.product[index].soLuong) + "\n" +
                          "Tên Sản Phẩm: " + QString::fromStdString(QLBH.product[index].tenSanPham) + "\n" +
                          "Giá Tiền: " + QString::fromStdString(QLBH.showMoney(QLBH.product[index].giaTien)) + "\n\n";
            textEdit->setPlainText(productInfo);
            QMessageBox::information(this, "Mua hàng", "Bạn đã mua sản phẩm thành công!");
        }
        else {
            // Nếu không đủ tiền, thông báo cho người dùng
            QMessageBox::warning(this, "Mua hàng", "Không đủ tiền để mua sản phẩm này.");
            return;
        }
    }
    else {
        // Neu san pham khong dược tim thay hoac het hang thi thong bao
        textEdit->setPlainText("Sản phẩm không tồn tại hoặc đã hết hàng.");
    }

}
// kiem tra tien khach hang voi tien san pham
bool KhachHang::coTheMuaHang(const string& userId, long long giaTienSanPham) {
    for (const auto& nguoiDung : QLBH.user){
        if (nguoiDung.id == userId) {
            return nguoiDung.money >= giaTienSanPham;
        }
    }
    return false;
}

