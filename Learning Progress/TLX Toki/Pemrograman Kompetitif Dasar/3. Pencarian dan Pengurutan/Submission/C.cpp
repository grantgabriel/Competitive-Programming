#include <iostream>
#include <array>
#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <climits>
#include <string>
#include <functional>
#include <iomanip>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <stack>
#include <vector>
#include <set>
using namespace std;

#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    boost;
    
    int N, Q; cin >> N >> Q;
    map<string, string> daftar;

    string nama, noTelp;
    while(N--) {
        cin >> nama >> noTelp;
        daftar[nama] = noTelp;

    }

    string dicari;
    while(Q--) {
        cin >> dicari;
        if(daftar[dicari] == "") {
            cout << "NIHIL" << endl;
        } else {
            cout << daftar[dicari] << endl;
        }
    }
    
    return 0;
}