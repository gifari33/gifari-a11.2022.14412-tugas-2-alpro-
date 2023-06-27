#include <iostream>
using namespace std;



struct hitung{
int x,y,jml;
};

struct persegi{
int p,l,keliling;
};

struct lingkaran{
float r1,r2,pi,keliling;
};

struct kerucut{
float r2,t,pi,keliling;
};

struct bola{
float pi,r3,keliling;
};

struct sepeda{
int merk,type,harga,tahun;
};


int main()
{
    cout<<"penjumlahan"<<endl;
    struct hitung jumlah;
    jumlah.x =10;
    jumlah.y =20;
    jumlah.jml=jumlah.x+jumlah.y;
    cout<<jumlah.x<<" + "<<jumlah.y<<" = "<<jumlah.jml;

    cout<<endl;

    cout<<" Menghitung Luas persegi panjang"<<endl;
    struct persegi luasper;
    luasper.p = 25;
    luasper.l = 40;
    luasper.keliling=luasper.p*luasper.l;
    cout<<"Luas Persegi panjang adalah :"<<luasper.keliling<<endl;

    cout<<endl;

    cout<<"Lingkaran"<<endl;
    struct lingkaran luasling;
    luasling.r1 = 9;
    luasling.r2 = 4;
    luasling.pi = 22.0/7.0;
    luasling.keliling=luasling.pi*luasling.r1*luasling.r2;
    cout<<"Luas Lingkaran adalah :"<<luasling.keliling<<endl;

    cout<<"Kerucut"<<endl;
    struct kerucut luascut;
    luascut.r2 = 4;
    luascut.t = 8;
    luascut.pi = 22.0/7.0;
    luascut.keliling=(1.0/3.0)*luascut.pi*luascut.r2*luascut.t;
    cout<<"Luas Kerucut adalah :"<<luascut.keliling<<endl;

    cout<<"Bola"<<endl;
    struct bola luasbola;
    luasbola.r3 = 4;
    luasbola.pi = 22.0/7.0;
    luasbola.keliling=(4.0/3.0)*luasbola.pi*luasbola.r3;
    cout<<"Luas Kerucut adalah :"<<luasbola.keliling<<endl;


}
