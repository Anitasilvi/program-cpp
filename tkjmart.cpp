#include <iostream>

#include <string.h>

#include <iomanip>



using namespace std;



struct DataBarang

{

    char* kodeBrg[10]={"001","002","003"};          // array untuk menyimpan kode barang

    char* namaBrg[10]={"Sabun", "Kecap", "Susu"};   // array utk menyimpan nama barang

    int harga[10]={5000,10000,5000};                // array untuk menyimpan harga barang

    int diskon[10]={0,10,20};                       // array untuk menyimpan diskon

    int belanja[10], qty[10];                       // array utuk menginput jumlah belanja dan kuantitas 1-10

    int n, x;

    int hargaTotal=0, hargaBayar=0;

};

DataBarang X[3];





int main()

{



    cout << "=======================================\n";

    cout << "SELAMAT DATANG DI TKJMART!\n";

    cout << "=======================================\n";

    ("pause");

    ("cls");

    cout << "Masukkan Jumlah Barang Yang Dibeli: ";  // menentukan looping kasir menginput barang

    cin  >> X[3].n;

    ("cls");



    // looping untuk memasukkan data barang

    for (int a=0; a<X[3].n; a++)

    {

        int input_kode_barang, i;

        cout << "Masukkan data barang ke-"<<a+1<<": \n\n";

        cout << "Kode barang: ";

        cin  >> i;

        input_kode_barang = i;

        i--;

        if (input_kode_barang == 1) {  // seleksi kondisi dari kode barang untuk menampilkan data barang dari array

            X[i].x=0;

            cout<<"Nama Barang  : " << X[i].namaBrg[i] <<'\n';

            cout<<"Harga Satuan : " << X[i].harga[i]   <<'\n';

            cout<<"Diskon       : " << X[i].diskon[i]  <<"\n";

        }



        else if (input_kode_barang == 2){

            X[i].x = 1;

            cout<<"Nama Barang  : " << X[i].namaBrg[i] <<'\n';

            cout<<"Harga Satuan : " << X[i].harga[i]   <<'\n';

            cout<<"Diskon       : " << X[i].diskon[i]  <<"\n";

        }

        else if (input_kode_barang == 3) {

            X[i].x=2;

            cout<<"Nama Barang  : " << X[i].namaBrg[i] <<'\n';

            cout<<"Harga Satuan : " << X[i].harga[i]   <<'\n';

            cout<<"Diskon       : " << X[i].diskon[i]  <<"\n";

        }

        else

        {

            cout<<"Data tidak tersedia di database\n";

            system("pause");

            return 0;

        }

        cout << "Quantity     : ";

        cin  >> X[i].qty[i];  // input quantity barang

        if (X[i].diskon[i]==0){

            X[i].hargaBayar = (X[i].qty[i]*X[i].harga[i]);  // menentukan harga barang jika tidak ada diskon

        }

        else{

            X[i].hargaBayar=X[i].qty[i]*(X[i].harga[i]-(X[i].harga[i]*X[i].diskon[i]/100));  // menentukan harga barang jika dengan diskon

        }



        X[i].hargaTotal=X[i].hargaTotal+X[i].hargaBayar;  // menentukan total harga yang harus dibayar

        cout<<"Harga Bayar: "<<X[i].hargaBayar;

        cout<<"\n\nTOTAL HARGA: "<<X[i].hargaTotal<<"\n\n";

        X[i].belanja[i]=X[i].x;

    }



    ("pause");

    ("cls");



    // menampilkan data barang yang dibeli



    cout<<"DAFTAR BELANJA ANDA:\n";

    cout<<"==================================================================== ==========\n";

    cout<<"No"<<setw(13)<<"Kode Barang"<<setw(17)<<"Nama Barang"<<setw(10)<<"Qty"<<setw(10)<<"Harga"<<setw(13)<<"Diskon(%)"<<setw(15 )<<"Harga Bayar\n";

    cout<<"==================================================================== ==========\n";

    for (int i=0; i<X[i].n; i++)

    {

        X[i].x=X[i].belanja[i];

        cout<<setiosflags(ios::left)<<setw(8)<<i+1<<setiosflags(ios::left)<<setw(10 )<<X[i].kodeBrg[i]<<setiosflags(ios::left)<<setw(22)<<X[i].namaBrg[i]<<setiosflags(ios::left)<<setw(8)<<X[i].qty[i]<<setiosflags(ios::left)<<

        setw(10)<<X[i].harga[i]<<setiosflags(ios::left)<<setw(10)<<X[i].diskon[i]<<setiosflags(ios::left)<<setw(8)<<X[i].qty[i]*(X[i].harga[i]-(X[i].harga[i]*X[i].diskon[i]/100))

        <<'\n';

    }

    cout<<"------------------------------------------------------------------------------\n";

    cout<<setiosflags(ios::left)<<setw(68)<<"Total belanja: "<<X[3].hargaTotal<<"\n\n";

    cout<<"------------------------------------------------------------------------------\n";



    ("pause");

    ("cls");

    cout<<"Terimakasih telah berbelanja di TKJMART ^.^\n\n";

    system("pause");



    return 0;

}
