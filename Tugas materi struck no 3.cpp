#include <iostream>
#include <string>
#include <vector>

// Definisikan tipe data struct untuk penjualan barang
struct PenjualanBarang {
    std::string kode_brg;
    std::string nama_brg;
    int jumlah;
    int harga_satuan;
};

int main() {
    // Inisialisasi vector untuk menyimpan data penjualan
    std::vector<PenjualanBarang> data_penjualan;

    // Input data penjualan
    for (int i = 0; i < 20; i++) {
        PenjualanBarang penjualan;

        std::cout << "Masukkan kode barang: ";
        std::cin >> penjualan.kode_brg;

        std::cout << "Masukkan nama barang: ";
        std::cin >> penjualan.nama_brg;

        std::cout << "Masukkan jumlah barang: ";
        std::cin >> penjualan.jumlah;

        std::cout << "Masukkan harga satuan barang: ";
        std::cin >> penjualan.harga_satuan;

        // Menambahkan data penjualan ke vector
        data_penjualan.push_back(penjualan);
    }

    // Menghitung total harga penjualan dan keuntungan
    int total_harga = 0;
    int total_keuntungan = 0;

    for (const auto& penjualan : data_penjualan) {
        // Menghitung harga penjualan per item
        int harga_penjualan = penjualan.jumlah * penjualan.harga_satuan;

        // Menambahkan harga penjualan ke total_harga
        total_harga += harga_penjualan;

        // Menghitung keuntungan per item
        int keuntungan = harga_penjualan * 0.1;

        // Menambahkan keuntungan ke total_keuntungan
        total_keuntungan += keuntungan;
    }

    // Menampilkan total harga penjualan dan keuntungan
    std::cout << "Total harga penjualan: Rp. " << total_harga << std::endl;
    std::cout << "Keuntungan: Rp. " << total_keuntungan << std::endl;

    return 0;
}