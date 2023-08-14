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
    if(n > 0) cout << "positif";
    else if(n < 0) cout << "negatif";
    else cout << "nol";
    
    return 0;
}