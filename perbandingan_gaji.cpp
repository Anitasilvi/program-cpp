#include<iostream>
using namespace std;

main()
{
	int gaji1,gaji2,gaji3;
	cout<<"Masukkan Gaji 1 = ";
	cin>>gaji1;
	cout<<"Masukkan Gaji 2 = ";
	cin>>gaji2;
	cout<<"Masukkan Gaji 3 = ";
	cin>>gaji3;
	
	if(gaji1>gaji2)
	{
		cout<<"Gaji 1 lebih besar dari gaji 2";
	}
	
	if(gaji1<gaji2)
	{
		cout<<"\nGaji 1 lebih kecil dari gaji 2";
	}
	
	if(gaji1>gaji3)
	{
		cout<<"\nGaji 1 lebih besar dari gaji 3";
	}
	
	if(gaji1<gaji3)
	{
		cout<<"\nGaji 1 lebih kecil dari gaji 3";
	}
	
	if(gaji2>gaji3)
	{
		cout<<"\nGaji 2 lebih besar dari gaji 3";
	}
	
	if(gaji2<gaji3)
	{
		cout<<"\nGaji 2 lebih kecil dari gaji 3";
	}
	
	if(gaji1>gaji2 && gaji1>gaji3)
	{
		cout<<"\n\nGaji terbesar = "<<gaji1<<endl;
	}
	
	else if(gaji2>gaji1 && gaji2>gaji3)
	{
		cout<<"\n\nGaji terbesar = "<<gaji2<<endl;
	}
	
	else if(gaji3>gaji1 && gaji3>gaji2)
	{
		cout<<"\n\nGaji terbesar = "<<gaji3<<endl;
	}
}

