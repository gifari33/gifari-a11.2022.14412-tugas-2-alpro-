#include <iostream>
using namespace std ; 

void output(int arr[] , int x )
{
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " " ; 
    }
    cout << endl ; 
    
}

void bubblesort(int arr[] , int x)
{  
    for (int y = 0; y < x; y++)
    {
        for (int z = 0; z < x; z++)
        {
            if (arr[z] > arr[z + 1])
            {
                int temp = arr[z];
                arr[z] = arr[z + 1];
                arr[z + 1] = temp;
            }
            
        }
        
    }
    
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

        while (key < array[j] && j >= 0) {
        array[j + 1] = array[j];
        j = j - 1 ;
    }
    array[j + 1] = key;
  }
}



main(){

    int arr[] = {2,4,5,6,2,1,5} ;
    int x = sizeof(arr) / sizeof(arr[0]); 


    cout << "nilai yang belum di sorting = " << endl ; 
        output(arr,x) ;
        bubblesort(arr,x) ;
        insertionSort(arr,x); 

    cout << "metode bubblesort = " << endl ; 
        output(arr,x) ; 

    cout << "metode insertionSort = " << endl ; 
        output(arr,x) ; 
}