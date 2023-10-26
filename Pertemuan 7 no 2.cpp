#include <iostream>
using namespace std;

int hitungNilaiMatematika(int a, int b, int c) {
    int hasil = 6 * (a * 1 * 1 + b * 1 + c);
    return hasil;
}

int main() {
    int a, b, c;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Masukkan nilai c: ";
    cin >> c;

    int hasil = hitungNilaiMatematika(a, b, c);
    cout << "Hasil perhitungan: " << hasil << endl;

    return 0;
}