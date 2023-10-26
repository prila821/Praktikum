#include <iostream>
using namespace std;

void star1(int tinggi) {
    for (int i = tinggi; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void star2(int tinggi) {
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void star3(int tinggi) {
    for (int i = tinggi; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int tinggi;

    cout << "Masukkan tinggi star: ";
    cin >> tinggi;

    cout << "Star 1:" << endl;
    star1(tinggi);

    cout << "Star 2:" << endl;
    star2(tinggi);

    cout << "Star 3:" << endl;
    star3(tinggi);

    return 0;
}