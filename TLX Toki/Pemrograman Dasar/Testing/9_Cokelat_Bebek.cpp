#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define bug(a) cout << a;
#define bugs(a) cout << a << ' ';
#define debug(a) cout << a << endl;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
    boost;
    
    int N; cin >> N;

    int kandang[N][N];

    for(int i = 0; i < N; i+=1) {
        for(int j = 0; j < N; j+=1)
            cin >> kandang[i][j];
    }
    
    for(int i = 0; i < N; i+=1) {
        for(int j = 0; j < N; j+=1) {
            int temp; cin >> temp;
            kandang[i][j] += temp;
        }
    }
        
    for(int i = 0; i < N; i+=1) {
        for(int j = 0; j < N; j+=1)
            cout << kandang[i][j] << " ";

        cout << endl;
    }
    return 0;
}