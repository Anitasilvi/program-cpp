#include<iostream>
using namespace std;
int main()
{
	int mat_b[2][3]={{1,2,3},{4,5,6}};
	int i,j;
	cout<<"Matriks A"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		cout<<mat_b[i][j]<<"";
		cout<<endl;               
		
	}
	
	int mat_c[3][3]={{7,8,9},{1,2,3},{9,8,7}};
	int a,b;
	cout<<"\nMatriks B"<<endl;
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		cout<<mat_c[a][b]<<"";
		cout<<endl;
	}
}
