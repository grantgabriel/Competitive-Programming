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
    
    string s, ans = ""; int k; cin >> s >> k;
    for(int i = 0; s[i]; i++) {
        if(s[i] + k > 122) {
            ans += (char)(s[i] + k - 122 + 96);
        } else ans += (char)(s[i] + k);
    }

    cout << ans;
    
    return 0;
}