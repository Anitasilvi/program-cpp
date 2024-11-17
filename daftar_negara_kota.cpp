#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char Negara[4][2][30]=
	{{"Indonesia = Jakarta"},{"Filiphina = Manila"},{"Prancis = Paris"},{"Pakistan = Islamabad"}};
	int a,b;
	for(a=0;a<4;a++){
		for(b=0;b<2;b++)
		cout<<Negara[a][b]<<"";
		cout<<endl;
	}
}
