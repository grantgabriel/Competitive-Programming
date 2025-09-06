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

    int N;
    cin >> N;
    vector<int> jump(N);
    
    for (int i = 0; i < N; i++) {
        cin >> jump[i];
    }
    
    sort(jump.begin(), jump.end());

    int gdif = 0;
    for (int i = 1; i < N; i++) {
        gdif = max(gdif, abs(jump[i] - jump[i - 1]));
    }
    
    int adif = max(jump[N-1] - jump[0], jump[N-2] - jump[0]);
    for (int i = 1; i < N; i++) {
        adif = max(adif, abs(jump[i] - jump[i - 1]));
    }
    
    cout << gdif << endl;
    cout << adif << endl;
}