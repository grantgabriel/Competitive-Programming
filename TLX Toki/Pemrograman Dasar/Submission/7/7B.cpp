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
    
    int N; cin >> N;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(j < N - i - 1) cout << " ";
            else cout << "*";

        }
        cout << endl;
    }
    
    return 0;
}