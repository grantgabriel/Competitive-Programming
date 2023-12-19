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
            // cout << "Maksimum " << i << " : " << maksimum << endl;
            array[i] += maksimum;
            // cout << "Array i setelah dijumlah dengan maksimum i " << array[i] << endl;
        }

        jumlah = max(array[i], jumlah);
        // cout << "Jumlah : " << jumlah << "\n" << endl;
    }

    cout << jumlah;

    return 0;
}

// 10 2
// -1 2 5 7 -1 2 3 -2 4 8