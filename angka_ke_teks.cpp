#include<iostream>
#include<fstream>
using namespace std;

	//deklarasi array
	string bilangan [] = {" ", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh", "Sebelas"};
	//fungsi untuk mengeja angka
	string eja (int angka){
	//jika n kurang dari 0 maka 
	if( angka < 0){
		//return = mengembalikan nilai
		//cout = cuma nampilno
		
		//menampilkan dan mengembalikan nilai negatif +  fungsi ubah_bilangan
		return "Negatif" + eja(-angka);		
	}else if( angka < 12){
		return bilangan[angka];
	}else if( angka < 20){
		return eja(angka%10) + "Belas" ;
	}else if(angka<100){
		return eja(angka/10) + "Puluh" + eja(angka%10);
	}else if(angka<200){
		return "Seratus" + eja(angka%100);
	}else if(angka<1000){
		return eja(angka/100) + "Ratus" + eja(angka%100);
	}else if(angka<2000){
		return "Seribu" + eja(angka%1000);
	}else if (angka<10000){
		return eja(angka/1000) + "Ribu" +eja(angka%1000);
	}else{
		return "Angka Maksimal 4 Digit ";
	}
}
	//procedure untuk menulis dan membaca file
 	void save(string file, int angka){
 		ofstream simpan;
 		file = file+".txt";
 		simpan.open(file.c_str(),ios::out);
 		(angka==0)?simpan<<"Nol":simpan<<angka<<"="<<eja(angka)<<endl;
 		simpan.close();
	 }
//fungsi utama yang akan dijalankan terlebih dahulu
int main(){
	int angka;
	int x; double y;
	
	cout<<endl;
	cout<<"\t\t||*********************||\n";
	cout<<"\t\t|| Anita Silvi Ferdina ||\n";
	cout<<"\t\t|| Teknik Informatika  ||\n";
	cout<<"\t\t||*********************||\n";
	cout<<endl;
	
	char z[]= "||=============== BINTANG SEGITIGA SIKU ===============||\n\n";
	for(x=0; z[x] !=NULL; x++) 
	{
		cout<<z[x];
		for(y=0; y<=9999999; y++){
		}
	}
	string file, ulang;
	string separator = "==================================";
	cout<<separator<<endl<<"Ini Adalah Program Pengeja Angka"<<endl<<separator<<endl;
	input:
		cout<<"Masukkan Nama File = ";cin>>file;
		cout<<"Masukkan Angka Minim (1-4) Digit : "; cin>>angka;
		if(cin.good()){
			(angka==0)?cout<<"Nol"<<endl:cout<<angka<<" = "<<eja(angka)<<endl;
			save(file,angka);
		}else{
			cout<<"angka tidak valid"<<endl;
			cin.clear();cin.ignore();
			goto input;
		}
	check:
		cout<<"Lagi(Y/N)?";cin>>ulang;
		if(ulang=="Y"||ulang=="y"){
			goto input;
		}else if(ulang=="N"||ulang=="n"){
			cout<<separator<<endl<<"Terimakasi"<<endl<<separator<<endl;
			return 0;
		}else{
			cout<<"Pilihan Tidak Valid"<<endl;
			goto check;
		}
}
