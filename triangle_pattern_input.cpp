# include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"masukkan jumlah baris = ";
	cin>>c;
	
	for(a=1;a<=c;a++) {
		for(b=1;b<=a;b++) {
			cout<<a;
		}
		cout<<endl;
	}
}
