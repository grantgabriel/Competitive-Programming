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

int N, M;
vector<vector<char>> grid;

bool aman(int r, int c, char ch) {
    if (c >= 2 && grid[r][c - 1] == ch && grid[r][c - 2] == ch)
        return false;
    if (c >= 1 && c + 1 < M && grid[r][c - 1] == ch && grid[r][c + 1] == ch)
        return false;
    if (c + 2 < M && grid[r][c + 1] == ch && grid[r][c + 2] == ch)
        return false;

    if (r >= 2 && grid[r - 1][c] == ch && grid[r - 2][c] == ch)
        return false;
    if (r >= 1 && r + 1 < N && grid[r - 1][c] == ch && grid[r + 1][c] == ch)
        return false;
    if (r + 2 < N && grid[r + 1][c] == ch && grid[r + 2][c] == ch)
        return false;

    if (r >= 2 && c >= 2 && grid[r - 1][c - 1] == ch && grid[r - 2][c - 2] == ch)
        return false;
    if (r >= 1 && c >= 1 && r + 1 < N && c + 1 < M && grid[r - 1][c - 1] == ch && grid[r + 1][c + 1] == ch)
        return false;
    if (r + 2 < N && c + 2 < M && grid[r + 1][c + 1] == ch && grid[r + 2][c + 2] == ch)
        return false;

    if (r >= 2 && c + 2 < M && grid[r - 1][c + 1] == ch && grid[r - 2][c + 2] == ch)
        return false;
    if (r >= 1 && c + 1 < M && r + 1 < N && c >= 1 && grid[r - 1][c + 1] == ch && grid[r + 1][c - 1] == ch)
        return false;
    if (r + 2 < N && c >= 2 && grid[r + 1][c - 1] == ch && grid[r + 2][c - 2] == ch)
        return false;

    return true;
}

int main() {
    boost;
  
    cin >> N >> M;
    grid = vector<vector<char>>(N, vector<char>(M, '.'));

    int mid_r = N / 2;
    int mid_c = M / 2;

    for (int i = 0; i < N * M; ++i) {
        char ch;
        cin >> ch;

        bool letak = false;

        for (int r = mid_r; r >= 0 && r < N && !letak; ++r) {
            for (int c = mid_c; c >= 0 && c < M && !letak; ++c) {
                if (grid[r][c] == '.' && aman(r, c, ch)) {
                    grid[r][c] = ch;
                    cout << (r + 1) << " " << (c + 1) << endl;
                    cout << flush;
                    letak = true;
                }
            }
            if (r == mid_r) r = N - mid_r;
        }
    }

    return 0;
}
