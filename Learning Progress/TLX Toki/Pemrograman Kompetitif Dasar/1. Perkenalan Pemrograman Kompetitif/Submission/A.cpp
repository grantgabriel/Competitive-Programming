#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)
#define debug(a) cout << a << endl
vector<string> ans;

bool desc(int a, int b) {
    return a > b;
}

void run_cases() {
    int N, M; cin >> N >> M; string target; cin >> target;
    vector<int> grade1, grade2, grade3;
    int TA, TB, TC;

    for(int i = 0; i < N ; i++) {
        string temp; cin >> temp;
        int a, b, c;
        cin >> a >> b >> c;
        if(temp == target) {
            TA = a; TB = b; TC = c;
        }
        grade1.emplace_back(a);
        grade2.emplace_back(b);
        grade3.emplace_back(c);
    }

    map<int, int> map3;
    for(int i = 0 ; i < N; i++) {
        map3[grade3[i]]++;
    }

    sort(grade3.begin(), grade3.end(), desc);
    grade3.erase(unique(grade3.begin(), grade3.end()), grade3.end());
    
    bool kena = false;
    for(int i = 0; i < grade3.size(); i++) {
        // cout << "Testing grade3 #" << i << " " << grade3[i] << ' ' << map3[grade3[i]] << endl; 
        if(grade3[i] == TC) kena = true;


        if(grade3[i] == TC and M >= map3[grade3[i]]) {
            ans.push_back("YA"); return;
        } else if(M <= 0) {
            ans.push_back("TIDAK"); return;
        } else if(!kena){
            M -= map3[grade3[i]];
            // cout << "M grade3 #" << i << " " << M << endl;
        }

        if(kena) break;
    }    

    kena = false;
    map<int, int> map2;
    for(int i = 0 ; i < N; i++) {
        map2[grade2[i]]++;
    }

    sort(grade2.begin(), grade2.end(), desc);
    grade2.erase(unique(grade2.begin(), grade2.end()), grade2.end());

    for(int i = 0; i < grade2.size(); i++) {
        // cout << "Testing grade2 #" << i << " " << grade2[i] << ' ' << map2[grade2[i]] << endl; 
        if(grade2[i] == TB) kena = true;

        if(grade2[i] == TB and M >= map2[grade2[i]]) {
            ans.push_back("YA"); return;
        } else if(M <= 0) {
            ans.push_back("TIDAK"); return;
        } else if(!kena) {
            M -= map2[grade2[i]];
            // cout << "M grade2 #" << i << " " << M << endl;
        }

        if(kena) break;
    }

    kena = false;
    map<int, int> map1;
    for(int i = 0 ; i < N; i++) {
        map1[grade1[i]]++;
    } 

    sort(grade1.begin(), grade1.end(), desc);
    grade1.erase(unique(grade1.begin(), grade1.end()), grade1.end());
    
    for(int i = 0; i < grade1.size(); i++) {
        // cout << "Testing grade1 #" << i << " " << grade1[i] << ' ' << map1[grade1[i]] << endl; 
        if(grade1[i] == TA) kena = true;

        if(grade1[i] == TA and M >= map1[grade1[i]]) {
            ans.push_back("YA"); return;
        } else if(M <= 0) {
            ans.push_back("TIDAK"); return;
        } else {
            M -= map1[grade1[i]];
            // cout << "M grade2 #" << i << " " << M << endl;
        }

        if(kena) ans.push_back("TIDAK");
    }

}

int main() {
    boost;
    
    int T, i = 1; cin >> T;
    while(T--) {
        // cout << "CASES #" << i << endl;
        run_cases(); i++;
    }

    for(const auto &r : ans) {
        cout << r << endl;
    }
    
    return 0;
}