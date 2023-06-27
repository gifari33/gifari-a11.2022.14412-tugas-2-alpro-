#include <iostream>
using namespace std;

enum Cuaca {
    Cerah,
    Berawan,
    Hujan,
    Mendung
};

enum Kendaraan {
    Mobil,
    Motor,
    Sepeda,
    Bus
};

int main() {
    Cuaca hariIni = Cerah;
    Kendaraan kendaraanSaya = Motor;

    cout << "Cuaca hari ini: ";
    switch (hariIni) {
        case Cerah:
            cout << "Cerah";
            break;
        case Berawan:
            cout << "Berawan";
            break;
        case Hujan:
            cout << "Hujan";
            break;
        case Mendung:
            cout << "Mendung";
            break;
    }
    cout << endl;

    cout << "Kendaraan saya: ";
    switch (kendaraanSaya) {
        case Mobil:
            cout << "Mobil";
            break;
        case Motor:
            cout << "Motor";
            break;
        case Sepeda:
            cout << "Sepeda";
            break;
        case Bus:
            cout << "Bus";
            break;
    }
    cout << endl;

    return 0;
}

