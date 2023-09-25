#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

struct dataAneh {
    int umur = 19;
    string nama = "Grant";
    bool ganteng = true;
};

int main() {
    boost;
    
    dataAneh data[4];

    data[1].umur = 20;
    data[1].nama = "Kontolodon";
    data[1].ganteng = false;

    data[2].nama = "Ganteng";
    data[2].ganteng = false;

    data[3].umur = 22;
    
    for(int i = 0; i < 4; i++) {
        cout << data[i].nama << " " << data[i].umur << " ";
        string ketampanan = data[i].ganteng ? "GANTENG" : "JELEK";
        cout << ketampanan << endl;
    }


    return 0;
}