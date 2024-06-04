#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>
using namespace std;


class Time {
     public:
          int day;
          int month;
          int year;
          int hour;
          int minute;
          int second;

          Time() {}

          Time(int d, int m, int y, int h, int mi, int s) {
               day = d;
               month = m;
               year = y;
               hour = h;
               minute = mi;
               second = s;
          }
};

class Person {
     public:
          string id;
          string password;
          string name;
          int type;
          long long money;
          

          Person() {}
          Person(string id, string password, string name, int type, long long money) {
               setPerson(id, password, name, type, money);
          }

          void setPerson(string id, string password, string name, int type, long long money) {
               this->id = id;
               this->password = password;
               this->name = name;
               this->type = type;
               this->money = money;
          }

          void changePassword(string newPass) {
               password = newPass;
          }

          void addMoney(long long money) {
               this->money += money;
          }

};

class SanPham {
     public:
          string maSanPham;
          int soLuong;
          string tenSanPham;
          long long giaTien;

          SanPham() {}

          SanPham(string maSanPham, int soLuong, string tenSanPham, long long giaTien) {
               setSanPham(maSanPham, soLuong, tenSanPham, giaTien);
          }

          void setSanPham(string maSanPham, int soLuong, string tenSanPham, long long giaTien) {
               this->maSanPham = maSanPham;
               this->soLuong = soLuong;
               this->tenSanPham = tenSanPham;
               this->giaTien = giaTien;
          }

          void giamGia(int percent) {
               giaTien -= (giaTien * percent)/100;
          }

};

class GiaoDich {
     public:
          string id_Person;
          string maSanPham;
          Time thoiGian;

          GiaoDich() {}

          GiaoDich(string id, string sp, Time tg) {
               setGiaoDich(id, sp, tg);
          }

          void setGiaoDich(string id, string sp, Time tg) {
               id_Person = id;
               maSanPham = sp;
               thoiGian = tg;
          }
};

class QuanLyBanHang {
     public:
          vector <Person> user;
          vector <SanPham> product;
          vector <GiaoDich> lichSuGiaoDich;
//=========================================================
          QuanLyBanHang() {}

          void ghiFileUser() {
               ofstream fo;
               fo.open("USER.TXT");
               for (int i = 0; i < user.size(); i++) {
                    fo << user[i].id << endl;
                    fo << user[i].password << endl;
                    fo << user[i].name << endl;
                    fo << user[i].type << endl;
                    if (i == user.size()-1) {
                         fo << user[i].money;
                    }
                    else {
                         fo << user[i].money << endl;
                    }
                    
               }
               user.clear();
               fo.close();
          }

          void xuatFileUser() {
               ifstream fi;
               user.clear();
               fi.open("USER.TXT");
               while (!fi.eof()) {
                    string id;
                    string pass;
                    string name;
                    int type;
                    long long money;
                    getline(fi, id);
                    getline(fi, pass);
                    getline(fi, name);
                    fi >> type;
                    fi >> money;
                    fi.ignore();
                    user.push_back(Person(id, pass, name, type, money));
               }
               fi.close();
          }

          void ghiFileSanPham() {
               ofstream fo;
               fo.open("SANPHAM.TXT");
               for (int i = 0; i < product.size(); i++) {
                    fo << product[i].maSanPham << endl;
                    fo << product[i].soLuong << endl;
                    fo << product[i].tenSanPham << endl;
                    if (i == product.size() - 1) {
                         fo << product[i].giaTien;
                    }
                    else {
                         fo << product[i].giaTien << endl;
                    }
               }
               product.clear();
               fo.close();
          }

          void xuatFileSanPham() {
               ifstream fi;
               product.clear();
               fi.open("SANPHAM.TXT");
               while (!fi.eof()) {
                    string msp;
                    int sl;
                    string tsp;
                    long long gt;

                    getline(fi, msp);
                    fi >> sl;
                    fi.ignore();
                    getline(fi, tsp);
                    fi >> gt;
                    fi.ignore();

                    product.push_back(SanPham(msp, sl, tsp, gt));
               }
               fi.close();
          }

          void xuatFileGiaoDich() {
               ifstream fi;
               fi.open("GiaoDich.TXT");
               lichSuGiaoDich.clear();
               while (!fi.eof()) {
                    string id;
                    string msp;
                    int d, m, y, h, mi, s;
                    getline(fi, id);
                    getline(fi,msp);
                    fi >> d >> m >> y >> h >> mi >> s;
                    lichSuGiaoDich.push_back(GiaoDich(id, msp, Time(d, m, y, h, mi, s)));
                    fi.ignore();
               }
               fi.close();
          }

