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

int reverse(int x) {
    int temp = x, ret = 0;

    while(temp > 0) {
        ret = (ret * 10) + (temp % 10);
        temp /= 10;
    }

    return ret;

}

int main() {
    boost;
    
    int a, b; cin >> a >> b;

    int c = reverse(a) + reverse(b);
    c = reverse(c);
    cout << c;
    
    return 0;
}