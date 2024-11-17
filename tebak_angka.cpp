#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
 
 int angka, tebak, n=0; //int angka adalah angka yang di pikirkan komputer,tebak inputan , n=0 adalah jumlah tebakan dan di mulai dari 0 :p
 char lagi;
 menu:
 system ("cls");
 srand (time(NULL));//angka yang di acak
 angka=rand()% 100 +1;//perhitungan di mulai 1-100
 cout<<"_______________________________________\n";
 cout<<"_______________________________________\n";
 cout<<"saya sedang memikirkan angka dari 1-100.\n ";
 cout<<"mulailah menebak di bawah ini!\n"; 
 cout<<"_______________________________________\n";
 cout<<"_______________________________________\n";
 
 do{
  n++ ;
  cin>>tebak;
  if(tebak<angka) cout<< "angka anda terlalu kecil kawan  \n";
  else if (tebak>angka) cout<<"angka anda terlalu besar \n";
  else cout<<"Selamat \n";
  
 } while(tebak!=angka);
 cout<<"Anda benar ! anda telah menebak sebanyak "<<n<< "kali.\n";\
  
             cout<< "Masih lanjut [y/t]? ";cin>>lagi;
            
   if (lagi == 'y'){
            goto menu;
            }else
            {
   cout<<"tekan mana aja untuk keluar";
     }
 return 0;

}
