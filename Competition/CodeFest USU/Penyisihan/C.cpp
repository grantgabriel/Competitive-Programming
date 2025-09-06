#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1e9 + 7;
const int LYCHEE_MOD = 100003;
const int MAXN = 20005;
const int LOG = 20; // Because 2^20 > 10^6

vector<int> tree[MAXN];
int parent[MAXN][LOG]; // Binary lifting table
int depth[MAXN];
int lychee[MAXN];

void dfs(int u, int p) {
    parent[u][0] = p;
    for (int i = 1; i < LOG; ++i) {
        if (parent[u][i-1] != -1)
            parent[u][i] = parent[parent[u][i-1]][i-1];
        else
            parent[u][i] = -1;
    }
    for (int v : tree[u]) {
        if (v != p) {
            depth[v] = depth[u] + 1;
            dfs(v, u);
        }
    }
}

int getAncestor(int u, int k) {
    for (int i = 0; i < LOG; ++i) {
        if (k & (1 << i)) {
            u = parent[u][i];
            if (u == -1) break;
        }
    }
    return u;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, Q;
    int x, a, b;
    cin >> N >> Q >> x >> a >> b;

    // Read tree
    for (int i = 0; i < N-1; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    // Initialize lychee counts
    for (int i = 0; i < N; ++i) {
        lychee[i] = x % LYCHEE_MOD;
        x = (a * x + b) % MOD;
    }

    // Preprocessing depth and binary lifting
    memset(parent, -1, sizeof(parent));
    depth[0] = 0;
    dfs(0, -1);

    int ans = 0;
    for (int i = 0; i < Q; ++i) {
        int U = x % N;
        x = (a * x + b) % MOD;
        int I = x % (depth[U] + 1);
        x = (a * x + b) % MOD;
        int L = x % LYCHEE_MOD;
        x = (a * x + b) % MOD;

        int anc = getAncestor(U, I);
        ans = (ans + anc * lychee[anc]) % MOD;
        lychee[U] = (lychee[U] + L) % LYCHEE_MOD;
    }

    cout << ans << "\n";
    return 0;
}
