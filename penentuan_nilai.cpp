#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	
	int nilai;
	cout<<"\t ___________________________________"<<endl;
	cout<<"\t|	Penentuan Nilai pelajaran  |"<<endl;
	cout<<"\t -----------------------------------"<<endl;

	cout<<"\n\ninput nilai pelajaran  =";
	cin>>nilai;
	
	if(nilai > 100)
	
	{
		cout<<"Salah Entri";
	}
	
	else if(nilai >= 90)
	{
		cout<<"Baik Sekali";
	}
	
	else if(nilai >= 80)
	{
		cout<<"Baik";
	}
	
	else if(nilai >= 70)
	{
		cout<<"Cukup";
	}
	else if (nilai < 70)
	{
		cout<<"Kurang";
	}
}

