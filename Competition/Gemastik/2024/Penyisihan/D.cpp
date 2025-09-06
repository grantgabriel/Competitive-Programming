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

ull tamb(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n - k) k = n - k;
    ull res = 1;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

ull cariDFS(ull N) {
    ull res = 0;
    int sisaS = 30;
    for (int i = 63; i >= 0; --i) {
        if (sisaS == 0) break;
        ull itung = tamb(i, sisaS);
        if (N > itung) {
            res |= (1ULL << i);
            N -= itung;
            sisaS--;
        }
    }
    return res;
}

int main() {
    boost;
    ull N;
    std::cin >> N;
    std::cout << cariDFS(N) << std::endl;
    return 0;
}