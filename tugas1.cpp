#include <iostream>
using namespace std ; 

float x ; 
float y ; 
float hasil ; 

int Penjumlahan(int x , int y ){
    int q = x  + y ; 
    return q ; 
}

int Pengurangan(int x , int y ){
    int q = x  - y ; 
    return q ;    
}

int Perkalian(int x , int y ){
    int q = x  * y ; 
    return q ;  
}

int Membagian(int x , int y ){
    int q = x  / y ; 
    return q ;  
}

int sum(int j) {
    int q = 0 ; 
    int array[j]; 
    for (int i = 1; i <= j; i++)
    {
        cout << "masukkan angka ke " << i << " = " ; 
        cin >> array[i] ; 
        q = q + array[i] ; 
    }
    return q ;
}

float rata(int j) {
    float q = 0 ; 
    int array[j]; 
    for (int i = 1; i <= j; i++)
    {
        cout << "masukkan angka ke " << i << " = " ; 
        cin >> array[i] ; 
        q = q + array[i] ; 
    }
    q = q / j ; 
    return q ;
}


main (){
    cout << "\t Progam Kalkulator " << endl ; 
    cout << "Pilih option   " << endl ; 
    cout << "1. Penjumlahan " << endl ; 
    cout << "2. Pengurangan " << endl ; 
    cout << "3. Perkalian "   << endl ; 
    cout << "4. Membagian "   << endl ; 
    cout << "5. sum "         << endl ; 
    cout << "6. rata 2"       << endl ; 
    int option ; 
    cout << "masukkan kode = "; 
    cin >> option ; 

    cout << endl << endl ; 

    switch (option)
    {
    case 1:
        cout << "masukkan angka = " ;
        cin >> x ;  
        cout << "masukkan angka = " ; 
        cin >> y ; 
        hasil = Penjumlahan(x,y) ; 
        cout << "hasil penjumlahan di atas adalah " << hasil ; 
        break;

    case 2:
        cout << "masukkan angka = " ;
        cin >> x ;  
        cout << "masukkan angka = " ; 
        cin >> y ; 
        hasil = Pengurangan(x,y) ; 
        cout << "hasil Pengurangan di atas adalah " << hasil ; 
        break;

    case 3:
        cout << "masukkan angka = " ;
        cin >> x ;  
        cout << "masukkan angka = " ; 
        cin >> y ; 5 ;

        hasil = Perkalian(x,y) ; 
        cout << "hasil Perkalian di atas adalah " << hasil ; 
        break;

    case 4:
        cout << "masukkan angka = " ;
        cin >> x ;  
        cout << "masukkan angka = " ; 
        cin >> y ; 
        hasil = Membagian(x,y) ; 
        cout << "hasil Membagian di atas adalah " << hasil ; 
        break;

    case 5:
        cout << "barapa angka yang akan di jumlahkan  = " ;
        cin >> x ;  
        hasil = sum(x) ; 
        cout << "hasil semua penjumlahan di atas adalah " << hasil ; 
        break;

    case 6:
        cout << "barapa angka yang akan di jumlahkan  = " ;
        cin >> x ;  
        hasil = rata(x) ; 
        cout << "hasil rata-rata di atas adalah " << hasil ; 
        break;
    
    default:
        cout << "eror boss !!! " ; 
        break;
    }

    cout << endl << endl ;  

}