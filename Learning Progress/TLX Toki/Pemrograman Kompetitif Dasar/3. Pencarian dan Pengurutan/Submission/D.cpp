#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long int ull;
int N, Q;  
vector<ull> bebeks;
map<ull, int> countMap;

int binarySearch(ull target) {
    int max = 0;
    int kiri = 0;
    int kanan = N - 1;
    int tengah = kiri + (kanan - kiri) / 2;

    while(kiri <= kanan) {
        tengah = kiri + (kanan - kiri) / 2;
        if(bebeks[tengah] <= target) {kiri = tengah + 1; max = tengah;}
        else kanan = tengah - 1;
    }

    return max;
}

int main() {
    ull temp;
    
    cin >> N;
    while(N--) {
        cin >> temp; 
        bebeks.push_back(temp);
        countMap[temp]++;
    }

    cin >> Q;
    ull x, y;
    while(Q--) {
        cin >> x >> y;
        cout << binarySearch(y) - binarySearch(x) << endl; 
    }
    
    return 0;
}