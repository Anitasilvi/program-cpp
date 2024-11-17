#include<iostream>
#include<string.h>
using namespace std;
main()
{
 int jumlah;
 cout<<"Masukkan jumlah siswa = "; 
 cin>>jumlah;
 int BING[jumlah],MAT[jumlah],BIN[jumlah];
 string nama[jumlah];
 int a,b;
 string c="-----------------------------------------------------------";
 int Rata[jumlah];
 for(a=0;a<jumlah;a++)
 {
  cout<<"Masukkan nama siswa : ";
  cin >>nama[a];
  cout<<"Masukkan nilai Matematika "<<nama[a]<<" : ";
  cin >>MAT[a];
  cout<<"Masukkan nilai B. Inggris "<<nama[a]<<" : ";
  cin >>BING[a];
  cout<<"Masukkan nilai B. Indonesia "<<nama[a]<<" : ";
  cin >>BIN[a];
  Rata[a]=(BING[a]+MAT[a]+BIN[a])/3;
 }
 cout<<c<<endl;
 cout<<"|No Urut|Nama Siswa\t|MAT\t|BING\t|BIN\t|Rata-rata|"<<endl;
 cout<<c<<endl;
 
 for(a=0;a<jumlah;a++)
 {
  cout<<"| "<<a+1<<"\t|"<<nama[a]<<"\t\t|"<<MAT[a]<<"\t|"<<BING[a]<<"\t|"<<BIN[a]<<"\t|"<<Rata[a]<<"\t|"<<endl;
  cout<<c<<endl;
 }
 
}
