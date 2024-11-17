#include <iostream>
using namespace std;
#include <conio.h>
int main(){
	char Negara[4][2][15]=
{{"Indonesia","Jakarta"},{"Filipina","Manila"},{"Perancis","Paris"},{"Pakistan","Islamabad"}};
for(int baris=0;baris <4 ;baris++){
	if(Negara[baris][0][0]=='F'){
		cout<<Negara[baris][0]<<"-"
			<<Negara[baris][1]<<"\n";
		return 0;
	}
}
}
