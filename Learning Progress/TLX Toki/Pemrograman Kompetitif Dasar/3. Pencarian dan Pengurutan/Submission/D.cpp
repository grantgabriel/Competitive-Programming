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
    int kiri = 0;
    int kanan = N - 1;
    int tengah = kiri + (kanan - kiri) / 2;

    while(kanan >= kiri) {
        tengah = kiri + (kanan - kiri) / 2;

        if(bebeks[tengah] = target) return tengah;
        else if(target > bebeks[tengah]) kiri = tengah + 1;
        else kanan = tengah - 1;
    }

    return kiri;
}

// int hitung(ull x, ull y) {
//     int counter = 0;
//     for(auto &pair : countMap) {
//         if(pair.first <= x) continue;

//         if(pair.first > x and pair.first <= y) 
//             counter += pair.second;

//         if(pair.first > y)
//             break;
//     }

//     return counter;
// }

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