#include <cstring>
#include <climits>
#include <vector>
#include <iostream>
using namespace std;

#define ll long long
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)
vector<int> primeList;

// void sieveOfEratosthenes(ll N) { 
//     bool eleminated[N + 1]; ll j;

//     for(int i = 2; i < N; i++) {
//         if(!eleminated[i]) {
//             primeList.push_back(i);
//             j = i * i;
        
//             while(j <= N) {
//                 eleminated[j] = true;
//                 j += i;
//             }
//         }
//     }
// }

bool checkPrime(int x) {
    if(x <= 1) {
        return false;
    } else {
        int i = 2;
        while(i * i <= x) {
            if(x % i == 0) return false;
            i++;
        }

        return true;
    }
}

void isiPrimeList() {
    for(int i = 0; i < 1000000; i++) {
        if(checkPrime(i)) {
            primeList.push_back(i);
        }
    }
}

void run_cases() {
    ll N; cin >> N;
    cout << primeList[N - 1] << endl;
}

int main() {
    boost;
    isiPrimeList();

    ll T; cin >> T;

    while(T--) {
        run_cases();
    }

    return 0;
}