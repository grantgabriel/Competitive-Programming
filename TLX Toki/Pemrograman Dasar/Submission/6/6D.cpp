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
    
    int temp, jumlah = 0;
    while(cin >> temp) {
        jumlah += temp;
    }

    cout << jumlah << endl;
    
    return 0;
}