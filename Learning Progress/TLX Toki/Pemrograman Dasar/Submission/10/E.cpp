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

int A, B, K;

int Func(int x) {
    return abs((A * x) + B);
}

int main() {
    boost;
    
    int x;
    cin >> A >> B >> K >> x;
    
    for(int i = 1; i <= K; i++) {
        x = Func(x);
    }
    
    cout << x;

    return 0;
}