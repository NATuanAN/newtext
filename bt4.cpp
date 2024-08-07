#include "bt4.h"
void Time::Nhap()
{
    cin >> iGio >> iPhut >> iGiay;
}

void Time::Xuat()
{
    cout << "Gio hien tai la: ";
    cout << "da thay doi 3";
    cout << iGio << ":" << iPhut << ":" << iGiay;
}

void Time::TinhCongThemMotGiay()
{
    iGiay++;
    if (iGiay >= 60)
    {
        iGiay = 0;
        iPhut++;
    }
    if (iPhut >= 60)
    {
        iPhut = 0;
        iGio++;
    }
    if (iGio >= 23)
    {
        iGio = 0;
        iPhut = 0;
        iGiay = 0;
    }
}