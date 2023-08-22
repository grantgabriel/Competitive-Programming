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

int A, B, x;
int recursiveFunc(int k) {
    if(k == 0) {
        return x;
    } else {
        return abs(A * recursiveFunc(k - 1) + B);
    }
}

int main() {
    boost;
    
    int K;
    cin >> A >> B >> K >> x;

    cout << recursiveFunc(K);

    
    return 0;
}