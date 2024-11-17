#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int nilai;
	cout <<"||================Menghitung Nilai Akhir=================||\n";
	cout <<"\n";
    cout<<"input nilai akhir =";
    cin>>nilai;

	if (nilai >100)

		{
		cout << "\n";
		cout << " Selamat" <<" "<< x <<""<< "\n";
		cout << " Salah Entri";
		cout << " Anda lulus\n";
		cout << " Selamat anda bisa melanjutkan ke semester selanjutnya \n";
		}

		else if (nilai >=90)
		{
		cout << "\n";
		cout << " Selamat " <<" "<< x <<","<< "\n";
		cout << " Baik Sekali";
		cout << " Anda lulus\n";
		cout << " Anda bisa melanjutkan ke semester selanjutnya \n" ;
			}
		else if (nilai >=80)
		{
		cout << "\n";
		cout << " "<< x <<","<< "\n";
		cout << " Anda mendapatkan nilai C,  dengan jumlah nilai " << d  << "\n";
		cout << " Anda lulus\n";
		cout << " Anda bisa melanjutkan ke semester selanjutnya, atau mengulanginya tahun depan \n";
				}
		else if (nilai >=70)
		{
		cout << "\n";
		cout << " " << x <<","<< "\n";
		cout << " Anda mendapatkan nilai D, dengan jumlah nilai " << d  << "\n";
		cout << " Anda Tidak Lulus\n";
		cout << " Silakan mengulanginya tahun depan \n";
			}

		else if (nilai <70)
		{
		cout << "\n";
		cout << " "<< x <<","<< "\n";
		cout << " Anda mendapatkan nilai E, dengan jumlah nilai " << d  << "\n";
		cout << " Anda Tidak Lulus\n";
		cout << " Silakan mengulanginya tahun depan \n";
					}
		cout << "\n";
		cout <<"||=======================================================||\n";
		cin.get();
		return 0;
	}
