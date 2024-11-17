#include<iostream>
using namespace std;
int main()
{
	int mat_b[3][2]={{1,2},{3,4},{5,6}};
	int i,j;
	cout<<"Matriks A\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		cout<<mat_b[j][i]<<"";
		cout<<endl;               
		
	}
	
	int mat_c[3][3]={{7,8,9},{9,8,7},{7,6,5}};
	int a,b;
	cout<<"Matriks B\n";
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		cout<<mat_c[a][b]<<"";
		cout<<endl;
	}
}
