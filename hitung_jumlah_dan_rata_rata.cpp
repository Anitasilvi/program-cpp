#include <iostream>
using namespace std;
main()
{
int data[10] = {12,22, 32, 22, 42, 82, 52, 12, 92, 72};
int elemen,jumlah=0;
float rata;
for(elemen=0; elemen<= 9; elemen++)
{
	jumlah=jumlah + data[elemen];

}
	rata=jumlah/elemen;	
	cout<<"jumlah "<<jumlah<<endl;
	cout<<"Rata-ratanya : "<<rata;
}
