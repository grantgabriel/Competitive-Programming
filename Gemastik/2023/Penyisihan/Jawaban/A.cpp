#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> volumes(N);
    int totalVolume = 0;

    for (int i = 0; i < N; i++) {
        cin >> volumes[i];
        totalVolume += volumes[i];
    }

    int rataanVolume = totalVolume / N;

    bool volumeSama = true;
    for (int i = 0; i < N; i++) {
        if (volumes[i] != rataanVolume) {
            volumeSama = false;
            break;
        }
    }

    if (volumeSama) {
        cout << "SESUAI";
    } else {
        bool mungkin = false;
        int tuangDari, tuangKe, banyakTuang;

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int diff = volumes[i] - volumes[j];
                if (abs(diff) % 2 == 0) {
                    int ganteng = abs(diff) / 2;
                    int newVolumeI = volumes[i] - ganteng;
                    int newVolumeJ = volumes[j] + ganteng;

                    bool nyata = true;
                    for (int k = 0; k < N; k++) {
                        if (k == i || k == j)
                            continue;
                        if (volumes[k] != rataanVolume && (volumes[k] != newVolumeI && volumes[k] != newVolumeJ)) {
                            nyata = false;
                            break;
                        }
                    }

                    if (nyata) {
                        mungkin = true;
                        tuangDari = i + 1;
                        tuangKe = j + 1;
                        banyakTuang = ganteng;
                        break;
                    }
                }
            }
            if (mungkin)
                break;
        }

        if (mungkin) {
            cout << abs(banyakTuang) << " " << tuangDari << " " << tuangKe;
        } else {
            cout << "TIDAK SESUAI";
        }
    }

    return 0;
}
