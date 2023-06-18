#include <iostream>
#include <math.h>
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    boost;

    int N, M, maksimum = 0, jumlah = 0;
    cin >> N >> M;

    int array[N];   
    for(int i = 0; i < N; i++)
        cin >> array[i];

    for(int i = 0; i < N; i++) {
        if(i >= M) {
            maksimum = max(maksimum, array[i - M]);
            array[i] += maksimum;
        }

        jumlah = max(array[i], jumlah);
    }

    cout << jumlah;

    return 0;
}

/*
5 4 
2 7 -5 1 4

Iterasi pertama : i = 0
i >= M // Salah
jumlah = 2; // 2 banding 0

Iterasi kedua : i = 1
i >= M // Salah
jumlah = 7; // 7 banding 2

Iterasi ketiga : i = 2
i >= M // Salah 
jumlah = 7; // 7 banding -5

Iterasi keempat : i = 3
i >= M // Salah
jumlah = 7; // 7 banding -1

Iterasi kelima : i = 4
i >= M // Benar
maksimum = 11




*/