#include <iostream>

#include<string.h>
using namespace std;
main(){
	char Nama_A[5][4][30]
	{{"Nama   MAT BIG  BIN "},{"Ali    80   75   90"},{"Johan  70   80   90"},{"Siti   85   70   76"},{"Ruly   80   85   85"}};
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		cout<<Nama_A[i][j]<<" ";
		cout<<endl;
	}


}

