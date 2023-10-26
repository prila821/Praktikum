#include <iostream>

// Fungsi konversi meter ke centimeter
double meterToCentimeter(double meter) {
    return meter * 100;
}

// Fungsi konversi centimeter ke meter
double centimeterToMeter(double centimeter) {
    return centimeter / 100;
}

int main() {
    double panjangPita = 12; // Panjang pita dalam meter
    double panjangPitaCm = meterToCentimeter(panjangPita); // Konversi ke centimeter
    double panjangSatuIkatan = 45; // Panjang satu ikatan bunga rangkai dalam centimeter

    int jumlahIkatan = panjangPitaCm / panjangSatuIkatan; // Menghitung jumlah ikatan bunga rangkai
    double sisaPitaCm = panjangPitaCm - (jumlahIkatan * panjangSatuIkatan); // Menghitung panjang sisa pita yang belum dipakai

    std::cout << "Jumlah ikatan bunga rangkai yang dapat dibuat: " << jumlahIkatan << std::endl;
    std::cout << "Panjang sisa pita yang belum dipakai (cm): " << sisaPitaCm << std::endl;

    return 0;
}