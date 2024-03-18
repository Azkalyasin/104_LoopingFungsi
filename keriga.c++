#include <iostream>
using namespace std;

int main(){
    int x;
    srand(time(0));


    do
    {
        cout << "perulangan denagan Do while" << endl;
        x = rand() % 10;
        cout << "Nilai X = " << x << endl;
    }while(x > 4);


    
    char p;
    do
    {
        string nama;

        cout << "Masukkan nama: ";
        cin >> nama;

        char p;
        cout << "Apakah anda ingin mengulangi (y/t)";
        cin >> p;

    } while (p == 'y'|| p == 'Y' );
    

    return 0;
}