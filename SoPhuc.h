#ifndef SOPHUC_H
#define SOPHUC_H

// Lớp Số Phức
class SoPhuc {
    private: int iThuc; // phần thực
    int iAo; // phần ảo

    public: void Nhap();
    void Xuat();

    SoPhuc Tong(SoPhuc sp);
    SoPhuc Hieu(SoPhuc sp);
    SoPhuc Tich(SoPhuc sp);
    SoPhuc Thuong(SoPhuc sp);
};

#endif
