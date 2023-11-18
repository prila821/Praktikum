#include <iostream>
using namespace std;

int sentinelLinearSearch(int arr[], int n, int key) {
    int lastElement = arr[n - 1]; // Simpan elemen terakhir array
    arr[n - 1] = key; // Ganti elemen terakhir dengan kunci pencarian

    int i = 0;
    while (arr[i] != key) {
        i++;
    }

    arr[n - 1] = lastElement; // Kembalikan elemen terakhir ke posisi semula

    if (i < n - 1 || arr[n - 1] == key) {
        return i; // Kunci pencarian ditemukan
    } else {
        return -1; // Kunci pencarian tidak ditemukan
    }
}

int main() {
    int arr[] = {5, 2, 8, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    int result = sentinelLinearSearch(arr, n, key);

    if (result == -1) {
        cout << "Kunci pencarian tidak ditemukan" << endl;
    } else {
        cout << "Kunci pencarian ditemukan pada indeks " << result << endl;
    }

    return 0;
}