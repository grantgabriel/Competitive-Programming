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

void solve() {
    
}

void solve(int x) {
    for(int i = 2; i < sqrt(x); i++) {
        int temp = 0;
        bool flag = false;
        while(x % i == 0) {
            temp++;
            x /= i;
            flag = true;
        }

        if(flag) {
            cout << i;
            
            if(temp > 1) {
                cout << '^' << temp;
            }

            if(x > 1) {
                cout << " x ";
            }
        }
    }

    if(x > 1) {
        cout << x;
    }
    
}

int main() {
    boost;
    
    int n; cin >> n;
    solve(n);
    
    return 0;
}