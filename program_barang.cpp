#include <iostream>
using namespace std;

struct Barang{
	int kode;
	string nama;
	int jumlah;
	int harga;
};

Barang barang;
void printmenu(){
	cout<<"1.Masukkan kode barang = ";
	cin >>barang.kode;
	cout<<"2.Masukkan nama barang = ";
	cin >>barang.nama;
	cout<<"3.Masukkan jumlah barang = ";
	cin >>barang.jumlah;
	cout<<"4.Masukkan harga barang = ";
	cin >>barang.harga;
}

Barang getBarang(){
	return barang;
}

int main(){
	printmenu ();
	Barang get = getBarang();
	get.kode;
	get.nama;
	get.jumlah;
	get.harga;
}

//cout,cin,if,else,else if,for,while,tipe data,fungsi
