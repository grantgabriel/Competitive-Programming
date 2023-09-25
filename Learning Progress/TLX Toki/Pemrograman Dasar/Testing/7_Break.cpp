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
    
    int N = 10, M = 5;


    /* Loop ini akan melakukan loop sampai 4 dan mencetak selesai pada akhirnya.

    
    */
    for(int i = 1; i <= N; i++) {
        if(i == M) {
            break;
        }

        cout << i << endl;
    }

    cout << "selesai";
    
    return 0;
}