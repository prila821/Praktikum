#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int left, int right) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    int target = 12;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, target, 0, size - 1);

    if (result == -1) {
        cout << "Elemen tidak ditemukan" << endl;
    }
    else {
        cout << "Elemen ditemukan di indeks ke-" << result << endl;
    }

    return 0;
}