// General solution : Soal dajjal.

#include <iostream>
#include <map>
#include <algorithm>
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    boost;
    int N; cin >> N;
    int angka[N], arr, perubahan = 0;
    map<int, int> angkaMunc;

    for(int i = 0; i < N; i++) cin >> angka[i]; 

    for(int i = 0; i < N; i++) angkaMunc[angka[i]]++;

    int element[angkaMunc.size()], jumlah[angkaMunc.size()], pivot = 0;

    for(const auto& pair : angkaMunc) {
        element[pivot] = pair.first;
        jumlah[pivot] = pair.second;
        pivot++;
    }

    sort(jumlah, jumlah + angkaMunc.size());

    for(int i = 0; i < jumlah[0]; i++) cout << "0 ";


    if(N % 2 == 0) {
        for(int i = 0; i < N - jumlah[0] - (N / 2); i++) {
            arr = N / (N - jumlah[0] - (N / 2) + i);
            for(int j = 0; j < jumlah.size() - arr; j++) {
                perubahan += jumlah[j];
            }
            cout << perubahan << " ";
        }

        for(int i = 0; i < (N / 2); i++)
            cout << N - jumlah[angkaMunc.size() - 1] << " ";
    } else {
        for(int i = 0; i < N - jumlah[0] - ((N + 1) / 2); i++) {

        }
        
        for(int i = 0; i < (N + 1) / 2; i++)
            cout << N - jumlah[angkaMunc.size() - 1] << " ";
    }

    return 0;
}

// 8 / 4 == 2
// 1 1 1 3 3 4 4 4
// 3
// 2 
// 3
// 0 0 .... 5 5 5 5 

// 3 3 3 2 1