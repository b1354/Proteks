#include<iostream>

using namespace std;

int main()
{
    int panjang_segitiga;
    cout << "masukan panjang segitiga: ";
    cin >> panjang_segitiga;
    
    for (int i=0; i < panjang_segitiga; i++) {
        for (int j=0; j <= i; j++) {
            cout << "0 ";
        }
        cout << endl;
    }
}
