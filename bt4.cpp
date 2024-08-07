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
