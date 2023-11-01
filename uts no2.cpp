#include <iostream>

int main() {
    // Menghitung total dana dalam Rupiah
    int usd_amount = 12000;
    int euro_amount = 20000;

    double usd_to_idr = 15.000;
    double euro_to_usd = 0.997;

    double total_idr = (usd_amount * usd_to_idr) + (euro_amount * euro_to_usd * usd_to_idr);

    // Menampilkan total dana dalam Rupiah
    std::cout << "Total dana Pak Anto dalam Rupiah: " << total_idr << " IDR" << std::endl;

    // Menghitung sisa dana setelah membeli mobil
    int mobil_price = 425.000000;
    double sisa_dana = total_idr - mobil_price;

    // Menampilkan sisa dana setelah membeli mobil
    std::cout << "Sisa dana Pak Anto setelah membeli mobil: " << sisa_dana << " IDR" << std::endl;

    return 0;
}