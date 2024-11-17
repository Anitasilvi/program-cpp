#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main ()
{
	int kode, tarik, setor, saldo;
	char status;
	saldo = 5000000;
	
	cout<<"----------BUKU TABUNGAN FIDISA------------\n";
	cout<<"\n=======================================\n";
	cout<<"Saldo = Rp. 200000000 \n=======================================\n\n";
	
	a:
	cout<<"___________________________________"<<endl;
	cout<<"|                                 |"<<endl;
	cout<<"| MENU TRANSAKSI                  |"<<endl;
	cout<<"|_________________________________|"<<endl;
	cout<<"|                                 |"<<endl;
	cout<<"| (1) Tambah Tabungan             |"<<endl;
	cout<<"| (2) Penarikan                   |"<<endl;
	cout<<"| (3) Keluar                      |"<<endl;
	cout<<"|_________________________________|"<<endl;
	
	b:
	cout<<"\nMasukan Menu Pilihan = ";
	cin>>kode;
	
	if(kode==1)
	
	{
		system("cls");
		cout<<"-------------[Transaksi = TAMBAH TABUNGAN]--------------\n";
		cout<<"\nJumlah uang yang akan anda tambahkan = Rp. ";
		cin>>setor;
		saldo=saldo+setor;
		cout<<"\nTabungan Anda Saat Ini = Rp. "<<saldo;
		
		cout<<"\n\nTekan y untuk kembali ke menu utama atau n untuk keluar ? (y=yes/n=no)";
		cin>>status;
		if(status=='y' || status == 'Y')
		{
			system("cls");
		cout<<"----------------TABUNGAN FIDISA----------------"<<endl;
		cout<<"============================================"<<endl;
		cout<<"Saldo = Rp. "<<saldo;
		cout<<"\n===========================================\n\n";
		goto a;
		}
		else
		{
			goto end;
		}	
	}
	else if (kode==2)
	{
		system("cls");
		cout<<"-------------[Transaksi = PENARIKAN TABUNGAN]--------------\n";
		cout<<"\nJumlah uang yang akan anda ambil = Rp. ";
		cin>>tarik;
		if (saldo-tarik<50000)
		{
			cout<<"\nSaldo Tidak di Ambil,\n";
			cout<<"Karena Saldo Minimal Rp.50000";
		}
		else
	{
		saldo=saldo-tarik;
		cout<<"\nTabungan Anda Saat Ini = Rp."<<saldo;
	}
		cout<<"\n\nTekan y untuk kembali ke menu utama atau n untuk keluar ? (y=yes/n=no)";
		cin>>status;
		if(status=='y' || status == 'Y')
		{
				system("cls");
		cout<<"----------------TABUNGAN FIDISA----------------"<<endl;
		cout<<"============================================"<<endl;
		cout<<"Saldo = Rp. "<<saldo;
		cout<<"\n===========================================\n\n";
		goto a;
		}
		else
		{
			goto end;
		}
	}
	else if(kode==3)
	{
		goto e;
	}
	else
	{
		cout<<"\nWARNING!!!!! \nMenu Yang Anda Masukan Tidak Terdaftar. \nSilahkan Ulangi Kembali!!\n";
		goto b;
	}
	end:
		e:
		cout<<"\n\n=================TERIMAKASIH KUNJUNGANNYA==================";
		getch();
}
