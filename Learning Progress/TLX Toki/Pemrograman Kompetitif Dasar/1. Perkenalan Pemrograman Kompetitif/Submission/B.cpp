#include <bits/stdc++.h>
using namespace std;

#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl

int satuBaris[8], akhirBaris[8];
int R, C, lastRow; 
vector<string> row;
string full = "", emp = "";

void isiAkhir() {
    for(int i = 0; i < 8; i++) {
        akhirBaris[i] = R;
    }
}

bool adaLayakRuntuh() {
    for(auto &r : row) {
        if(r == full) {
            return true;
        }
    }
    return false;
}

void hitungAtas() {
    // memset(satuBaris, 0, sizeof(satuBaris));
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
    // memset(akhirBaris, R, sizeof(akhirBaris));
    isiAkhir();
    for(int i = 0; i < C; i++) {
        for(int j = R - 1; j >= lastRow; j--) {
            if(row[j][i] == '1') {
                akhirBaris[i] = j; 
            }
        }
    }
}

void stackBawah() {
    for(int i = 0; i < C; i++) {
        for(int j = akhirBaris[i] - 1; (satuBaris[i] > 0) and (j >= 0); j--) { // Masalah pada j != 0 atau j >= 0
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
    cin >> R >> C;
    memset(satuBaris, 0, sizeof(satuBaris));

    for(int i = 0; i < C; i++) {
        full += "1";
        emp += "0";
    }

    for(int i = 0; i < R; i++) {
        string temp; cin >> temp;
        row.push_back(temp);
    }

    while(adaLayakRuntuh()) {
        peruntuhan();
        // cout << "Hasil : " << endl;
        // for(auto &r : row)
        //     cout << r << endl;

        // cout << endl << endl;
    }

    for(auto &r : row)
        cout << r << endl;

    return 0;
}