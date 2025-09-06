#include <bits/stdc++.h>
using namespace std;

struct Point {
    int r, c;
    Point(int r, int c) : r(r), c(c) {}
    bool operator<(const Point &p) const {
        return c < p.c;
    }
};

int N, M;
vector<Point> p;

int readInt() {
    int x;
    cin >> x;
    return x;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    N = readInt();
    M = readInt();
    p.reserve(M);

    for (int i = 0; i < M; i++) {
        int r = readInt();
        int c = readInt();
        p.emplace_back(r, c);
    }

    sort(p.begin(), p.end());

    long long ans = 0, prev = 0, hei = 0;

    for (int i = 0; i < M; i++) {
        if (p[i].c != prev) {
            long long dist = p[i].c - prev;
            long long side = min(hei, dist);
            ans += (side) * (side + 1) / 2 + max(0LL, (hei - side) * side);
            hei = max(hei - side, (long long)(N - p[i].r + 1));
            prev = p[i].c;
        } else {
            hei = max(hei, (long long)(N - p[i].r + 1));
        }
    }

    long long dist = N + 1 - prev;
    long long side = min(hei, dist);
    ans += (side) * (side + 1) / 2 + max(0LL, (hei - side) * side);

    cout << ans << '\n';

    return 0;
}
