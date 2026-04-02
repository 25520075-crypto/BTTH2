#include <iostream>
#include "NgayThangNam.h"
using namespace std;
int main() {
    NgayThangNam a;
    cout << "===== NHAP NGAY =====\n";
    a.Nhap();
    cout << "\nNgay vua nhap: ";
    a.Xuat();
    a.NgayThangNamTiepTheo();
    cout << "\nNgay tiep theo: ";
    a.Xuat();
    return 0;
}
