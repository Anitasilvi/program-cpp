#include<iostream>
using namespace std;
int main(){
	int angka,jumlah ,min,max;
	cout<<"2. Mencari Nilai min dan max (dengan angka random)"<<endl;
	cout<<"Masukkan Jumlah Angka yang ingin anda cari = ";
	cin>>jumlah;
	for(int i = 1; i <= jumlah;i++){
	cout<<"Masukkan angka = ";
	cin>>angka;
	if(i == 1 ){
	  min = angka;
	  max = angka;
	  }
	else if (min > angka){
	  min = angka;
	  }
	else if(max < angka){
	  max = angka;
	}
	else {}
}
    cout<<endl;
    cout<<"Nilai Terkecil(Min)       :"<<min<<endl;
	cout<<"Nilai Terbesar(Max)       :"<<max<<endl;
	
}
