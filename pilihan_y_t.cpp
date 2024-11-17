#include<stdio.h>
using namespace std;
main()
{
	char pilihan;
	int sudah_benar = 0;
	printf("Pilihlah Y atau T\n");
	
	while(!sudah_benar)
	{
		pilihan = getchar();
		sudah_benar = (pilihan == 'Y') || (pilihan == 'y') || 
		(pilihan == 'T') || (pilihan == 't');
	}
	
	switch(pilihan)
	{
		case'Y':
		case 'y':
			puts("\npilihan anda adalah Y");
			break;
			
		case 'T':
		case 't':
			puts("\npilihan anda adalah T");
	}
}
