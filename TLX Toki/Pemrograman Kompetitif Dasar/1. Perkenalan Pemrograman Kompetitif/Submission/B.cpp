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
    vector<string> row(R), newRow;

    for(int i = 0; i < C; i++) {
        full += "1";
        empty += "0";
    }
    
    for(auto &r : row) {
        string temp; cin >> temp;
        if(temp == full) {
            row.push_back(empty);
        } else {
            row.push_back(temp);
        }
    }

    for(int i = 0; i < C; i++) {
        string temp = "";
        for(int j = 0; j < R; j++) {
            temp += row[i][j];
        }
        newRow.push_back(temp);
    }

    for(auto &r : row) {
        sort(r.begin(), r.end());
    }

    // for(int i = 0; i < R - 1; i++) {
    //     string &A = row[i], &B = row[i + 1]; 
    //     for(int j = 0; i < C; j++) {
    //         if(A[j] == 1 and B[j] == 0) {
    //             A[j] = 0;
    //             B[j] = 1;
    //         }
    //     }
    // }

    for(auto &r : row) {
        cout << r << endl;
    } 

    return 0;
}