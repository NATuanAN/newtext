#include "bt4.h"
void Time::Nhap()
{
    cin >> iGio >> iPhut >> iGiay;
}

void Time::Xuat()
{
    cout << "Gio hien tai la: ";
    cout << "Da sua loi lan coui";
    cout << iGio << ":" << iPhut << ":" << iGiay;
}
