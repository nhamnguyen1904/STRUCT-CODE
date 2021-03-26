#include <iostream>
using namespace std;

typedef struct PhanSo
{
    int TuSo;
    int MauSo;
}PS;
PhanSo NhapPhanSo(PS &x)
{
    cin>>x.TuSo>>x.MauSo;
    return x;
}
PhanSo SoSanhPhanSo(PS a, PS b)
{
    if(a.TuSo = b.TuSo)
    {
        if(a.MauSo < b.MauSo)
        {
            return a;
        }
        else
            return b;
    }
    else if(a.MauSo == b. MauSo)
    {
        if(a.TuSo > b.TuSo)
        {
            return a;
        }
        else 
            return b;
    }
    else
    {
        PhanSo QuyDong1, QuyDong2;
        QuyDong1.TuSo = a.TuSo*b.MauSo;
        QuyDong1.MauSo = a.MauSo*b.MauSo;
        QuyDong2.TuSo = a.MauSo*b.TuSo;
        QuyDong2.MauSo = a.MauSo*b.MauSo;
        if(QuyDong1.TuSo > QuyDong2.TuSo)
        {
            return a;
        }
        else
            return b;
    }
}
void XuatPhanSo(PS x)
{
    if(x.MauSo==1)
    {
        cout<<x.TuSo;
    }
    else 
        cout<<x.TuSo<<"/"<<x.MauSo;
}
int UCLN (int &a, int &b)
{
    /*if(b==0)
        return a;
    else
        return UCLN(b,a%b);*/
    if(a==0 || b==0)
    {
        return a+b;
    }
    while(a!=b)
    {
        if(a>b)
            a-=b;
        else 
            b-=a;
    }
    return a;
}
void RutGonPhanSo(PS x)
{
    int KetQua;
    KetQua=UCLN(x.TuSo, x.MauSo);
    if(x.TuSo<0 && x.MauSo<0)
    {
        x.TuSo= -x.TuSo;
        x.MauSo = -x.MauSo;
    }
    else if(x.TuSo>0 && x.MauSo<0)
    {
        x.TuSo = -x.TuSo;
        x.MauSo = - x.MauSo;
    }
    x.TuSo = x.TuSo/KetQua;
    x.MauSo = x.MauSo/KetQua;

}
void Tong2PhanSo(PS a, PS b)
{
    PS Sum;
    Sum.TuSo = a.TuSo*b.MauSo + b.TuSo*a.MauSo;
    Sum.MauSo = a.MauSo*b.MauSo;
    RutGonPhanSo(Sum);
    XuatPhanSo(Sum);
}
void Hieu2PhanSo(PS a, PS b)
{
    PS Hieu;
    Hieu.TuSo = a.TuSo*b.MauSo - b.TuSo*a.MauSo;
    Hieu.MauSo = a.MauSo*b.MauSo;
    RutGonPhanSo(Hieu);
    XuatPhanSo(Hieu);
}
void Tich2PhanSo (PS a, PS b)
{
    PS Tich;
    Tich.TuSo = a.TuSo*b.TuSo;
    Tich.MauSo = a.MauSo*b.MauSo;
    RutGonPhanSo(Tich);
    XuatPhanSo(Tich);
}
void Thuong2PhanSo (PS a, PS b)
{
    PS Thuong;
    Thuong.TuSo = a.TuSo*b.MauSo;
    Thuong.MauSo = a.MauSo*b.TuSo;
    RutGonPhanSo(Thuong);
    XuatPhanSo(Thuong);
}
int main()
{
    PS PhanSo_a, PhanSo_b;
    NhapPhanSo(PhanSo_a);
    NhapPhanSo(PhanSo_b);
    //SoSanhPhanSo(PhanSo_a,PhanSo_b);
    cout<<"Phan so lon nhat la: ";
    XuatPhanSo(SoSanhPhanSo(PhanSo_a,PhanSo_b));
    cout<<endl;
    cout<<"Tong 2 phan so la: ";
    Tong2PhanSo(PhanSo_a, PhanSo_b);
    cout<<endl<<"Hieu 2 phan so la: ";
    Hieu2PhanSo(PhanSo_a, PhanSo_b);
    cout<<endl<<"Tich 2 phan so la: ";
    Tich2PhanSo(PhanSo_a, PhanSo_b);
    cout<<endl<<"Thuong 2 phan so la: ";
    Thuong2PhanSo(PhanSo_a, PhanSo_b);
    return 0;
}
