#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl

int main() {    
    int R, C; cin >> R >> C;
    string full = "", empty = "";
    vector<string> row;

    for(int i = 0; i < C; i++) {
        full += "1";
        empty += "0";
    }
    
    for(int i = 0; i < R; i++) {
        string temp; cin >> temp;
        if(temp == full) {
            row.push_back(empty);
        } else {
            row.push_back(temp);
        }
    }

    for(int i = 0; i < R - 1; i++) {
        string A = row[i], B = row[i + 1]; 
        for(int j = 0; i < C; j++) {
            if(A[j] == '1' and B[j] == '0') {
                A[j] = '0';
                B[j] = '1';
            }
        }
        row[i] = A; row[i + 1] = B;
    }

    for(int i = 0; i < R; i++) {
        cout << row[i] << endl;
    } 

    return 0;
}