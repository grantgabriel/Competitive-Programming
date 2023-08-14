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
    
    int N = 10, M = 2;
    
    // Akan mencetak 1 3 5 7 9 selesai. Setiap kelipatan 2 akan dicontinue
    for(int i = 0; i < N; i += 1) {
        if(i % M == 0) continue;

        cout << i << endl;
    }

    cout << "selesai";
    
    return 0;
}