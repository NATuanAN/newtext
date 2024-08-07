#include <iostream>
#include <math.h>
using namespace std;

class SoPhuc
{
    float iThuc, iAo;

public:
    float ModelofComplex() // Ở đây em có làm thêm hàm tính model của 1 số phức
    {
        return sqrt(iThuc * iThuc + iAo * iAo);
    }
    void Xuat();
    void Nhap();
    SoPhuc Tong(SoPhuc c, SoPhuc d);
    SoPhuc Hieu(SoPhuc c, SoPhuc d);
    SoPhuc Tich(SoPhuc c, SoPhuc d);
    SoPhuc Thuong(SoPhuc c, SoPhuc d);
};
