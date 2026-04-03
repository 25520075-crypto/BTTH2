#include <iostream>
#include "GioPhutGiay.h"
using namespace std;
int main() {
    GioPhutGiay t;
    cout << "===== NHAP THOI GIAN =====\n";
    t.Nhap();
    cout << "\nThoi gian ban dau: ";
    t.Xuat();
    t.TinhCongThemMotGiay();
    cout << "\nSau khi cong them 1 giay: ";
    t.Xuat();
    return 0;
}
