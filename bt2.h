#include <iostream>
using namespace std;

class PhanSo
{
    int iTu, iMau;

public:
    PhanSo();
    int getTu();
    int getMau();
    void Nhap();
    void Xuat();
    int gcd(int a, int b);
    void RutGon();
    PhanSo Tong(PhanSo f1, PhanSo f2);
    PhanSo Hieu(PhanSo f1, PhanSo f2);
    PhanSo Tich(PhanSo f1, PhanSo f2);
    PhanSo Thuong(PhanSo f1, PhanSo f2);
    ;
};