#include<iostream>
#include<fstream>
#include<vector>
#include<time.h>
#include<sstream>
#include<string>
using namespace std;

struct barang{
	int id;
	string nama;
	int harga;
	int jumlah;
};

barang* listbarang=new barang[3];

string currentDateTime(){
	string t;
	time_t now=time(0);
	struct tm tstruct;
	char buf[80];
	tstruct=*localtime(&now);
	strftime(buf, sizeof(buf),"%d-%m-%y:%x",&tstruct);
	return buf;
}

vector<string>explode(string const & s,char delim){
	vector<string>result;
	istringstream iss(s);
	for(string token; getline(iss, token, delim);){
		result.push_back(token);
	}
	return result;
}//vector<tipe_data>

void tampil(){
	ifstream tampil;
	string data;
	int i=0;
	tampil.open("barang.txt");
	while(getline(tampil, data)){
		listbarang[i].id=explode(data, ' ')[0];
		listbarang[i].nama=explode(data, ' ')[1];
		listbarang[i].harga=explode(data, ' ')[2];
		listbarang[i].jumlah=explode(data, ' ')[3];
	}
	tampil.close();
}

int main(){
	tampil();
}
	
