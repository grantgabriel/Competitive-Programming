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

    int N = 5; // cin >> N;
    
    for(int i = N - 1; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << " ";
        }

        for(int k = 1; k <= N - i; k+=1) {
            cout << "*";
        }

        cout << endl;
    }
    
    return 0;
}