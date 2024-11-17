#include <iostream>
#include <conio.h>
#include<stdlib.h>
using namespace std;
main(){
	int i,j,total;
	char matrixtambah_1 [3][3]={{"4 2"},{"3 1"}};
	char matrixtambah_2 [3][3]={{"1 -2"},{"0 -3"}};
	char matrixtambah_3 [3][3];
	
	cout << "Matriks A : " << endl;
 	for (i=0;j<2;i++) {
    	for (j=0;j<2;j++) {
        cout <<matrixtambah_1[i][j]<< " ";
   		}
   		cout << endl;
}
 
cout << "Matriks B : " << endl;
 
for (i=0;i<2;i++) {
    for (j=0;j<2;j++) {
        cout <<matrixtambah_2[i][j]< " ";
   }
   cout << endl;
}
 
cout << endl << "Matriks Penjumlahan : " << endl;
 
for (i=0;i<2;i++) {
    for (j=0;j<2;j++) {
        matrixtambah_3[i][j] = matrixtambah_1[i][j] + matrixtambah_2[i][j];
        cout << "matrixtambah_1[i][j]" << "+" << "matrixtambah_2[i][j]" << "=" << matrixtambah_3[i][j] << "  ";
   }
   cout << endl;
}
 
cout << endl;
}
