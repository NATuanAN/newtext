#include "bt3.h"
void SoPhuc::Nhap()
{
    cout << "Nhap so phuc: " << endl;
    cin >> iThuc >> iAo;
}
void SoPhuc::Xuat()
{
    cout << "So phuc la: ";
    if (iAo == 0)
    {
        cout << iThuc << endl;
    }
    else if (iAo > 0)
    {
        cout << iThuc << "+" << iAo << "i" << endl;
    }
    else
    {
        cout << iThuc << iAo << "i" << endl;
    }
}

SoPhuc SoPhuc::Tong(SoPhuc c, SoPhuc d)
{
    SoPhuc temp;
    temp.iThuc = c.iThuc + d.iThuc;
    temp.iAo = c.iAo + d.iAo;
    return temp;
}

SoPhuc SoPhuc::Hieu(SoPhuc c, SoPhuc d)
{
    SoPhuc temp;
    temp.iThuc = c.iThuc - d.iThuc;
    temp.iAo = c.iAo - d.iAo;
    return temp;
}

SoPhuc SoPhuc::Tich(SoPhuc c, SoPhuc d)
{
    SoPhuc temp;
    temp.iThuc = c.iThuc * d.iThuc - c.iAo * d.iAo;
    temp.iAo = c.iThuc * d.iAo + c.iAo * d.iThuc;
    return temp;
}

SoPhuc SoPhuc::Thuong(SoPhuc c, SoPhuc d)
{
    SoPhuc temp;
    if (c.iAo == 0 && d.iAo == 0)
    {
        temp.iThuc = c.iThuc / d.iThuc;
        temp.iAo = 0;
        return temp;
    }

    temp.iThuc = (c.iThuc * d.iThuc + c.iAo * d.iAo) / (d.iThuc * d.iThuc + d.iAo * d.iAo);
    temp.iAo = (c.iAo * d.iThuc - c.iThuc * d.iAo) / (d.iThuc * d.iThuc + d.iAo * d.iAo);
    return temp;
}