#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

unordered_map<long long, long long> memo;
long long P, Q;

long long solve(long long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (memo.count(n)) return memo[n];

    long long res = n;

    if (n % 2 == 0) {
        res = min(res, solve(n / 2) + P);
    } else {
        res = min(res, solve(n / 2) + P + 1);
    }

    if (n % 3 == 0) {
        res = min(res, solve(n / 3) + Q);
    } else if (n % 3 == 1) {
        res = min(res, solve((n - 1) / 3) + Q + 1);
    } else {
        res = min(res, solve((n - 2) / 3) + Q + 2);
    }

    memo[n] = res;
    return res;
}

int main() {
    int N;
    cin >> N >> P >> Q;

    for (int i = 0; i < N; ++i) {
        long long A;
        cin >> A;
        memo.clear();
        cout << solve(A) << endl;
    }

    return 0;
}
