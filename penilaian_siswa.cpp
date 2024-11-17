#include<iostream>
#include<string.h>
using namespace std;

main()
{
	string nama;
	int kelas,nilai;
	cout<<"Masukkan nama : ";
	cin>>nama;
	cout<<"Masukkan kelas : ";
	cin>>kelas;
	cout<<"Maskkan nilai : ";
	cin>>nilai;
	
	if(nilai>=100)
	{
		cout<<"Salah entri";
	}
	
	else if(nilai>=90)
	{
		cout<<"Baik sekali";
	}
	
	else if(nilai>=80)
	{
		cout<<"Baik";
	}
	
	else if(nilai>=70)
	{
		cout<<"Cukup";
	}
	
	else if(nilai<=70)
	{
		cout<<"Kurang"<<endl;
	}
	
}
