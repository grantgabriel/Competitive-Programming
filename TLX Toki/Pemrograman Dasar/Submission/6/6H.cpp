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
    
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        if(i % k == 0) cout << "* ";
        else cout << i << " ";
    }
    
    return 0;
}