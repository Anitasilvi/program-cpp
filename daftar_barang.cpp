#ifndef BARANG_H_INCLUDED
#define BARANG_H_INCLUDED



#endif // BARANG_H_INCLUDED

string cbarang(string barang[],int harga[]){
    cout << "---------------------------------------------------\n";
    cout << " kode\t\tbarang\t\t\tharga\n";
    cout << "---------------------------------------------------\n";
   for(int i=0;i<10;i++){
        cout << " " << i << "\t\t" << barang[i] << "\t\t" << harga[i] << endl;
   }
   cout << endl;
}