          void ghiFileGiaoDich() {
               ofstream fo;
               fo.open("GiaoDich.TXT");
               for (int i = 0; i < lichSuGiaoDich.size(); i++) {
                    fo << lichSuGiaoDich[i].id_Person << endl;
                    fo << lichSuGiaoDich[i].maSanPham << endl;
                    fo << lichSuGiaoDich[i].thoiGian.day << " ";
                    fo << lichSuGiaoDich[i].thoiGian.month << " ";
                    fo << lichSuGiaoDich[i].thoiGian.year << " ";
                    fo << lichSuGiaoDich[i].thoiGian.hour << " ";
                    fo << lichSuGiaoDich[i].thoiGian.minute << " ";
                    if (i == lichSuGiaoDich.size() - 1) {
                         fo << lichSuGiaoDich[i].thoiGian.second;
                    }
                    else {
                         fo << lichSuGiaoDich[i].thoiGian.second << endl;
                    }
                    
               }

               lichSuGiaoDich.clear();
               fo.close();
          }

          int checkLogIn(string id, string pass) {
             for (int i = 0; i < user.size(); i++) {
                    if (user[i].id == id) {
                         if (user[i].password == pass) {
                              return user[i].type;
                         }
                         else {
                              return -1;
                         }
                    }
             }  
             return -1;
          }

          int checkSignUp(string newId) {   // 0: Id da duoc su dung      1: Co the tao tai khoan
               for (int i = 0; i < user.size(); i++) {
                    if (user[i].id == newId) {
                         return 0;
                    }
               }
               return 1;
          }

          int checkAddProduct(string newMaSanPham) {
               for (int i = 0; i < product.size(); i++) {
                    if (product[i].maSanPham == newMaSanPham) {
                         return 0;
                    }
               }
               return 1;
          }

          void addUser(string id, string password, string name, int type, long long money) {
               user.push_back(Person(id, password, name, type, money));
          }

          void addProduct(string maSanPham, int soLuong, string tenSanPham, long long giaTien) {
               product.push_back(SanPham(maSanPham, soLuong, tenSanPham, giaTien));
          }

          void addGiaoDich(string id_Person, string maSanPham, Time thoiGian) {
               lichSuGiaoDich.push_back(GiaoDich(id_Person, maSanPham, thoiGian));
          }

          int findIndexUser(string id) {
               for (int i = 0; i < user.size(); i++) {
                    if (user[i].id == id) {
                         return i;
                    }
               }
               return -1;
          }

          int findIndexProduct(string maSanPham) {
               for (int i = 0; i < product.size(); i++) {
                    if (product[i].maSanPham == maSanPham) {
                         return i;
                    }
               }
               return -1;
          }
          
          void xoaUser(string id) {
               int i = findIndexUser(id);
               if (i != -1) {
                    user.erase(user.begin() + i);
               }
          }

          void xoaProduct(string maSanPham) {
               int i = findIndexProduct(maSanPham);
               if (i != -1) {
                    product.erase(product.begin() + i);
               }
          }

          void giamGia(string maSanPham, int percent) {
               int i = findIndexProduct(maSanPham);
               if (i != -1) {
                    product[i].giamGia(percent);
               }
          }

          void changPassword(string id, string newPass) {
               int i = findIndexUser(id);
               if (i != -1) {
                    user[i].password = newPass;
               }
          }

          void addMoney(string id, long long soTien) {
               int i = findIndexUser(id);
               if (i != -1) {
                    user[i].money += soTien;
               }
          }

          void muaHang(string id, string maSanPham) {
               int index_Id = findIndexUser(id);
               int index_Product = findIndexProduct(maSanPham);
               user[index_Id].money -= product[index_Product].giaTien;
               product[index_Product].soLuong--;

               int d;
               int m;
               int y;
               int h;
               int mi;
               int s;

               time_t now = time(0);
               tm *ltm = localtime(&now);

               y = ltm->tm_year + 1900;
               m = ltm->tm_mon;
               d = ltm->tm_mday;
               h = ltm->tm_hour;
               mi = ltm->tm_min;
               s = ltm->tm_sec;

               addGiaoDich(id, maSanPham, Time(d, m, y, h, mi, s));
          }

          string showMoney(long long money) {
               string result = "";
               while (money != 0) {
                    long long mod = money % 1000;
                    string t = to_string(mod);
                    while (t.length() != 3) {
                         t = "0" + t;
                    }
                    result = t + " " + result;
                    money = money / 1000;
               }

               while (result[0] == '0') {
                    result.erase(0, 1);
               }
               return result + "VND";
          }
};
