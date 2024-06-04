QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chinhsua_giamgia.cpp \
    chinhsua_them.cpp \
    chinhsua_xoa.cpp \
    chinhsuasanpham.cpp \
    dangkykhachhang.cpp \
    danhsachkhachhang.cpp \
    doimatkhau.cpp \
    khachhang.cpp \
    lichsugiaodich.cpp \
    main.cpp \
    dangnhap.cpp \
    quanly.cpp \
    taothungan.cpp \
    thungan.cpp

HEADERS += \
    QuanLyBanHang.h \
    chinhsua_giamgia.h \
    chinhsua_them.h \
    chinhsua_xoa.h \
    chinhsuasanpham.h \
    dangkykhachhang.h \
    dangnhap.h \
    danhsachkhachhang.h \
    doimatkhau.h \
    khachhang.h \
    lichsugiaodich.h \
    quanly.h \
    taothungan.h \
    thungan.h

FORMS += \
    chinhsua_giamgia.ui \
    chinhsua_them.ui \
    chinhsua_xoa.ui \
    chinhsuasanpham.ui \
    dangkykhachhang.ui \
    dangnhap.ui \
    danhsachkhachhang.ui \
    doimatkhau.ui \
    khachhang.ui \
    lichsugiaodich.ui \
    quanly.ui \
    taothungan.ui \
    thungan.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ing.qrc
