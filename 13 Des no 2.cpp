#include <iostream>
using namespace std;

int main() {
    double penggunaanPerHari = 1.75; // dalam kwh
    double tarifPerKwh = 1.4550;
    int jumlahHari = 30;

    double penggunaanPerBulan = penggunaanPerHari * jumlahHari;
    double biayaPembayaran = penggunaanPerBulan * tarifPerKwh;

    cout << "Biaya pembayaran listrik per bulan: Rp. " << biayaPembayaran << endl;

}