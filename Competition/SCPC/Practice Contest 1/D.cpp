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

int X, Y, N;
string S;

void solve() {
    cin >> X >> Y >> N;
    cin >> S;

    int lowX = 1, highX = X, lowY = 1, highY = Y;
    int curX = 1, curY = 1;

    for (int i = 0; i < N; ++i) {
        int midX = (lowX + highX) / 2;
        int midY = (lowY + highY) / 2;

        cout << "? " << midX << " " << midY << endl;
        cout << flush;

        int regional;
        char gerak;
        cin >> regional >> gerak;

        if (regional == 1) {
            highX = midX - 1;
            highY = midY - 1;
        } else if (regional == 2) {
            lowX = midX + 1;
            highY = midY - 1;
        } else if (regional == 3) {
            highX = midX - 1;
            lowY = midY + 1;
        } else if (regional == 4) {
            lowX = midX + 1;
            lowY = midY + 1;
        }

        if (gerak == 'U') curY++;
        else if (gerak == 'L') curX--;
        else if (gerak == 'D') curY--;
        else if (gerak == 'R') curX++;
        
        if (curX < 1) curX = 1;
        if (curX > X) curX = X;
        if (curY < 1) curY = 1;
        if (curY > Y) curY = Y;
    }

    cout << "! " << curX << " " << curY << endl;
    cout << flush;
}


int main() {
    boost;

    solve();

    return 0;
}
