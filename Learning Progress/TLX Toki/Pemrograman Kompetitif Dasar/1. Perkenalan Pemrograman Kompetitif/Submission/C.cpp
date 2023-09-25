#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    boost;
    
    string ask, s; cin >> ask;
    int N; cin >> N;
    vector<string> words(N);
    for(auto &w : words) {
        cin >> w;
    }

    if(ask == "*") {
        for(auto &w : words) {
            cout << w << endl;
        }
    } else {
        for(int x = 0; x < N; x++) {
            string s = words[x];
            if(s.length() < ask.length() - 1) continue;

            bool cocok = true;
            int asterisk = ask.find('*'), indexAwal = 0;
            for(int i = 0; i < asterisk and cocok; i++) {
                if(ask[i] != s[indexAwal++]) {
                    cocok = false;
                    break;
                }
            }

            int indexAkhir = s.length() - 1; 
            for(int i = ask.length() - 1; ask[i] != '*' and cocok; i--) {
                if(ask[i] != s[indexAkhir--]) {
                    cocok = false;
                }
            }

            if(cocok) cout << s << endl;
        }
    }



    // else if(ask[ask.length() - 1] == '*') {
    //     string target = ask.substr(0, ask.length() - 1 );
    //     for(auto &w : words) { 
    //         bool found = true;
    //         for(int i = 0; i < ask.length() - 1; i++) {
    //             if(w[i] != ask[i]) {
    //                 found = false; 
    //             }
    //         }
            
    //         if(found) cout << w << endl;
    //     }
    // } else if(ask[0] == '*') {
    //     string target = ask.substr(1, ask.length() - 1);
    //     for(auto &w : words) {
    //         if(w.find(target) < w.length() and w.find(target) > 0) {
    //             cout << w << endl;
    //         }
    //     }
    // } else {
    //     int asteriskIndex;
    //     for(int i = 0; i < ask.length(); i++) {
    //         if(ask[i] = '*') asteriskIndex = i; 
    //     }

    //     string A, B;
    //     A = ask.substr(0, asteriskIndex - 1); debug(A);
    //     B = ask.substr(asteriskIndex + 1, ask.length() - 1); debug(B);

    //     for(auto &w : words) {
    //         if((ask.find(A) < ask.length() and ask.find(A) > 0) and (ask.find(B) < ask.length() and ask.find(B) > 0)) {
    //             cout << w << endl;
    //         }
    //     }
    // }
    
    return 0;
}