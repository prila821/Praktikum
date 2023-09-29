#include <iostream>
using namespace std;

int main() {
    double operand1, operand2, hasil;
    char operasi;

    cout << "Masukkan operand 1: ";
    cin >> operand1;
    cout << "Masukkan operand 2: ";
    cin >> operand2;
    cout << "Masukkan operator (+,-,x,/) : ";
    cin >> operasi;
  if (operasi == '+') {
        hasil = operand1 + operand2;
    } else if (operasi == '-') {
        hasil = operand1 - operand2;
    } else if (operasi == 'x' || operasi == '*') {
        hasil = operand1 * operand2;
    } else if (operasi == '/') {
        hasil = operand1 / operand2;
    } else {
        cout << "Operator tidak valid!" << endl;
        return 0;
    }

    cout << "Operand 1 = " << operand1 << endl;
    cout << "Operand 2 = " << operand2 << endl;
    cout << "Operator = " << operasi << endl;
    cout << "Hasil = " << hasil << endl;

    return 0;
}