

#include <iostream>
using namespace std;

int tambahkan(int a, int b)
{
    int hasile = 0;
    for (int i = 0; i < b; i++)
    {
        a = a + 1;
    }
    return a;
}

int perkalian(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return a + perkalian(a, b - 1);
    }
}

int jum(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return 1 + jum(a, b - 1);
    }
}

int kurang(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    else
    {
        return 1 - kurang(a, b - 1);
    }
}

int bagi(int a, int b)
{

    if (a < b) // <== 4 , 2
    {
        return 0;
    }

    else
    {
        return 1 + bagi(a - b, b);
    }
}

main()
{
    int a = 4;
    int b = 2;

    cout << jum(a, b) << endl;
    cout << kurang(a, b) << endl;
    cout << perkalian(a, b) << endl;
    cout << bagi(a, b) << endl;
}
