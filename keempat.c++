#include <iostream>
using namespace std;

int nTelor, nMie, nAir, jumlah;
int hTelor = 2000, hMie = 2800, hAir = 3000;
string nama;  

void input(){
    cout << "Masukkan Nama: ";
    cin >> nama;

    cout << "Masukkan jumlah telor: ";
    cin >> nTelor;

    cout << "Masukkan jumlah mie: ";
    cin >> nMie;

    cout << "Masukkan jumlah air mineral: ";
    cin >> nAir;
}

int hitungharga(){
    return (nTelor * hTelor) + (nMie * hMie) + (nAir + hAir);
}

void dispaly(){
    cout << "Nama: " << nama << endl;
    cout << "jumlah telur: " << nTelor << endl;
    cout << "Jumlah mie: " << nMie << endl;
    cout << "jumlah air: " << nAir << endl;
    cout << "Total harga Rp: " << hitungharga();
}

int main(){
    
    char p;
    do
    {
     char p;
     cout << "Apakah anda ingin mengulangi (y/t)";
     cin >> p;

    } while (p == 'y'|| p == 'Y' );
   
    input();
    dispaly();

    return 0;
}