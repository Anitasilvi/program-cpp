#include <iostream>
#include <conio.h>
using namespace std;
main(){
	char mtrxcontoh_A [3][3][15]= {{"1 2 3"},{"4 5 6"},{"7 8 9"}};	
	cout<<"\n\t === Tampil Matriks Ordo 3.3 === \n";
	cout<<"\n Matriks Contoh \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
		cout<<mtrxcontoh_A[i][j]<<" ";
		}
	 	cout<<endl;
	} 
	char mtrxcontoh_B [3][3][15]= {{"11 12 13"},{"14 15 16"},{"17 18 19"}};	
	cout<<"\n\t === Tampil Matriks Ordo 3.3 S2 === \n";
	cout<<"\n Matriks Contoh 2 \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
		cout<<mtrxcontoh_B[i][j]<<" ";
		}
	 	cout<<endl;
	}
}
