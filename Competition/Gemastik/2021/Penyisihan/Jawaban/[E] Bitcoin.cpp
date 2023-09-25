#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, untung = 0, tahan;
    bool beli = false;
    cin >> N;

    int prediksi[N];
    for(int i = 0; i < N; i++) { 
        cin >> prediksi[i];
    }

    for(int i = 0; i < N - 1; i++) {
        if(prediksi[i] > prediksi[i + 1] && prediksi[i + 1] < prediksi[i + 2] && beli == false) {
            tahan = prediksi[i + 1];
            beli =  true;
        } else if(prediksi[i] < prediksi[i + 1] && prediksi[i + 1] > prediksi[i + 2] && beli == true) {
            untung += prediksi[i + 1] - tahan;
            beli = false;
        }
    }

    cout << untung;

    return 0;
}
