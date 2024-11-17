#include<iostream>
#include<fstream>
#include<limits>


using namespace std;

//membuat aray angka bilangan dasar
//                  0    1      2
string satuan [] = {""," satu "," dua "," tiga " ," empat "," lima "," enam "," tujuh "," delapan "," sembilan "," sepuluh "," sebelas "};

//fungsi ubah_bilangan
string ubah_bilangan(int n){
	//jika n kurang dari 0 maka 
	if(n < 0){
		//return = mengembalikan nilai
		//cout = cuma nampilno
		
		//menampilkan dan mengembalikan nilai negatif +  fungsi ubah_bilangan
		return "negatif "+ubah_bilangan(-n);
	}
	//jika n kurang dari 10 maka
	else if(n==0){
		return "nol";
	}
	else if (n < 12){
		return satuan[n];
	}
	else if(n < 20){
		//       16-10 =6 + belas 
		return satuan[n-10] + " belas ";
	}
	else if(n < 100){
		//  3.5 + sepuluh       0.5/10 = 5
		return satuan[n/10] + "puluh" + ubah_bilangan(n%10);
		//   tiga             +  puluh  + lima
	}
	else if(n < 1000){
		      //jika n < 200 " seratus "
		      //            seratus      
		return (n < 200 ? " seratus "  : satuan[n/100] + " ratus " )+ ubah_bilangan(n%100);
	}
	else if(n < 10000){
		return (n < 2000 ? " seribu "  : ubah_bilangan(n/1000) + " ribu ") + ubah_bilangan(n%1000);
	}
	else if(n < 100000){
		return (n < 2000 ? " seribu "  : ubah_bilangan(n/1000) + " ribu ") + ubah_bilangan(n%1000);
	}
	else {
		return "harus 5 digit";
	}
}



string file(string nama){
	return nama + ".txt"; 
	
}

int main(){
	
	string nama_file;
	int angka;
	string kembali;
	
	
	awal:
	cout<<"=====================Mengeja====================="<<endl;
	cout<<"==================Rizky Putra R=================="<<endl;
	cout<<"nama file : ";
	cin	>> nama_file;
	
	validasi_angka:
	cout<<"angka :";
	cin>>angka;
	
	while(1)
	{
	if(cin.good()){
	cout<<"==================Hasil Mengeja=================="<<endl;
		cout<< ubah_bilangan(angka)<<endl;
	}else if(cin.fail()){ 
	    	cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"harus angka bosq"<<endl;
			goto validasi_angka;
			return 0;
	}
	
	if(!cin.fail())
	break;
	}
	
	ofstream outFile;
	outFile.open(file(nama_file).c_str(),ios::out);
	outFile << ubah_bilangan(angka);
	outFile.close();
	
	validasi:
	cout<<"===================Ingin Lanjut=================="<<endl;
	cout << "y atau t :"<<endl;
	cin>>kembali;
	
	
	if(kembali == "y"){
		goto awal;
	}else if(kembali == "t"){
		cout<<"trimakasi !!";
	}else{
		goto validasi;
		return 0;
	}
}






/*#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
string satuan[] = {    "", "satu ", "dua ", "tiga ", "empat ", "lima ", "enam ", "tuju ", "delapan ", "sembilan " };

string konvertAngka(int n) {
    if (n < 0) {
        return "negatif " + konvertAngka(-n);
    } else if (n < 10) {
        return satuan[n];
    } else if (n == 10) { // khusus untuk sepuluh
        return "sepuluh ";
    } else if (n == 11) { // khusus untuk sebelas
        return "sebelas ";
    } else if (n < 20) {
        return satuan[n-10] + "belas ";
    } else if (n < 100) {
        return satuan[(n-(n%10))/10] + "puluh " + konvertAngka(n % 10);
    } else if (n < 1000) {
        return (n < 200 ? "seratus " : satuan[(n-(n%100))/100] + "ratus ") + konvertAngka(n % 100);
    } else if (n < 1000000) { 
        return (n < 2000 ? "seribu " : konvertAngka((n-(n%1000))/1000) + "ribu ") + konvertAngka(n % 1000);
    } else if (n < 1000000000) {
        return konvertAngka((n-(n%1000000))/1000000) + "juta " + konvertAngka(n % 1000000);
    } else {
        return "Angka lebih besar dari 999,999,999 (harus kurang dari 1 Milyar)";
    }
}int main(int argc, char * argv[]) {
    if(argc<=1) {
        cout << "jangan lupa masukkan angka saat run." << endl;
        return 1;
    }    int angka = atoi(argv[1]);
    cout << konvertAngka(angka)<< (argv[2]? argv[2] : "" ) << endl;
    return 0;
}*/
