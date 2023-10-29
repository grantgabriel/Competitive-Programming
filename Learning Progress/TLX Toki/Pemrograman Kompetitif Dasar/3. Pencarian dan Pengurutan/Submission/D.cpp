#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ull unsigned long long
int N, Q;  
vector<ull> bebeks;

int binarySearch(ull target) {
    int kiri = 0;
    int kanan = N - 1;
    int tengah = kiri + (kanan - kiri) / 2;

    while(kiri <= kanan) {
        tengah = kiri + (kanan - kiri) / 2;
        if(bebeks[tengah] <= target) {
            kiri = tengah + 1; 
        }

        else kanan = tengah - 1;
    }

    return kiri;
}

int main() {
    ull temp;
    
    cin >> N; int tc = N;
    while(tc--) {
        cin >> temp; 
        bebeks.push_back(temp);
    }

    cin >> Q;
    ull x, y;
    while(Q--) {
        cin >> x >> y;
        // cerr << binarySearch(y) << " " << binarySearch(x);
        cout << binarySearch(y) - binarySearch(x) << endl; 
    }
    
    return 0;
}