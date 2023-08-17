#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100; // Maksimal jumlah bilangan
    int numbers[maxSize];
    int num;
    int count = 0;

    while (cin >> numbers[count]) {
        ++count;
    }

    // Mencetak bilangan-bilangan dalam urutan terbalik
    for (int i = count - 1; i >= 0; i--) {
        cout << numbers[i] << endl;
    }

    return 0;
}
