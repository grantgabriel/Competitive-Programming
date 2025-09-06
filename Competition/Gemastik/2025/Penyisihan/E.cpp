#include <bits/stdc++.h>
using namespace std;

struct Kapal {
    long long c, L, S, U, R;
};

int main() {
    int N;
    long long P;
    cin >> N >> P;
    vector<Kapal> feri(N);

    for (int i = 0; i < N; i++) {
        cin >> feri[i].c >> feri[i].L >> feri[i].S >> feri[i].U >> feri[i].R;
    }

    auto cek = [&](long long T) -> bool {
        long long total = 0;
        for (auto &f : feri) {
            long long T1 = f.L + f.S + f.U;
            if (T < T1) continue;

            long long trip = 1;
            long long cycle = f.L + f.S + f.U + f.R;
            trip += (T - T1) / cycle;

            if (trip > (P + f.c - 1) / f.c) trip = (P + f.c - 1) / f.c;

            total += trip * f.c; // total mobil gak mesti sampai balek
            if (total >= P) return true;
        }
        return total >= P;
    };

    long long lo = 0, hi = 1;
    while (!cek(hi)) hi *= 2; 

    while (lo < hi) {
        long long mid = (lo + hi) / 2;
        if (cek(mid)) hi = mid;
        else lo = mid + 1;
    }

    cout << lo;
    return 0;
}