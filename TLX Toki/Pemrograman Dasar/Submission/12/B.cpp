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
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int rekursiGanjilGenap(int x) {
    if(x == 1 or x == 0) {
        return 1;
    } else if(x % 2 == 0) {
        return x * rekursiGanjilGenap(x - 1) / 2;
    } else {
        return x * rekursiGanjilGenap(x - 1);
    }
}

int main() {
    boost;
    
    int n; cin >> n;
    cout << rekursiGanjilGenap(n);
    
    return 0;
}