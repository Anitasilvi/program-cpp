#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string nama_brg;
	double hrg,diskon,total_brg,uang,kembali,total_hrg;

	cout<<"input nama barang : ";
	cin>>nama_brg;
	cout<<"input harga barang : ";
	cin>>hrg;

	if(hrg>= 100000)
	{
		diskon=hrg*10/100;
		cout<<"diskon"<<endl;
	}
	else if (hrg<=100000)
	{
		diskon=hrg*0/100;
		cout<<"diskon"<<diskon<<endl;
	}
	total_hrg=hrg-diskon;
	cout<<"total harga : "<<total_hrg<<endl;

	cout<<"input jumlah uang: ";
	cin>>uang;
	kembali=uang-total_hrg;
	cout<<"kembali : "<<kembali<<endl;

	cout<<"|------------------------------------------|"<<endl;
	cout<<"|         Nama       |    Kelas/ No.Absen  |"<<endl;
	cout<<"|------------------- |---------------------|"<<endl;
	cout<<"|Anita Silvi Ferdina |      X RPL 1/ 10    |"<<endl;
	cout<<"|------------------------------------------|"<<endl;

}
