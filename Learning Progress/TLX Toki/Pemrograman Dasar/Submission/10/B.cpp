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
using namespace std;

#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    boost;
    
    int n; cin >> n;
    int v1[n];
    int v2[n];

    for(auto &v : v1) {
        cin >> v;
    } 

    for(auto &v : v2) {
        cin >> v;
    } 

    int t; cin >> t;
    while(t--) {
        char p, q; int a, b; 
        cin >> p >> a >> q >> b;

        if(p == 'A' and q == 'B')
            swap(v1[a - 1], v2[b - 1]);
        else if(p == 'B' and q == 'A')
            swap(v2[a - 1], v1[b - 1]);
        else if(p == 'A' and q == 'A')
            swap(v1[a - 1], v1[b - 1]);
        else if(p == 'B' and q == 'B')
            swap(v2[a - 1], v2[b - 1]);
    }

    for(auto &v : v1) {
        cout << v << " ";
    }

    cout << endl;

    for(auto &v : v2) {
        cout << v << " ";
    }

    return 0;
}