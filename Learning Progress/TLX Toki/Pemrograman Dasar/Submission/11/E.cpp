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

int main() {
    boost;
    
    string s, ans = "";
    cin >> s;
    for(int i = 0; s[i]; i++) {
        if(islower(s[i])) {
            ans += (char)(s[i] - 32);
        } else {
            ans += (char)(s[i] + 32);
        }
    }

    cout << ans;
    
    return 0;
}