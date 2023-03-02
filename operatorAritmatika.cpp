#include <iostream>
using namespace std;

int main() {
    float angka1, angka2, hasil;
    char opr;

    // Memasukan bilangan pertama
    cout << "Masukan bilangan pertama: ";
    cin >> angka1;
    
    // Memasukan bilangan kedua
    cout << "Masukan bilangan kedua: ";
    cin >> angka2;

    // Memasukan operator
    cout << "Masukan operator (+, -, *, /): ";
    cin >> opr;

    if (opr == '+') {
        hasil = angka1 + angka2;
    }
    else if (opr == '-') {
        hasil = angka1 - angka2;
    }
    else if (opr == '*') {
        hasil = angka1 * angka2;
    }
    else if (opr == '/') {
        hasil = angka1/ angka2;
    }
    else {
        cout << "operator tidak diketahui" << endl;
        return 0;
    }

    cout << "Hasil: " << hasil << endl;
    return 0;
}
