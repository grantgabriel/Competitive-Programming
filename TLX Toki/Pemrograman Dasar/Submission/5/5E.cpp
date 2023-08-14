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
    if(n > 9999) cout << "puluhribuan";
    else if(n > 999) cout << "ribuan";
    else if(n > 99) cout << "ratusan";
    else if(n > 9) cout << "puluhan";
    else cout << "satuan";
    
    return 0;
}