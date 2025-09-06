// Solved By       : Grant Gabriel Tambunan
// Connect With Me : https://www.linkedin.com/in/grantgabrieltambunan/

#include <iostream>
#include <array>
#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <climits>
#include <string>
#include <functional>
#include <iomanip>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <stack>
#include <vector>
#include <set>
using namespace std;

#define ll long long
#define ull unsigned long long
#define all(a) a.begin(), a.end()
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    int N;
    cin >> N;
    
    vector<int> B(N);
    vector<int> J(N);
    
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    
    for (int i = 0; i < N; i++) {
        cin >> J[i];
    }
    
    vector<int> minBeli(N);
    vector<int> maxJual(N);
    
    minBeli[0] = B[0];
    for (int i = 1; i < N; i++) {
        minBeli[i] = min(minBeli[i-1], B[i]);
    }
    
    maxJual[N-1] = J[N-1];
    for (int i = N-2; i >= 0; i--) {
        maxJual[i] = max(maxJual[i+1], J[i]);
    }
    
    int maxprof = -1;
    for (int i = 1; i < N-1; i++) {
        if (maxJual[i+1] > minBeli[i-1]) {
            maxprof = max(maxprof, maxJual[i+1] - minBeli[i-1]);
        }
    }
    
    if (maxprof > 0)
        cout << maxprof << endl;
    else
        cout << "tidak mungkin" << endl;
    
    return 0;
}