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
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N), B(N);

    for (ll i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (ll i = 0; i < N; ++i) {
        cin >> B[i];
    }

    ll base_value = 0;
    vector<pair<ll, ll>> events;

    for (int i = 0; i < N; ++i) {
        ll mod_val = A[i] % M;
        base_value += (ll)mod_val * B[i];

        ll increment = B[i] * M;
        events.push_back({mod_val, increment});
    }

    sort(events.begin(), events.end());

    ll max_f = base_value;
    ll current_f = base_value;

    for (int i = 0; i < N; ++i) {
        current_f += events[i].second;
        if (current_f > max_f) {
            max_f = current_f;
        }
    }

    cout << max_f << endl;

    return 0;
}
