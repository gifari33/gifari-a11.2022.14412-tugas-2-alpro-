#include <iostream>
using namespace std;

typedef struct {
    int x, y, jml;
} hitung;

typedef struct {
    int p, l, keliling;
} persegi;

typedef struct {
    float r1, r2, pi, keliling;
} lingkaran;

typedef struct {
    float r2, t, pi, keliling;
} kerucut;

typedef struct {
    float pi, r3, keliling;
} bola;

typedef struct {
    int merk, type, harga, tahun;
} sepeda;

int main() {
    cout << "Penjumlahan" << endl;
    hitung jumlah;
    jumlah.x = 10;
    jumlah.y = 20;
    jumlah.jml = jumlah.x + jumlah.y;
    cout << jumlah.x << " + " << jumlah.y << " = " << jumlah.jml << endl;

    cout << endl;

    cout << "Menghitung Luas persegi panjang" << endl;
    persegi luasper;
    luasper.p = 25;
    luasper.l = 40;
    luasper.keliling = luasper.p * luasper.l;
    cout << "Luas Persegi panjang adalah: " << luasper.keliling << endl;

    cout << endl;

    cout << "Lingkaran" << endl;
    lingkaran luasling;
    luasling.r1 = 9;
    luasling.r2 = 4;
    luasling.pi = 22.0 / 7.0;
    luasling.keliling = luasling.pi * luasling.r1 * luasling.r2;
    cout << "Luas Lingkaran adalah: " << luasling.keliling << endl;

    cout << "Kerucut" << endl;
    kerucut luascut;
    luascut.r2 = 4;
    luascut.t = 8;
    luascut.pi = 22.0 / 7.0;
    luascut.keliling = (1.0 / 3.0) * luascut.pi * luascut.r2 * luascut.t;
    cout << "Luas Kerucut adalah: " << luascut.keliling << endl;

    cout << "Bola" << endl;
    bola luasbola;
    luasbola.r3 = 4;
    luasbola.pi = 22.0 / 7.0;
    luasbola.keliling = (4.0 / 3.0) * luasbola.pi * luasbola.r3;
    cout << "Luas Kerucut adalah: " << luasbola.keliling << endl;

    return 0;
}

