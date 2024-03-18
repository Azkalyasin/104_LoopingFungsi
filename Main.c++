#include <iostream>
using namespace std;

int main(){
    int t;

    for (t = 1; t <= 6; t++)
    {
        cout << t << " Azkal yasin" << endl;
    }

    string arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "masukkan nicknamae: ";
        cin >> arr[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << "nilaia array: " << arr[i] << endl;
    }
    
    return 0;
}