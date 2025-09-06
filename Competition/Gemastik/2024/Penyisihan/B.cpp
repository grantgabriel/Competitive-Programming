// Solved By       : Grant Gabriel Tambunan
// Connect With Me : https://www.linkedin.com/in/grantgabrieltambunan/

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
#define all(a) a.begin(), a.end()
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    int N;
    ull L;
    cin >> N >> L;

    vector<ull> bagian = {L};
    
    for (int i = 0; i < N; ++i) {
        int B;
        cin >> B;
        --B;

        ull length = bagian[B];
        bagian[B] = length / 2;
        bagian.insert(bagian.begin() + B + 1, length / 2);
    }

    for (ull length : bagian) {
        cout << length << " ";
    }
    cout << endl;

    return 0;
}
