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

string ans = "";

string biner(int x) {
    if(x == 1) return "1";
    else if(x % 2 == 0) return biner(x/2) + "0";
    else return biner(x/2) + "1";
}

int main() {
    boost;
    
    int x; bool flag = true; cin >> x;
    ans = biner(x);

    cout << ans;
    
    return 0;
}