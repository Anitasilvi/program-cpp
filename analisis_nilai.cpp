#include<iostream>
using namespace std;
main()
{
	int nilai[6];
	int nilai_inp, max, min, indeks ;
	double rerata;
	
	for(indeks=0;indeks<6;indeks++)
	{
		cout<<"Masukkan Nilai = " ;
		cin>>nilai[indeks];
		cout<<endl;
	}

	nilai_inp=0;
	for(indeks=0;indeks<6;indeks++)
	{
		nilai_inp=nilai_inp+nilai[indeks];
	}
	cout<<endl;
	cout<<"Jumlah nilai    = "<<nilai_inp<<endl;
	rerata=(double)nilai_inp/6;
	cout<<"Nilai Rata-rata = "<<rerata<<endl;
	
	
	min=nilai[0];
	for(indeks=0;indeks<6;indeks++)
	{
		if(min>nilai[indeks])
		{
			min=nilai[indeks];
		}
	}
	cout<<"Nilai Terkecil  = "<<min<<endl;
	
	
	max=nilai[0];
	int num=0;
	for(indeks=0;indeks<6;indeks++)
	{
		if(num<nilai[indeks])
		{
			num=nilai[indeks];
			max=nilai[indeks];
		}
	}
	cout<<"Nilai Terbesar  = " <<max<<endl;
	return 0;
}
