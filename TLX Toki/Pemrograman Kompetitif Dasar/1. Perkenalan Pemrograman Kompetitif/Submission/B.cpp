#include <bits/stdc++.h>
using namespace std;

#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl

int satuBaris[8], akhirBaris[8];
int R, C, lastRow; 
vector<string> row;
string full = "", emp = "";

bool adaLayakRuntuh() {
    for(auto &r : row)
        if(r == full) return true;
    return false;
}

void hitungAtas() {
    for(int i = 0; i < C; i++) {
        for(int j = 0; j < lastRow; j++) {
            if(row[j][i] == '1') {
                satuBaris[i] += 1;
                row[j][i] = '0';
            }
        }
    }
}

void hitungBawah() {
    for(int i = 0; i < C; i++) {
        for(int j = R - 1; j > lastRow; j--) {
            if(row[j][i] == '1') {
                akhirBaris[i] = j; 
            }
        }
    }
}

void stackBawah() {
    for(int i = 0; i < C; i++) {
        for(int j = akhirBaris[i] - 1; satuBaris[i] > 0; j--) {
            row[j][i] = '1';
            satuBaris[i]--;
        }
    }
}

void peruntuhan() {
    lastRow = 0; int ite = 0;
    for(auto &r : row) {
        if(r == full) {
            r = emp;
            lastRow = ite;
        } 
        ite++;
    }

    hitungAtas();
    hitungBawah();
    stackBawah();
}

int main() {    
    memset(satuBaris, 0, sizeof(satuBaris));
    cin >> R >> C;

    for(int i = 0; i < C; i++) {
        full += "1";
        emp += "0";
    }

    for(int i = 0; i < R; i++) {
        string temp; cin >> temp;
        row.push_back(temp);
    }

    while(adaLayakRuntuh())
        peruntuhan();

    for(auto &r : row)
        cout << r << endl;

    return 0;
}