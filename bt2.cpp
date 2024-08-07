#include "bt2.h"

PhanSo::PhanSo()
{
    this->iTu = 0;
    this->iMau = 1;
}
int PhanSo::getTu()
{
    return this->iTu;
}
int PhanSo::getMau()
{
    return this->iMau;
}
void PhanSo::Nhap()
{
    cout << "Nhap phan so: " << endl;
    cin >> iTu >> iMau;
}
void PhanSo::Xuat()
{
    cout << "Phan so la: ";
    cout << iTu << "/" << iMau << endl;
}
int PhanSo::gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    else if (b % a == 0)
        return a;
    else if (a > b)
        return gcd(a - b, b);
    else if (a < b)
        return gcd(b - a, a);
    else if (a <= 0 || b <= 0)
        return 1;
}
void PhanSo::RutGon()
{
    this->iTu = this->iTu / gcd(iTu, iMau);
    this->iMau = this->iMau / gcd(iTu, iMau);
}
PhanSo PhanSo::Tong(PhanSo f1, PhanSo f2)
{
    PhanSo f3;
    f3.iTu = f1.getTu() * f2.getMau() + f2.getTu() * f1.getMau();
    f3.iMau = f1.getMau() * f2.getMau();
    f3.RutGon();
    return f3;
}
PhanSo PhanSo::Hieu(PhanSo f1, PhanSo f2)
{
    PhanSo f3;
    f3.iTu = f1.getTu() * f2.getMau() - f2.getTu() * f1.getMau();
    f3.iMau = f1.getMau() * f2.getMau();
    f3.RutGon();
    return f3;
}
PhanSo PhanSo::Tich(PhanSo f1, PhanSo f2)
{
    PhanSo f3;
    f3.iTu = f1.getTu() * f2.getTu();
    f3.iMau = f1.getMau() * f2.getMau();
    f3.RutGon();
    return f3;
}
PhanSo PhanSo::Thuong(PhanSo f1, PhanSo f2)
{
    PhanSo f3;
    f3.iTu = f1.getTu() * f2.getMau();
    f3.iMau = f1.getMau() * f2.getTu();
    f3.RutGon();
    return f3;
}