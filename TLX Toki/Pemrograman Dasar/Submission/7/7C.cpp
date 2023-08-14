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
    
    int N, temp = 0; cin >> N;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < i + 1; j++) {
            if(temp == 10) temp = 0;

            cout << temp; temp++;
        }
        cout << endl;
    }
    
    return 0;
}