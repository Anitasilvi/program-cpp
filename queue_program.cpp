#include <cstdlib>
#include <iostream>
#include <stdio.h>
#define true 1
#define false 0
#define max 5

using namespace std;

struct queue
{
       char info[max];
       int awal,akhir;
};
struct queue antri;

void init(void)
{
 antri.awal=0;
 antri.akhir=0;
}


int full(void)
{
if (antri.akhir==max)
   return(true);
else
    return(false);
}
int empty(void)
{
if (antri.akhir==0)
   return(true);
else
    return(false);
}


void inQueue(char elemen)
{
if(empty()==true)
{
antri.awal=1;
antri.akhir=1;
antri.info[antri.awal]=elemen;
}
else
{
if(full()!=true)
{
antri.akhir++;
antri.info[antri.akhir]=elemen;
}
else
printf("QUEUE overflow");
}
}
char deQueue()
{
char isi;
int i;
if(empty()!=true)
{
isi=antri.info[antri.awal];
for(i=antri.awal;i<=antri.akhir;i++)
antri.info[i]=antri.info[i+1];
antri.akhir--;
return(isi);
}
else
printf("queue underflow.\n");
}

void baca()
{
int i;
if(antri.awal>0&& antri.akhir>0)
{
cout<<"isi antrian:"<<endl;
for (i=antri.awal;i<=antri.akhir;i++)
{
    cout<<antri.info[i];
    cout<<endl;
}
}
else
{
    cout<<"isi antrian Kosong"<<endl;
}
}

void clear()
{ antri.awal=0;
  antri.akhir=0;
}

main()

{   int pil;
    char elm;
    while(1){
    cout<<"Program QUEUE"<<endl;
    cout<<"1.INQUEUE"<<endl;
    cout<<"2.DENQUEUE"<<endl;
    cout<<"3.READ"<<endl;
    cout<<"4.CLEAR"<<endl;
    cout<<"5.EXIT"<<endl;
    cout<<"Input Pilihan =";cin>>pil;
    system("cls");
    if (pil == 1)
    {  cout<<"Input Antrian =";cin>>elm;
       inQueue(elm);}
    else if (pil == 2)
    {  deQueue();}
    else if (pil == 3)
    {baca();}
    else if (pil == 4)
    {clear();}
    else if (pil == 5)
    {   return EXIT_SUCCESS;}
    else
    {cout<<"Inputan ERROR"<<endl;}
    }
    system("pause");
 return 0;
}
