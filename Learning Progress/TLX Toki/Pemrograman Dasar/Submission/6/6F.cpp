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
    
    int n; cin >> n;
    for(int i = n; i != 1; i--) {
        if(n % i == 0) cout << i << endl;
    }

    cout << "1";

    return 0;
}