#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int m[128][128];

void transform(int r, int c, int k, int index, string s) {
    if(index == s.length()) {
        for(int i = r; i < r + k; i++) {
            for(int j = c; j < c + k; j++) {
                m[i][j] = 1;
            }
        }
    } else {
        if(s[index] == '0') transform(r, c, k/2, index + 1, s);
        else if(s[index] == '1') transform(r, c + k / 2, k / 2, index + 1, s);
        else if(s[index] == '2') transform(r + k / 2, c, k / 2, index + 1, s);
        else transform(r + k / 2, c + k / 2, k / 2, index + 1, s);
    }
}

int main() {
    int n; cin >> n;
    string biner[n];
    for(int i = 0; i < n; i++) {
        cin >> biner[i];
    }

    int r, c; cin >> r >> c;
    int pow = 1;

    while(pow < max(r,c))
        pow *= 2;

    for(int i = 0; i < pow; i++) {
        for(int j = 0; j < pow; j++) {
            m[i][j] = 0;
        }    
    }

    for(int i = 0; i < n; i++) {
        string s = biner[i];
        transform(0, 0, pow, 1, s);
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << m[i][j] << ' ';
        }

        cout << endl;
    }


    return 0;
}