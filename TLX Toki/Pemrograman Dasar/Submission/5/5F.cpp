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
    
    double n; cin >> n;
    if(trunc(n) == n) cout << (int)n << " " << (int)n;
    else if(n < 0) cout << (int)trunc(n) - 1 << " " << (int)trunc(n);
    else if(n > 0) cout << (int)trunc(n) << " " << (int)trunc(n) + 1;
    
    return 0;
}