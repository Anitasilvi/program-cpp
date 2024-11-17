
#include<iostream>
void menu()
{
printf("|==========================|");
printf("\n| Game Mengenal Bilangan |");
printf("\n|========================|");
printf("\n| 2      1      8        |");
printf("\n|      7   11         22 |");
printf("\n| 6           14         |");
printf("\n|   4   3       4        |");
printf("\n|     2   1   8      4   |");
printf("\n|  2         10          |");
printf("\n|     9        13        |"); 
printf("\n|        11         9    |");
printf("\n|  0             0       |");
printf("\n|  2        15    6      |");
printf("\n|        9     5         |");
printf("\n|    1              7    |");
printf("\n|========================|");   }

int main(){ 
int ganjil, genap;
char mulai,lanjut;
cout<<"\nStart Game(y/n):";
cin>>mulai;

if (mulai=='y' || mulai=='Y')
clrscr();
menu();
printf("\nAda Berapa Bilangan Ganjil? : ");
scanf("%d",&ganjil);

if (ganjil==14) {cout<<"\n Jawaban BENAR Score : 50 ";}
cout<<"\nLanjutkan (Y/N) >> ";
cin>>lanjut;
if (lanjut=='y' || lanjut=='Y')
{clrscr();
menu();
printf("\nAda Berapa Bilangan Genap? : ");
scanf("%d",&genap);}
if (genap==14) {cout<<"\n Jawaban BENAR Score : 100 ";}
cout<<" Selamat Anda Menyelesaikan Misi 1 ";

getch();
}
