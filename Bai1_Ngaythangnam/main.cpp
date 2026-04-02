#include <iostream>
#include "NgayThangNam.h"
using namespace std;

// kiểm tra năm nhuận
bool NamNhuan(int nam) {
    return (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0));
}

// số ngày của tháng
int SoNgayTrongThang(int thang, int nam) {
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 ||
        thang == 8 || thang == 10 || thang == 12)
        return 31;
    if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
        return 30;
    if (thang == 2)
        return NamNhuan(nam) ? 29 : 28;
    return 0;
}
void NgayThangNam::Nhap() {
    cout << "Nhap ngay: ";
    cin >> iNgay;
    cout << "Nhap thang: ";
    cin >> iThang;
    cout << "Nhap nam: ";
    cin >> iNam;
}

void NgayThangNam::Xuat() {
    cout << iNgay << "/" << iThang << "/" << iNam;
}

void NgayThangNam::NgayThangNamTiepTheo() {
    iNgay++;
    if (iNgay > SoNgayTrongThang(iThang, iNam)) {
        iNgay = 1;
        iThang++;
        if (iThang > 12) {
            iThang = 1;
               iNam++;
        }
    }
}
