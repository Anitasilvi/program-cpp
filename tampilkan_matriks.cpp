#include <iostream>
using namespace std;
#include <conio.h>
main()
{
	int mat_A[3][4]={{3,1,6,8},{5,2,3,4},{6,1,2,4}};
	int i,j;
	for (i=0;i<3;i++)
	{
		for(j=0;j<4; j++)
		cout<<mat_A[i][j]<<"";
		cout<<endl;
	}
 getch();
	}
