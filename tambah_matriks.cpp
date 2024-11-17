#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int mat_a[2][2]={{4,2},{3,1}};
	int mat_b[2][2]={{1,-2},{0,-3}};
	int a,b,penambahan,c,d;
	for(a=0;a<2;a++)
	{
		for(b=0;b<2;b++){
			cout<<mat_a[a][b]<<"  ";
		}    
		cout<<endl;
	}
	cout<<"\n+  +\n\n";
	for(c=0;c<2;c++)
	{
		for(d=0;d<2;d++){
			cout<<mat_b[c][d]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n  =  \n\n";
	
	for(int i = 0;i<2;i++)
	{
		for(int j = 0;j<2;j++)
		{
			penambahan=mat_a[i][j]+mat_b[i][j];
			cout<<penambahan<<"  ";
		}
		cout<<endl;
	}
	getch();
}
