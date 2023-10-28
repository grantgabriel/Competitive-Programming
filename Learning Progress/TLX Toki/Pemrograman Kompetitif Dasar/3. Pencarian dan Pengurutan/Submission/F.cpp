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
vector<string> dataBebek;

void run_cases() {
    string temp; cin >> temp;
    dataBebek.push_back(temp);
    sort(dataBebek.begin(), dataBebek.end());

    int counter = 0;
    for(const auto &x : dataBebek) {
        if(x == temp) {
            cout << counter + 1 << endl;
        } else {
            counter++;
        }
    }
}

int main() {
    boost;
    
    int N; cin >> N;

    while(N--) {
        run_cases();
        cout << flush;
    }
    
    return 0;
}