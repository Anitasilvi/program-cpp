'''''''''''''#include<iostream>
#include <string>
#include <fstream>
#include <ctype.h>
#include <stdio.h>
using namespace std;

int main()
{
	awal:

	cout<<"   ***************************\n";
	cout<<"   *  Anita Silvi Ferdina    *\n";
	cout<<"   * Rekayasa Perangkat Lunak*\n";
	cout<<"   ***************************\n\n\n";
	int beli,pilih, petugas, menu;
	cout<<"==================================================================\n";
	cout<<"==                   PROGRAM KASIR SIMAMART	                ==\n";
	cout<<"==================================================================\n";
	cout<<"Petugas\n";
	cout<<"1. Ani\n";
	cout<<"2. Budi\n";
	cout<<"------------------------------------------------------------------\n"<
	cout<<"Pilihan Anda : "; 
	cin>>petugas;
	cout<<"==================================================================\n";
	cout<<"==                   PROGRAM KASIR SIMAMART	                ==\n";
	cout<<"==================================================================\n";
	
	if(petugas==1 ){
		    cout<<"Selamat datang Ani\n";
	}
		
	else if(petugas==2 ){
		   cout<<"Selamat Datang Budi\n";
	}
	
	cout<< "Silahkan Pilih Menu Di Bawah Ini : \n";
	cout<<"1. Stok Barang \n";
	cout<<"2. Entri Barang \n";
	cout<<"3. Transaksi \n";
	cout<<"4. Log Transaksi \n";
	cout<<"------------------------------------------------------------------\n"<
	cout<<"Pilihan Anda : "; 
	cin>>menu;
	cout<<"==================================================================\n";
	cout<<"==                   PROGRAM KASIR SIMAMART	                ==\n";
	cout<<"==================================================================\n";
	
	if(menu==1 ){
		    cout<<"Stok Barang\n";
	}
		
	else if(menu==2 ){
		   cout<<"Entri Barang\n";
	}
	
	else if(menu==3 ){
		   cout<<"Transaksi\n";
	}
	
	else if(menu==4 ){
		   cout<<"Log Transaksi\n";
	}

}
