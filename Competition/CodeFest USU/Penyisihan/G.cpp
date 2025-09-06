// Solved By       : Grant Gabriel Tambunan
// Connect With Me : https://www.linkedin.com/in/grantgabrieltambunan/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

#define rep(i, a, b) for (int i = a; i < b; ++i)
#define per(i, a, b) for (int i = a - 1; i >= b; --i)
#define trav(x, a) for (auto& x : a)
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()

const int INF = 1e9;
const ll LINF = 1e18;
const double EPS = 1e-9;
const ld LEPS = 1e-18;
const double PI = acos(-1);
const int N = 1e7 + 5;

int phi[N];
vi primes;
int n1, k1, n2, k2;

void sieve() {
    rep(i, 0, N) phi[i] = i;
    rep(i, 2, 3205) {
        if (phi[i] == i) {
            primes.pb(i);
            for (int j = i; j < N; j += i)
                phi[j] = phi[j] / i * (i - 1);
        }
    }
    rep(i, 3205, N) {
        if (phi[i] == i) {
            for (int j = i; j < N; j += i)
                phi[j] = phi[j] / i * (i - 1);
        }
    }
}

int factor_count(int& x, int p) {
    if (x == 0) return 65;
    int cnt = 0;
    while (x % p == 0) x /= p, ++cnt;
    return cnt;
}

pii get_factors(int x, int p) {
    if (x == 0) return mp(65, 0);
    int cnt = 0;
    while (x % p == 0) x /= p, ++cnt;
    return mp(cnt, x);
}

ll safe_pow(ll a, int b, int limit) {
    ll res = 1;
    while (b) {
        if (b & 1) res *= a;
        if (res > limit) return limit;
        b >>= 1;
        a *= a;
        if (b && a > limit) return limit;
    }
    return res;
}

ll mod_pow(ll a, int b, int mod) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % mod;
        b >>= 1;
        a = (a * a) % mod;
    }
    return res;
}

ll compute(int base, int exp) {
    int mod = mod_pow(base, exp, N);
    pii cnt = get_factors(n1, base);
    ll term = 1LL * k1 * safe_pow(n2, k2, exp);
    if (cnt.first * term >= exp) return 0LL;
    ll ans = (mod_pow(base, cnt.first * term, mod) * mod_pow(cnt.second, (k1 * mod_pow(n2, k2, phi[mod])) % phi[mod], mod)) % mod;
    return ans;
}

vi get_mods(vector<pii> fact) {
    vi res;
    trav(f, fact) res.pb(mod_pow(f.first, f.second, N));
    return res;
}

int ext_gcd(int a, int b, int& x, int& y) {
    if (!b) {
        x = 1, y = 0;
        return a;
    }
    int g = ext_gcd(b, a % b, y, x);
    y -= (a / b) * x;
    return g;
}

int crt(vi mods, vi rems) {
    int n = sz(mods), x, y;
    ll prod = 1;
    rep(i, 0, n) prod *= mods[i];
    ll res = 0;
    rep(i, 0, n) {
        ll p = prod / mods[i];
        ext_gcd(p, mods[i], x, y);
        ll tmp = ((rems[i] * p) % prod) * x % prod;
        res = (res + tmp) % prod;
    }
    return (res + prod) % prod;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    sieve();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n1 >> k1 >> n2 >> k2 >> n;
        vector<pii> factors;
        rep(i, 0, sz(primes)) {
            if (int cnt = factor_count(n, primes[i])) {
                factors.pb(mp(primes[i], cnt));
            }
        }
        if (n > 1) factors.pb(mp(n, 1));
        vi rems;
        rep(i, 0, sz(factors)) rems.pb(compute(factors[i].first, factors[i].second));
        cout << crt(get_mods(factors), rems) << '\n';
    }
    return 0;
}
