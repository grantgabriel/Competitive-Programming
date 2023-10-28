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
    
    int N; cin >> N;
    vector<string> tamu(N), jawaban;

    for(auto &r : tamu) {
        cin >> r;
    }

    for(int i = 1; i <= 10; i++) {
        vector<string> temp;

        for(auto &x : tamu) {
            if(x.length() == i) {
                temp.push_back(x);
            }
        }

        sort(temp.begin(), temp.end());
        for(auto &x : temp) {
            jawaban.push_back(x);
        }
    }

    for(const auto& x : jawaban)
        cout << x << endl;

    return 0;
}