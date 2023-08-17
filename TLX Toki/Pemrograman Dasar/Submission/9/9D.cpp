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
    
    int N, M;
    cin >> N >> M;

    int arr[N][M];
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            cin >> arr[i][j];

    for(int j = 0; j < M; j++) {
        for(int i = N - 1; i >= 0; i--)
            cout << arr[i][j] << " ";

        cout << endl;
    }
    return 0;
}