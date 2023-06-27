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
    Sepeda.Harga = 2.000.000;
    Sepeda.Tahun = 2013;

    sepeda* ptrSepeda = &Sepeda;

    cout << "Merk: " << ptrSepeda->Merk << endl;
    cout << "Type: " << ptrSepeda->Type << endl;
    cout << "Harga: " << ptrSepeda->Harga << endl;
    cout << "Tahun: " << ptrSepeda->Tahun << endl;

    return 0;
}

