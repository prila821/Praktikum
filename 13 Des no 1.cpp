#include <iostream>
using namespace std;

int main() {
    int X, Y, temp;

    cout << "Masukkan bilangan X: ";
    cin >> X;

    cout << "Masukkan bilangan Y: ";
    cin >> Y;

    temp = X;
    X = Y;
    Y = temp;

    cout << "Setelah ditukar, nilai X: " << X << ", nilai Y: " << Y << endl;

}