#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
    boost;
    
    int maxN = INT_MAX, minN = INT_MIN, n;
    cin >> n;

    while(n--) {
        int temp; cin >> temp;
        maxN = max(maxN, temp); minN = min(minN, temp);
    }

    cout << maxN << " " << minN;

    return 0;
}