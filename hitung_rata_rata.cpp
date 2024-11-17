#include<iostream>
using namespace std;
int main(){
	
	int jumlah,angka,total = 0 , rata;
	cout<<"Mencari Jumlah Nilai rata-rata "<<endl;
	cout<<"1.Masukkan Jumlah Angka yang ingin dicari : "<<endl;
	cin>>jumlah;
	
	for(int i = 1;i <= jumlah; i++){
		cout<<"Masukkan Angka : ";
		cin>>angka;
		total = total + angka;
	
	
	}	
	cout<<"Total  : "<<total<<endl;
	rata = total / jumlah;
	cout<<"Rata - rata nilai : "<<rata<<endl;
	
	

}
