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
    
    int array[3][3];

    for(int i = 0; i < 3; i++)  
        for(int j = 0; j < 3; j++) 
            cin >> array[i][j];


    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << array[j][i] << " ";

        cout << endl;
    }

    
    return 0;
}