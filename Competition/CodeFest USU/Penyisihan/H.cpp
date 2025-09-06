#include <bits/stdc++.h>
using namespace std;

#define N 10000010
const int mod = 1007;

int f[N], pw[20], res, l[20], r[20], n, q, m;

inline void add(int &a, int b) {
    a += b;
    if (a >= mod) a -= mod;
}

vector<int> adj[20], al[20], ar[20];

short dp[8][N];

void build() {
    for (int i = 0; i < pw[n - m]; i++) dp[n - m][i] = f[i];
    for (int i = n - m - 1; i >= 0; i--) {
        for (int j = pw[n - m] - 1; j >= 0; j--) {
            int d = (j / pw[i]) % 10;
            dp[i][j] = dp[i + 1][j];
            if (d < 9) {
                dp[i][j] += dp[i][j + pw[i]];
                if (dp[i][j] >= mod) dp[i][j] -= mod;
            }
        }
    }
}

int main() {
    scanf("%d%d", &n, &q);

    pw[0] = 1;
    for (int i = 1; i < 9; i++) pw[i] = pw[i - 1] * 10;

    m = n / 2;
    int u, v;
    while (q--) {
        scanf("%d%d", &u, &v);
        adj[u].push_back(v);
        if (u < m && v < m) al[u].push_back(v);
        else if (u >= m && v >= m) ar[u - m].push_back(v - m);
    }

    for (int i = 0; i < pw[n - m]; i++) {
        int x = i, ok = 1;
        for (int j = 0; j < n - m; j++) r[j] = x % 10, x /= 10;
        for (int j = 0; j < n - m && ok; j++) {
            for (auto y : ar[j]) {
                if (r[y] < r[j]) {
                    ok = 0;
                    break;
                }
            }
        }
        f[i] = ok;
    }

    build();

    for (int i = 0; i < pw[m]; i++) {
        int x = i, ok = 1;
        for (int j = 0; j < m; j++) l[j] = x % 10, x /= 10;
        for (int j = 0; j < m && ok; j++) {
            for (auto y : al[j]) {
                if (l[y] < l[j]) {
                    ok = 0;
                    break;
                }
            }
        }
        if (ok) {
            int mask = 0;
            fill(r, r + (n - m), 0);
            for (int j = 0; j < m; j++) {
                for (auto y : adj[j]) {
                    if (y < m) continue;
                    r[y - m] = max(r[y - m], l[j]);
                }
            }
            for (int j = 0; j < n - m; j++) mask += pw[j] * r[j];
            add(res, dp[0][mask]);
        }
    }

    printf("%d\n", res);
}
