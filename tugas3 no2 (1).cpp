#include <iostream>
using namespace std;

int main() {
    int bilangan1, bilangan2, bilangan3;

    cout << "Masukkan tiga bilangan: ";
    cin >> bilangan1 >> bilangan2 >> bilangan3;

    int bilanganMaksimal = bilangan1;

    if (bilangan2 > bilanganMaksimal) {
        bilanganMaksimal = bilangan2;
    }

    if (bilangan3 > bilanganMaksimal) {
        bilanganMaksimal = bilangan3;
    }
    cout << "Bilangan paling maksimal: " << bilanganMaksimal << endl;

    return 0;
}