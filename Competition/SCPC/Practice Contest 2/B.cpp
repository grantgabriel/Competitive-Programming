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
    boost;
    int N, M;
    cin >> N >> M;

    if (N < M || N > M * 5) {
        cout << "-1 -1" << endl;
    } else {
        int minFiveStars = max(0, N - 4 * M); 
        int maxFiveStars = N / 5;

        if (maxFiveStars > M) {
            maxFiveStars = M;
        }

        cout << minFiveStars << " " << maxFiveStars << endl;
    }

    return 0;

    return 0;
}
