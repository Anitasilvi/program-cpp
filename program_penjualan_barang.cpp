#include <iostream>
#include<string.h>
using namespace std;

int main()
{
awal:

int beli,pilih;
cout<<"==================================================================\n";
cout<<"==              PROGRAM PENJUALAN BARANG ELEKTRONIK             ==\n";
cout<<"==================================================================\n"<cout<<"==================================================================\n";
cout<<"   |  1. Samsung LED TV         ||  Harga Rp. 3.000.000   |\n";
cout<<"   |  2. LG DVD Player Karaoke  ||  Harga Rp. 500.000     |\n";
cout<<"   |  3. Kulkas Polytron        ||  Harga Rp. 2.500.000   |\n";
cout<<"   |  4. Mesin Cuci Samsung     ||  Harga Rp. 2.300.000   |\n" ;
cout<<"==================================================================\n";
cout<<"------------------------------------------------------------------\n";
cout<<"     Setelah memilih Barang Lalu Tekan 'ENTER'     \n";
cout<<"------------------------------------------------------------------\n"<
cout<<"Pilih Barang : "; cin>>pilih;
cout<<"-------------------------------------------------------\n";
cout<<"Jumlah Barang Yang Dibeli : ";cin>>beli;
if(pilih==1 )
{
    int harga=3000000;
   int xharga;
   xharga=harga*beli;
            if(xharga>=2500000 && xharga<=6500000)
   {
                        int diskon,total;
                        diskon=(xharga*0)/100;
                        total=xharga-diskon;
                        cout<<"=======================================================\n";
   cout<<"==   Barang Yang Anda pilih Adalah Samsung LED TV    ==\n";                      
   cout<<"=======================================================\n"<                   
        cout<<"-------------------------------------------------------"; 
		cout<<"Harga Awal          = "<<"Rp. ";
		                            cout<<"Beli ";
									                            cout<<"Diskon 0%           = "<<"Rp. ";
																                            cout<<"Total Harga         = "<<"Rp. ";
						                       cout<<"-------------------------------------------------------";           }
  
   else if(xharga>=8500000 && xharga<=15500000)
   {
                        int diskon,total;
                        diskon=(xharga*10)/100;
                        total=xharga-diskon;
                        cout<<"=======================================================\n";
                        cout<<"==   Barang Yang Anda pilih Adalah Samsung LED TV    ==\n";
                        cout<<"=======================================================\n"<                        cout<<"-------------------------------------------------------";                             cout<<"Harga Awal          = "<<"Rp. ";                             cout<<"Beli ";                             cout<<"Diskon 10%          = "<<"Rp. ";                            cout<<"Total Harga         = "<<"Rp. ";                         cout<<"------------------------------------------------------";            }
  
   else if(xharga>=17500000 && xharga<=27500000)
   {
                        int diskon,total;
                        diskon=(xharga*15)/100;
                        total=xharga-diskon;
                        cout<<"=======================================================\n";
                        cout<<"==   Barang Yang Anda pilih Adalah Samsung LED TV    ==\n";
                        cout<<"=======================================================\n"<                        cout<<"-------------------------------------------------------";                             cout<<"Harga Awal          = "<<"Rp. ";                             cout<<"Beli ";                            cout<<"Diskon 15%          = "<<"Rp. ";                            cout<<"Total Harga         = "<<"Rp. ";                         cout<<"------------------------------------------------------";            }
  
   else if(xharga>29500000)
   {
                        int diskon,total;
                        diskon=(xharga*20)/100;
                        total=xharga-diskon;
                        cout<<"=======================================================\n";
                        cout<<"==   Barang Yang Anda pilih Adalah Samsung LED TV    ==\n";
                        cout<<"=======================================================\n"<                        cout<<"-------------------------------------------------------"<                             cout<<"Harga Awal          = "<<"Rp. "<                             cout<<"Beli "<                             cout<<"Diskon 20%          = "<<"Rp. "<                             cout<<"Total Harga         = "<<"Rp. "<                        cout<<"-------------------------------------------------------"<         }
}

else if(pilih==2 )
{
    int harga=500000;
   int xharga;
   xharga=harga*beli;
           if(xharga>=450000 && xharga<=1100000)
     {
                int diskon,total;
                diskon=(xharga*0)/100;
                total=xharga-diskon;
                        cout<<"=========================================================\n";
                        cout<<"== Barang Yang Anda pilih Adalah LG DVD Player Karaoke ==\n";
                        cout<<"=========================================================\n"<                        cout<<"---------------------------------------------------------"<                              cout<<"Harga Awal          = "<<"Rp. "<                              cout<<"Beli "<                              cout<<"Diskon 0  %         = "<<"Rp. "<                              cout<<"Total Harga         = "<<"Rp. "<                        cout<<"---------------------------------------------------------"<            }
   
     else if(xharga>=1400000 && xharga<=2600000)
     {
                int diskon,total;
                diskon=(xharga*10)/100;
                total=xharga-diskon;
                        cout<<"=========================================================\n";
                        cout<<"== Barang Yang Anda pilih Adalah LG DVD Player Karaoke ==\n";
                        cout<<"=========================================================\n"<                        cout<<"---------------------------------------------------------"<                              cout<<"Harga Awal          = "<<"Rp. "<                              cout<<"Beli "<                              cout<<"Diskon 10  %        = "<<"Rp. "<                              cout<<"Total Harga         = "<<"Rp. "<                        cout<<"---------------------------------------------------------"<            }
        
     else if(xharga>=2900000 && xharga<=4600000)
     {
                int diskon,total;
                diskon=(xharga*15)/100;
                total=xharga-diskon;
                        cout<<"=========================================================\n";
                        cout<<"== Barang Yang Anda pilih Adalah LG DVD Player Karaoke ==\n";
                        cout<<"=========================================================\n"<                        cout<<"---------------------------------------------------------"<                              cout<<"Harga Awal          = "<<"Rp. "<                              cout<<"Beli "<                              cout<<"Diskon 15  %        = "<<"Rp. "<                              cout<<"Total Harga         = "<<"Rp. "<                        cout<<"---------------------------------------------------------"<            }

     else if(xharga>4900000)
     {
                int diskon,total;
                diskon=(xharga*20)/100;
                total=xharga-diskon;
                        cout<<"=========================================================\n";
                        cout<<"== Barang Yang Anda pilih Adalah LG DVD Player Karaoke ==\n";
                        cout<<"=========================================================\n"<                        cout<<"---------------------------------------------------------"<                              cout<<"Harga Awal          = "<<"Rp. "<                              cout<<"Beli "<                              cout<<"Diskon 20%          = "<<"Rp. "<                              cout<<"Total Harga         = "<<"Rp. "<                        cout<<"---------------------------------------------------------"<            }
}

else if(pilih==3 )
{
    int harga=2500000;
   int xharga;
   xharga=harga*beli;
            if(xharga>=2000000 && xharga<=5500000)
   {
                int diskon,total;
                diskon=(xharga*0)/100;
                total=xharga-diskon;
                        cout<<"=======================================================\n";
                        cout<<"==   Barang Yang Anda pilih Adalah Kulkas Polytron   ==\n";
                        cout<<"=======================================================\n"<                        cout<<"-------------------------------------------------------"<        cout<<"Harga Awal          = "<<"Rp. "<         cout<<"Beli "<         cout<<"Diskon 0  %         = "<<"Rp. "<         cout<<"Total Harga         = "<<"Rp. "<                        cout<<"-------------------------------------------------------"<            }
  
   else if(xharga>=7000000 && xharga<=13000000)
   {
                int diskon,total;
                diskon=(xharga*10)/100;
                total=xharga-diskon;
                        cout<<"=======================================================\n";
                        cout<<"==   Barang Yang Anda pilih Adalah Kulkas Polytron   ==\n";
                        cout<<"=======================================================\n"<                        cout<<"-------------------------------------------------------"<        cout<<"Harga Awal          = "<<"Rp. "<         cout<<"Beli "<         cout<<"Diskon 10  %        = "<<"Rp. "<         cout<<"Total Harga         = "<<"Rp. "<                        cout<<"-------------------------------------------------------"<           }

     
   else if(xharga>=14500000 && xharga<=23000000)
   {
                int diskon,total;
                diskon=(xharga*15)/100;
                total=xharga-diskon;
                        cout<<"=======================================================\n";
                        cout<<"==   Barang Yang Anda pilih Adalah Kulkas Polytron   ==\n";
                        cout<<"=======================================================\n"<                        cout<<"-------------------------------------------------------"<        cout<<"Harga Awal          = "<<"Rp. "<         cout<<"Beli "<         cout<<"Diskon 15  %        = "<<"Rp. "<            cout<<"Total Harga         = "<<"Rp. "<                        cout<<"-------------------------------------------------------"<           }
   
   else if(xharga>24500000)
   {
                int diskon,total;
                diskon=(xharga*20)/100;
                total=xharga-diskon;
                        cout<<"=======================================================\n";
                        cout<<"==   Barang Yang Anda pilih Adalah Kulkas Polytron   ==\n";
                        cout<<"=======================================================\n"<                        cout<<"-------------------------------------------------------"<        cout<<"Harga Awal          = "<<"Rp. "<         cout<<"Beli "<         cout<<"Diskon 20%          = "<<"Rp. "<         cout<<"Total Harga         = "<<"Rp. "<                        cout<<"-------------------------------------------------------"<           }
}

else if(pilih==4 )
{
    int harga=2300000;
   int xharga;
   xharga=harga*beli;
            if(xharga>=2000000 && xharga<=5000000)
   {
                int diskon,total;
                diskon=(xharga*0)/100;
                total=xharga-diskon;
                        cout<<"========================================================\n";
                        cout<<"==  Barang Yang Anda pilih Adalah Mesin Cuci Samsung  ==\n";
                        cout<<"========================================================\n"<                        cout<<"--------------------------------------------------------"<                              cout<<"Harga Awal         = "<<"Rp. "<         cout<<"Beli "<        cout<<"Diskon 0%          = "<<"Rp. "<                              cout<<"Total Harga        = "<<"Rp. "<                        cout<<"--------------------------------------------------------"<            }

   else if(xharga>=6500000 && xharga<=12000000)
   {
                int diskon,total;
                diskon=(xharga*10)/100;
                total=xharga-diskon;
                        cout<<"=======================================================\n";
                        cout<<"==  Barang Yang Anda pilih Adalah Mesin Cuci Samsung ==\n";
                        cout<<"=======================================================\n"<                        cout<<"-------------------------------------------------------"<        cout<<"Harga Awal          = "<<"Rp. "<         cout<<"Beli "<         cout<<"Diskon 10  %        = "<<"Rp. "<         cout<<"Total Harga         = "<<"Rp. "<                        cout<<"-------------------------------------------------------"<           }

   else if(xharga>=13000000 && xharga<=21000000)
   {
                int diskon,total;
                diskon=(xharga*15)/100;
                total=xharga-diskon;
                        cout<<"=======================================================\n";
                        cout<<"==  Barang Yang Anda pilih Adalah Mesin Cuci Samsung ==\n";
                        cout<<"=======================================================\n"<                        cout<<"-------------------------------------------------------"<        cout<<"Harga Awal          = "<<"Rp. "<         cout<<"Beli "<         cout<<"Diskon 15  %        = "<<"Rp. "<         cout<<"Total Harga         = "<<"Rp. "<                        cout<<"-------------------------------------------------------"<           }
   
   else if(xharga>22500000)
   {
                int diskon,total;
                diskon=(xharga*20)/100;
                total=xharga-diskon;
                        cout<<"=======================================================\n";
                        cout<<"==  Barang Yang Anda pilih Adalah Mesin Cuci Samsung ==\n";
                        cout<<"=======================================================\n"<                        cout<<"-------------------------------------------------------"<                              cout<<"Harga Awal         = "<<"Rp. "<         cout<<"Beli "<         cout<<"Diskon 20     %    = "<<"Rp. "<                              cout<<"Total Harga        = "<<"Rp. "<                        cout<<"-------------------------------------------------------"<           }
}

else
{
cout<<"maaf pilihan yang anda masukkan tidak ada\n";
}
   balik:
    cout<<"ulangi lagi : [y/n] ? "  ;
    char m ;
    cin>>m;
        if (m == 'y' || m == 'Y'){
            goto awal ;
            }
        else if (m == 'n' || m == 'N')
            {
            cout<<"Terimakasih Telah Menggunakan Program Ini\n";
            goto akhir;
            }
        else
            {
            cout<<"Maaf Keyword Salah "<            goto balik;
            }

getch();
akhir:;
}
