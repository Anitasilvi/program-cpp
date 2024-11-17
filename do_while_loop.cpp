#include <iostream>
using namespace std;


main()
{
	int bil1=0,bil2=2,bil3=1;
	cout<<"              Latihan Perulangan C++ dengan Do-While        "<<endl;
	cout<<"============================================================"<<endl;
	cout<<"1. Menampilkan deret angka 1-10                          : ";
	do
	{
		cout<<bil1;
		bil1++;
	}while(bil1<=10);
	cout<<endl;
	cout<<"2.bilangan genap 1 - 10                                   : ";
do
{
	cout<<bil2;
	bil2=bil2+2;
}while(bil2<=10);
	cout<<endl;
cout<<"3.bilangan ganjil 1 - 10                                  : ";
do
{
	cout<<bil3;
	bil3=bil3+2;
}while(bil3<=10);
	cout<<endl;
}
	
