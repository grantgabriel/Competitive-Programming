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
    for(int i = 1; i <= N; i++) {
        if(i % 10 == 0) continue;
        else if(i == 42) {
            cout << "ERROR" << endl;
            break;
        }

        cout << i << endl;
    }


    return 0;
}