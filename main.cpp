#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main() {
    SoPhuc a, b; // khai báo 2 số phức

    // Nhập số phức A
    cout << "Nhap so phuc A:\n";
    a.Nhap();

    // Nhập số phức B
    cout << "Nhap so phuc B:\n";
    b.Nhap();

    // Xuất số phức A
    cout << "\nA = ";
    a.Xuat();

    // Xuất số phức B
    cout << "\nB = ";
    b.Xuat();

    // Tính toán các phép toán
    SoPhuc tong = a.Tong(b);     // A + B
    SoPhuc hieu = a.Hieu(b);     // A - B
    SoPhuc tich = a.Tich(b);     // A * B
    SoPhuc thuong = a.Thuong(b); // A / B

    // Xuất kết quả
    cout << "\n\nTong: ";
    tong.Xuat();

    cout << "\nHieu: ";
    hieu.Xuat();

    cout << "\nTich: ";
    tich.Xuat();

    cout << "\nThuong: ";
    thuong.Xuat();

    return 0; // kết thúc chương trình
}
