#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int size) {
    int kiri = 0;
    int kanan = size - 1;
    int tengah = kiri + (kanan - kiri) / 2;

    while(kanan >= kiri) {
        tengah = kiri + (kanan - kiri) / 2;

        if(arr[tengah] == target) {
            return tengah;
        } else if(target > arr[tengah]) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }

    return -1;
}


int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int hasil = binarySearch(arr, 7, size);

    cout << hasil << endl;

    return 0;
}