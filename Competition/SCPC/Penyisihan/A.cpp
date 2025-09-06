#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
    ll N;
    cin >> N;

    // Membaca input A dan B
    vector<ll> A(N), B(N);
    for (ll i = 0; i < N; ++i) cin >> A[i];
    for (ll i = 0; i < N; ++i) cin >> B[i];

    // Membuat peta nilai-nilai di B ke daftar indeks mereka
    unordered_map<ll, vector<ll>> valueToIndices;
    for (ll i = 0; i < N; ++i) {
        valueToIndices[B[i]].push_back(i + 1);  // Simpan indeks dalam 1-based index
    }

    ull totalMaxLength = 0;

    // Loop untuk menghitung total panjang maksimum
    for (ll i = 0; i < N; ++i) {
        ll currentValue = A[i];  // Nilai saat ini di A
        if (valueToIndices.find(currentValue) != valueToIndices.end()) {
            // Temukan indeks yang menghasilkan jarak terbesar
            ll maxLen = 0;
            for (ll idx : valueToIndices[currentValue]) {
                maxLen = max(maxLen, abs(idx - (i + 1)));
            }
            totalMaxLength += maxLen;
        }
    }

    // Output total panjang maksimum
    cout << totalMaxLength << endl;

    return 0;
}
