#include <iostream>
#include <array>
#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
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
#include <climits>
using namespace std;

#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int Func(int Xj, int Xi, int Yj, int Yi, int D) {
    return (int)pow(abs(Xj - Xi), D) + (int)pow(abs(Yj - Yi), D);
}

int main() {
    boost;
    
    int N, D, maxT = INT_MIN, minT = INT_MAX; cin >> N >> D;
    
    vector<pair<int, int>> v;
    for(int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        v.emplace_back(a, b);
    }

    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            maxT = max(maxT, Func(v[j].first, v[i].first, v[j].second, v[i].second, D));
            minT = min(minT, Func(v[j].first, v[i].first, v[j].second, v[i].second, D));
        }
    }

    cout << minT << " " << maxT;
    
    return 0;
}