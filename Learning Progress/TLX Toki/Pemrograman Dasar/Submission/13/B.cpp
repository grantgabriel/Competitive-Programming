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

void draw(int n) {
    if(n > 0) {
        draw(n - 1);
        for(int i = 1; i <= n; i++) {
            cout << "*";
        } cout << endl;
        draw(n - 1);
    }
}

int main() {
    boost;
    
    int n; cin >> n;

    draw(n);
    
    return 0;
}