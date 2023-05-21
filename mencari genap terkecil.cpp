

#include <iostream>
using namespace std;

bool genap(int x)
{
    if (x % 2 == 1)
    {
        return x;
    }
}

void ganjilKecil(int arr[], int x)
{
    int index;
    int nilai;

    for (int i = 0; i < x; i++)
    {
        int key = arr[i];

        if (!genap(key))
        {
            for (int q = i + 1; q < x; q++)
            {
                if (key > arr[q])
                {
                    index = q;
                    nilai = arr[q];
                }
            }
        }
    }
    cout << "index terletak di "
         << " \t " << index << endl;
    cout << "Nilainya adalah "
         << " \t " << nilai << endl;
}

main()
{
    int arr[] = {6, 7, 4, 3, 2, 0};
    int x = sizeof(arr) / sizeof(arr[0]);

    ganjilKecil(arr, x);
}