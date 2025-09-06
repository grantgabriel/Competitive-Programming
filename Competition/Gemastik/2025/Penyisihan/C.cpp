#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, T;
    cin >> N >> T;

    string S;
    cin >> S;

    string grid(N, '.'); 

    for (int i = 0; i < N; i++) {
        long long pos;
        if (S[i] == 'L') {
            pos = (i + 1) - T; 
        } else { 
            pos = (i + 1) + T;
        }

        if (pos >= 1 && pos <= N) {
            grid[pos - 1] = 'X';
        }
    }

    cout << grid;
    return 0;
}