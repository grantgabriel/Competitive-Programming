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
#define ull unsigned long long int
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

bool isEven(ull x) {
    if(x % 2 == 0) {
        return true;
    }

    return false;
}

void run_cases() {
    ull R, C, A, B; cin >> R >> C >> A >> B;
    
    bool alice_wins = false;

    if(R == C) {
        alice_wins = false;
    } else if(R > C) {
        alice_wins = true;
    } else if(R < C) {
        alice_wins = false;
    }

    cout << ((alice_wins) ? "YES" : "NO");
}

int main() {
    boost;
    
    unsigned long long int N; cin >> N; unsigned long long int i = 1;
    while(N--) {
		cout << "Case #" << i << ": "; 
        run_cases(); i++; 
		cout << endl;
    }
    
    return 0;
}