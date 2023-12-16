#include <iostream>
using namespace std;

int main() {
    string nama_barang[3] = {"Lampu", "pintu", "Lilin"};
    int harga_per_item[3] = {5000, 60000, 2000};
    int jumlah_terjual[3];
    int total_per_item[3];

    // Input jumlah penjualan barang
    cout << "Jumlah terjual Lampu: ";
    cin >> jumlah_terjual[0];
    cout << "Jumlah terjual Pintu: ";
    cin >> jumlah_terjual[1];
    cout << "Jumlah terjual Lilin: ";
    cin >> jumlah_terjual[2];

    // Hitung total penjualan harian
    for (int i = 0; i < 3; i++) {
        total_per_item[i] = harga_per_item[i] * jumlah_terjual[i];
    }
    int total_penjualan_harian = 0;
    for (int i = 0; i < 3; i++) {
        total_penjualan_harian += total_per_item[i];
    }
    cout << "Total Penjualan Hari Ini: Rp " << total_penjualan_harian << endl;

    // Item paling banyak terjual
    int max_terjual = 0;
    int index_terlaris = 0;
    for (int i = 0; i < 3; i++) {
        if (jumlah_terjual[i] > max_terjual) {
            max_terjual = jumlah_terjual[i];
            index_terlaris = i;
        }
    }
    cout << "Item yang paling banyak terjual adalah " << nama_barang[index_terlaris] << " (" << max_terjual << " unit)" << endl;

    // Tabel Penjualan
    cout << "\nTabel Penjualan:" << endl;
    cout << "| Nama Barang | Harga per Item | Jumlah Terjual | Total per Item |" << endl;
    cout << "|-------------|-----------------|-----------------|-----------------|" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "| " << nama_barang[i] << " | " << harga_per_item[i] << " | " << jumlah_terjual[i] << " | " << total_per_item[i] << " |" << endl;
    }

}