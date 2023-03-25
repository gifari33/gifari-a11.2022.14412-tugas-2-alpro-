#include <iostream>
using namespace std ; 

int min (int x){
    int min = 9999 ; 
    int  array[x] ; 
    for (int i = 0; i <= x; i++)
    {
        cout << "masukkan nilai " << i << " = " ; 
        cin >> array[i] ; 
        if (min > array[i])
        {
            min = array[i] ; 
        }
    }
        cout << endl ; 
        cout << "nilai terkecilnya adalah = " << min ; 
    }

int max (int x){
    int max = -9999 ; 
    int  array[x] ; 
    for (int i = 0; i <= x; i++)
    {
        cout << "masukkan nilai " << i << " = " ; 
        cin >> array[i] ; 
        if (max < array[i])
        {
            max = array[i] ; 
        }
    }
        cout << endl ; 
        cout << "nilai terbesar adalah adalah = " << max ; 
    }

int minimal (int a , int b){
    if (a < b){
        cout << a ; 
    }
    
    else {
        cout << b ; 
    }
}
    
int maksimal (int a , int b ){
    if (a > b){
        cout << a ;
    }
    else {
        cout << b ; 
    } 
}


    int sorting_kecil(int jml){
    int wadah ; 
    int angka[jml]; 

    for (int i = 1 ; i <= jml; i++)
    {
        cout << "masukkan angkanya = " ; 
        cin >> angka[i];
    }
    
    for (int i = 1; i <= jml; i++)
    {
        for (int i = 1; i <= jml; i++)
        {
            if (angka[i] > angka[i+1])
            {
                wadah       = angka[i];
                angka[i]    = angka[i+1];
                angka[i+1]  = wadah ; 
            }
            
        }
        
    }

    for (int i = 1; i <= jml; i++)
    {
        cout << angka[i] << " "  ; 
    }
    }


    int sorting_besar(int jml){
    int wadah ; 
    int angka[jml]; 

    for (int i = 1 ; i <= jml; i++)
    {
        cout << "masukkan angkanya = " ; 
        cin >> angka[i];
    }
    
    for (int i = 1; i <= jml; i++)
    {
        for (size_t i = 1; i <= jml; i++)
        {
            if (angka[i] < angka[i+1])
            {
                wadah       = angka[i];
                angka[i]    = angka[i+1];
                angka[i+1]  = wadah ; 
            }
            
        }
        
    }

    for (int i = 1; i <= jml; i++)
        {
        cout << angka[i] << " "  ; 
        }
    }

    int iskecil (int a , int b ){
        bool q ; 
        q = (a<b) ; 
        if (q == 1){
        cout << a ; 
        }
        else{
        cout << b ; 
        }
    }

    int isbesar (int a , int b ){
        bool q ; 
        q = (a>b) ; 
        if (q == 1){
        cout << a ; 
        }
        else{
        cout << b ; 
        }
    }



main (){
    int n = 0 ; 
    int hasil ;  
    int m = 0 ; 
    int jml ; 

    cout << "\t \t progam untuk mengatur angka " << endl << endl  ; 
    cout << "option =  " << endl ; 
    cout << "1 angka terkecil menggunakan array " << endl ; 
    cout << "2 angka terbesar menggunakan array" << endl ; 
    cout << "3 angka terkecil menggunakan dua variabel " << endl; 
    cout << "4 angka terbesar menggunakan dua variabel " << endl ; 
    cout << "5 sorting dari angka terkecil  " << endl ; 
    cout << "6 sorting dari angka terbesar " << endl ; 
    cout << "7 angka terkecil menggunakan bool  " << endl ; 
    cout << "8 angka terbesar menggunakan bool " << endl ; 

    int option ; 
    cout << "masukkan angka = " ; 
    cin >>  option ;
    cout << endl << endl << endl ;  

    switch (option)
    {
    case 1:

        cout << "\t progam mancari angka terkecil "<< endl  ; 
        cout << "masukkan jumlah angka " << endl ; 
        cin >> n ; 
        hasil = min (n) ; 
        break; 
    
    case 2 : 

        cout << "\t progam mencari angka terbesar " << endl   ; 
        cout << "masukkan jumlah angka " << endl ; 
        cin >> n ; 
       hasil = max(n) ; 
       break;

    case 3 : 

        cout << "\t progam mencari angka kecil dua variabel " << endl ; 
        cout << "masukkan angka yang pertama "  ; 
        cin >> n ; 
        cout << "masukkan angka yang ke dua " ; 
        cin >> m ; 
        hasil = minimal(m,n) ; 
        break;

    case 4 : 

        cout << "\t progam mencari angka besar dua variabel " << endl ; 
        cout << "masukkan angka yang pertama "  ; 
        cin >> n ; 
        cout << "masukkan angka yang ke dua " ; 
        cin >> m ; 
        hasil = maksimal(m,n) ; 
        break;

    case 5 : 
    
    cout << "masukkan jumlah angka yang akan di sorting = " ; 
    cin >> jml ; 
    hasil = sorting_kecil(jml) ; 
    break;

    case 6 :
   
    cout << "masukkan jumlah angka yang akan di sorting = " ; 
    cin >> jml ; 
    hasil = sorting_besar(jml) ; 
    break;

    case 7 : 
    
    cout << "masukkan nilai a =  " ; 
    cin >> n ; 

    cout << "masukkan nilai b =  " ; 
    cin >> m ;

    hasil = iskecil(n,m) ; 

    break;


    case 8 : 
    
    cout << "masukkan nilai a =  " ; 
    cin >> n ; 

    cout << "masukkan nilai b =  " ; 
    cin >> m ;

    hasil = isbesar(n,m) ; 

    break;

    default:
        cout << "salah ndesss, seng bener go koe " ; 
        break;
    }
w

} 