#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string nama_barang;
    double harga_barang,diskon,total_barang,uang,kembali,total_harga;
	cout<<"Masukkan nama barang :";
	cin>>nama_barang;
	cout<<"Masukkan harga barang :";
	cin>>harga_barang;
	
	if(harga_barang>=100000)
	{
		diskon=harga_barang*10/100;
		cout<<"diskon"<<endl;
	}
	
	else if(harga_barang<=100000)
	{
		diskon=harga_barang*0/100;
		cout<<"diskon"<<diskon<<endl;
	}
	total_harga=harga_barang-diskon;
	cout<<"Total Harga :" <<total_harga<<endl;
	
	cout<<"Masukkan Jumlah Uang :";
	cin>>uang;
	kembali=uang-total_harga;
	cout<<"Kembali :"<<kembali<<endl<<endl;
	
	cout<<"Terimakasih telah berbelanja";
	
	
}
