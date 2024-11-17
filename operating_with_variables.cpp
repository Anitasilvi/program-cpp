// operating with variables
#include <iostream> //pada MinGW (linux) tanpa ekstensi .h
using namespace std; //hanya digunakan pada windows
// using namespace std; //hanya digunakan pada MinGW (Linux)
int main ()
{
// declaring variables:
int a, b;
int result;
// process:
a = 5;
b = 2;
a = a + 1;
result = a - b;
cout<< result; //membutuhkan conio.h jika di MinGW (linux)
cin.get();
return 0;
}

