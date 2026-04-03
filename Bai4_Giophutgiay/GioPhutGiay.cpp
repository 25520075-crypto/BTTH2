#include <iostream>
#include "GioPhutGiay.h"
#include <iomanip>
using namespace std;

void GioPhutGiay::Nhap() {
    cout << "Nhap gio: ";
    cin >> iGio;
    cout << "Nhap phut: ";
    cin >> iPhut;
    cout << "Nhap giay: ";
    cin >> iGiay;
}

void GioPhutGiay::Xuat() {
    cout << setfill('0')
         << setw(2) << iGio << ":"
         << setw(2) << iPhut << ":"
         << setw(2) << iGiay;
}

void GioPhutGiay::TinhCongThemMotGiay() {
    iGiay++;

    if (iGiay >= 60) {
        iGiay = 0;
        iPhut++;

        if (iPhut >= 60) {
            iPhut = 0;
            iGio++;

            if (iGio >= 24) {
                iGio = 0;
            }
        }
    }
}
