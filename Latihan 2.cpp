#include <iostream>
using namespace std;

struct sepeda {
    string Merk;
    string Type;
    int Harga;
    int Tahun;
};

int main() {
    sepeda Sepeda;
    Sepeda.Merk = "Polygon";
    Sepeda.Type = "Sepeda Gunung";
    Sepeda.Harga = 2000000;
    Sepeda.Tahun = 2013;

    cout << "Merk: " << Sepeda.Merk << endl;
    cout << "Type: " << Sepeda.Type << endl;
    cout << "Harga: " << Sepeda.Harga << endl;
    cout << "Tahun: " << Sepeda.Tahun << endl;

    return 0;
}

