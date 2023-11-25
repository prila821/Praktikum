#include <iostream>
#include <cmath>

// Definisikan tipe data struct untuk titik
struct Point {
    double x;
    double y;
};

// Fungsi untuk menghitung jarak antara dua titik
double hitung_jarak(Point titik1, Point titik2) {
    double jarak = sqrt(pow(titik2.x - titik1.x, 2) + pow(titik2.y - titik1.y, 2));
    return jarak;
}

int main() {
    // Membaca input dari pengguna untuk titik pertama
    Point titik_pertama;
    std::cout << "Masukkan nilai x untuk titik pertama: ";
    std::cin >> titik_pertama.x;
    std::cout << "Masukkan nilai y untuk titik pertama: ";
    std::cin >> titik_pertama.y;

    // Membaca input dari pengguna untuk titik kedua
    Point titik_kedua;
    std::cout << "Masukkan nilai x untuk titik kedua: ";
    std::cin >> titik_kedua.x;
    std::cout << "Masukkan nilai y untuk titik kedua: ";
    std::cin >> titik_kedua.y;

    // Menghitung jarak antara dua titik
    double jarak = hitung_jarak(titik_pertama, titik_kedua);

    // Menampilkan hasil
    std::cout << "Jarak antara titik pertama dan titik kedua adalah: " << jarak << std::endl;

    return 0;
}