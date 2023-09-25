#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

struct titik {
    int x;
    int y;
};

int main() {
    boost;
    
    vector<titik> koordinat;

    for(int i = 0; i < 5; i++) {
        titik t;
        int tempY, tempX;
        cin >> tempX >> tempY;
        t.x = tempX; 
        t.y = tempY;   
        koordinat.push_back(t);
    }

    for(int i = 0; i < 5; i++) {
        cout << "(" << koordinat[i].x << " " << koordinat[i].y << ")"<< endl; 
    }
    
    return 0;
}