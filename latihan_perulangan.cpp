#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int bil1 = 1, bil2 = 2;
    cout << "\tLatihan Perulangan C++ dengan Do-While" << endl;
    cout << "========================================" << endl;

    // 1. Menampilkan deret angka 1 sampai 10
    cout << "1. Menampilkan deret angka 1 sampai 10: ";
    do
    {
        cout << bil1 << " ";
        bil1++;
    } while (bil1 <= 10);
    cout << endl;

    // 2. Menampilkan deret bilangan genap dari angka 1 sampai 20
    cout << "2. Menampilkan deret bilangan genap dari angka 1 sampai 20: ";
    do
    {
        cout << bil2 << " ";
        bil2 += 2;
    } while (bil2 <= 20);
    cout << endl;

    return 0;
}
