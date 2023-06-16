#include <iostream>

// Fungsi untuk menghitung faktorial dengan modulo
int factorial(int n) {
    const int MOD = 1000000007;
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = (result * i) % MOD;
    }
    return result;
}

int main() {
    int N, a, b, c, d;
    std::cin >> N >> a >> b >> c >> d;

    // Hitung jumlah kemungkinan urutan soal
    int total = factorial(a-1) * factorial(b-a-1) * factorial(c-b-1) * factorial(N-d);
    total %= 1000000007;

    std::cout << total << std::endl;

    return 0;
}
