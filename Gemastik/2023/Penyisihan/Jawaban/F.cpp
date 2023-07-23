#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

struct Province {
    string name;
    vector<int> prices;
    int closestPrice;
};

int hitungSubNum(const vector<int>& harga, int bitmask) {
    int jumlah = 0;
    for (int i = 0; i < harga.size(); ++i) {
        if (bitmask & (1 << i)) {
            jumlah += harga[i];
        }
    }
    return jumlah;
}

int main() {
    int P, N, K;
    cin >> P >> N >> K;

    vector<Province> prov(P);

    for (int i = 0; i < P; ++i) {
        cin.ignore();
        getline(cin, prov[i].name);
        prov[i].prices.resize(N);
        for (int j = 0; j < N; ++j) {
            cin >> prov[i].prices[j];
        }
    }

    int minDifference = INT_MAX;
    string chosenOneBujaz;

    for (int i = 0; i < P; ++i) {
        int maxSubset = (1 << N) - 1;
        for (int subset = 1; subset <= maxSubset; ++subset) {
            int subsetSum = hitungSubNum(prov[i].prices, subset);
            int difference = abs(subsetSum - K);

            if (difference < minDifference || (difference == minDifference && prov[i].name < chosenOneBujaz)) {
                minDifference = difference;
                chosenOneBujaz = prov[i].name;
                prov[i].closestPrice = subsetSum;
            }
        }
    }

    cout << chosenOneBujaz;

    return 0;
}
