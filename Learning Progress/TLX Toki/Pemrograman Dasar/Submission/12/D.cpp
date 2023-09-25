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

// string palindrome(string s, int a, int b) {
//     if(s == '') {
//         return "YA";
//     } else if(s)
// }

bool palindrom(string s) {
    int len = s.length();
    if(len < 2) {
        return true;
    } else if(s[0] == s[len - 1]) {
        s.erase(len - 1, 1);
        s.erase(0, 1);
        return palindrom(s);
    } else {
        return false;
    }

}

int main() {
    boost;
    
    string s; cin >> s;
    if(palindrom(s)) {
        cout << "YA";
    } else {
        cout << "BUKAN";
    }

    // cout << palindrome(s, 0, s.length() - 1);
    
    return 0;
}