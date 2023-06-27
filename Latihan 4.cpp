#include <iostream>
#include <iomanip>
using namespace std;

typedef struct {
  string nama;
  string nim;
  string jurusan;
  int tahunlulus;
} Mahasiswa;

int main() {
  const int jumlahMhs = 4; // Jumlah mahasiswa

  Mahasiswa Mhs[jumlahMhs] = {
    {"Andi", "A11.2020.01234", "Boardcasting", 2023},
    {"Budi", "A11.2020.01235", "Sistem Informasi", 2013},
    {"Ali", "A11.2020.01236", "DKV", 2003},
    {"Siti", "A11.2020.01237", "Kesehatan", 1993}
  };

  // Menampilkan header tabel
  cout << "------------------------------------------------------------------------------" << endl;
  cout << "  No.  |       NIM       |      Nama      |  Jurusan         |  Tahun Lulus |  " << endl;
  cout << "------------------------------------------------------------------------------" << endl;

  // Menampilkan data setiap mahasiswa
  for (int i = 0; i < jumlahMhs; i++) {
    cout << setw(6) << i + 1;
    cout << " | " << setw(15) << Mhs[i].nim;
    cout << " | " << setw(14) << Mhs[i].nama;
    cout << " | " << setw(16) << Mhs[i].jurusan;
    cout << " | " << setw(13) << Mhs[i].tahunlulus << endl;
  }

  cout << "------------------------------------------------------------------------------" << endl;

  return 0;
}
