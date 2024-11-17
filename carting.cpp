#ifndef CARTING_H_INCLUDED
#define CARTING_H_INCLUDED



#endif // CARTING_H_INCLUDED

int cart(){
    char lagi;
    char input;
    do{
        int N[100];
        int kode;
        cout << "masukkan kode barang : ";
        cin >> kode;
        cout << "nama barang \t: " << barang[kode] << endl;
        cout << "harga barang \t: " << harga[kode] << endl;
        jumlah=jumlah+harga[kode];
        cout << "total harga \t: " << jumlah << endl;
        cout << "belanja lagi?[y/n] ";
        cin >> lagi;
    }while(lagi=='Y' || lagi=='y');
    cout << "-------------------------------------------------------------\n";
    cout << "total harga yang harus anda bayar adalah : ";
    return jumlah;
}
