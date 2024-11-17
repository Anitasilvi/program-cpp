#include<iostream>
#include<string.h>
using namespace std;

main()
{
	string namabrg;
	int hrgbrg,jumlahuang,jumlah,disc,totalhrg,kembali;
	cout<<"==========================\n\n";
	cout<<"Masukkan nama barang = ";
	cin>>namabrg;
	cout<<"Masukkan harga barang = ";
	cin>>hrgbrg;
	cout<<"Masukkan jumlah barang = ";
	cin>>jumlah;
	
	if(jumlah>=5)
	{
		disc=(hrgbrg*jumlah)*15/100;
		cout<<"diskon 15%"<<endl;
	}
	
	else if(jumlah<=5)
	{
		disc=(hrgbrg*jumlah)*0/100;
		cout<<"harga normal"<<endl;
	}
	
	totalhrg=(hrgbrg*jumlah)-disc;
	cout<<"Total harga = "<<totalhrg<<endl;
	
	cout<<"Masukkan jumlah uang = ";
	cin>>jumlahuang;
	
	kembali=jumlahuang-totalhrg;
	cout<<"Kembali = "<<kembali<<endl;
	
	cout<<"\n\nTERIMAKASIH ATAS KUNJUNGAN ANDA";
	cout<<"\n===============================";
}
