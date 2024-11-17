#include <iostream>
using namespace std;
main()
{
int data[10] = {11,22, 32, 22, 42, 82, 52, 12, 92, 72};
int elemen,jumlah=0, max,min;
float rata;
max = data[0];
for(elemen=0; elemen<= 9; elemen++)
{
if (data[elemen]>max) max = data[elemen];
else max = max;
}
	cout<< "Nilai maksimum adalah : "<< max<<endl;
	
	min = data[0];
for(elemen=0; elemen<= 9; elemen++)
{
if (data[elemen]<min) min = data[elemen];
else min = min;
}
	cout<< "Nilai minimum adalah : "<< min<<endl;
}
