# include <iostream>
using namespace std;
int main()
{
	int a,b;
	
	for(a=5;a>=1;a--) {
		for(b=5;b>=a;b--) {
			cout<<a;
		}
		cout<<endl;
	}
}
