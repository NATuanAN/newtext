#include "bt1.h"
date::date()
{
    iNgay = 0;
    iThang = 0;
    iNam = 0;
}

void date::Nhap()
{
    cout << "Nhap ngay thang nam: " << endl;
    cin >> iNgay >> iThang >> iNam;
}

void date::Xuat()
{
    cout << "Ngay thang nam la: " << iNgay << "/" << iThang << "/" << iNam << endl;
}

void date::NgayThangNamtieptheo()
{
    date d;
    d.iNgay = this->iNgay;
    d.iThang = this->iThang;
    d.iNam = this->iNam;
    d.iNgay++;
    switch (d.iThang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if (d.iNgay > 31)
        {
            d.iNgay = 1;
            d.iThang++;
        }
    case 2:
        if (d.iNgay > 29 && d.iNam % 4 == 0)
        {
            d.iNgay = 1;
            d.iThang++;
        }
        else if (d.iNgay > 28 && d.iNam % 4 != 0)
        {
            d.iNgay = 1;
            d.iThang++;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        if (d.iNgay > 30)
        {
            d.iNgay = 1;
            d.iThang++;
        }
    case 12:
        if (d.iNgay > 31)
        {
            d.iNgay = 1;
            d.iThang = 1;
            d.iNam++;
        }
    }
    this->iNgay = d.iNgay;
    this->iThang = d.iThang;
    this->iNam = d.iNam;
}