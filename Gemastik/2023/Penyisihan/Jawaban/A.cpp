// General solution : Make 2 vector and map each volume, sort and remove duplicate in one vector and do for each edge cases.

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int vectorFind(vector<int> &v, int target) {
    auto it = find(v.begin(), v.end(), target);
    int index = it - v.begin();

    return index + 1;
}

int main() {
    boost;

    int N;
    cin >> N;

    if(N == 1) { // Cup 1, pasti sesuai
        int temp; 
        cin >> temp; cout << "SESUAI"; return 0;
    }

    vector<int> cup;
    map<int, int> cupMap;
    for(int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        cup.push_back(temp);
        cupMap[temp]++;
    }

    if(cupMap.size() > 3) { // Cup dengan volume berbeda lebih dari 3 jenis 
        cout << "TIDAK SESUAI"; return 0;
    } else if(cupMap.size() == 1) { // Semua volume cup sama
        cout << "SESUAI"; return 0;
    } else if(cupMap.size() == 2) { // Hanya ada 2 cup dengan volume berbeda
        vector<int> cupCopy = cup;
        sort(cupCopy.begin(), cupCopy.end());
        cupCopy.erase(unique(cupCopy.begin(), cupCopy.end()), cupCopy.end());
        
        if(cupMap[cupCopy[0]] > 1 or cupMap[cupCopy[1]] > 1) {
            cout << "TIDAK SESUAI";
        } else {
            int a = cupCopy[0], b = cupCopy[1];
            cout << abs(a - b) / 2 << " " << vectorFind(cup, max(a, b)) << " " << vectorFind(cup, min(a, b));
        }
    } else if(cupMap.size() == 3) {
        vector<int> cupCopy = cup;
        sort(cupCopy.begin(), cupCopy.end());
        cupCopy.erase(unique(cupCopy.begin(), cupCopy.end()), cupCopy.end());


        if(cupMap[cupCopy[0]] > 1 or cupMap[cupCopy[2]] > 1) {
            cout << "TIDAK SESUAI";
        } else {
            int a = cupCopy[0], b = cupCopy[2];
            cout << (abs(a - b)) / 2 << " " << vectorFind(cup, max(a, b)) << " " << vectorFind(cup, min(a, b));
        }
    }

    return 0;
}