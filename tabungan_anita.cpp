#include <iostream>
using namespace std;
int main ()
{
	int kode, tarik, setor, saldo;
	char status;
	saldo = 5000000;
	const string separator ="\n=======================================\n";
	int x; double y;
	
	cout<<endl;
	cout<<"\t\t||*********************||\n";
	cout<<"\t\t|| Anita Silvi Ferdina ||\n";
	cout<<"\t\t|| Teknik Informatika  ||\n";
	cout<<"\t\t||*********************||\n";
	cout<<endl;
	
	char z[]= "||=============== Queue Sembako ===============||\n\n";
	for(x=0; z[x] !=NULL; x++) 
	{
		cout<<z[x];
		for(y=0; y<=9999999; y++){
		}
	}
	cout<<"---------- BUKU TABUNGAN ANITA SILVI FERDINA ------------\n";
	cout<<separator;
	cout<<"Saldo = Rp. 5000000" ;
	cout<<separator;
	
	menu:
	cout<<"___________________________________"<<endl;
	cout<<"|                                 |"<<endl;
	cout<<"| MENU TRANSAKSI                  |"<<endl;
	cout<<"|_________________________________|"<<endl;
	cout<<"|                                 |"<<endl;
	cout<<"| (1) Tambah Tabungan             |"<<endl;
	cout<<"| (2) Penarikan                   |"<<endl;
	cout<<"| (3) Keluar                      |"<<endl;
	cout<<"|_________________________________|"<<endl;
	
	pilih:
	cout<<"\n Masukan Menu Pilihan = ";
	cin>>kode;
	
	if(kode==1)
	
	{
		system("cls");
		cout<<"-------------[Transaksi = TAMBAH TABUNGAN]--------------\n";
		cout<<"\n Jumlah uang yang akan anda tambahkan = Rp. ";
		cin>>setor;
		
		saldo+=setor;
		
		cout<<"\n Tabungan Anda Saat Ini = Rp. "<<saldo;
		cout<<separator;
		
		cout<<"\n Tekan y untuk kembali ke menu utama atau n untuk keluar ? (Y/N) = ";
		cin>>status;
		
		if(status=='y' || status == 'Y')
		{
		system("cls");
		cout<<"----------------TABUNGAN ANITA SILVI FERDINA----------------"<<endl;
		cout<<"============================================"<<endl;
		cout<<"Saldo = Rp. "<<saldo;
		cout<<separator;
		
		goto menu;
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
		cout<<"\n Jumlah uang yang akan anda ambil = Rp. ";
		cin>>tarik;
		
		if (tarik<=50000)
		{
			cout<<"\n Saldo Tidak di Ambil \n ";
			cout<<"Karena Saldo Minimal Rp.50000";
			cout<<separator;
		}
		else
	{
		saldo-=tarik;
		cout<<"\n Tabungan Anda Saat Ini = Rp."<<saldo;
	}
		cout<<"\n Tekan y untuk kembali ke menu utama atau n untuk keluar ?(Y/N) = ";
		cin>>status;
		
		if(status=='y' || status == 'Y')
		{
		system("cls");
		cout<<"----------------TABUNGAN ANITA SILVI FERDINA----------------"<<endl;
		cout<<separator<<endl;
		cout<<"Saldo = Rp. "<<saldo;
		cout<<separator;
		goto menu;
		}
		else
		{
			goto end;
		}
	}
	else if(kode==3)
	{
		goto end;
	}
	else
	{
		cout<<" Menu Yang Anda Masukan Tidak Terdaftar. \n Silahkan Ulangi Kembali!! \n";
		goto pilih;
	}
	end:
		cout<<"\n=================TERIMAKASIH KUNJUNGANNYA==================";
}
