#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

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

    sort(grade3.begin(), grade3.end());
    int it = 0, im = 0, max = grade3[0];
    while(grade3[it] != TC) {
        it++;
    }
    while(grade3[im] == max) {
        im++;
    }

    if(it + 1 > M) { 
        cout << "TIDAK" << endl; return;
    } else {
        M -= (it - 1);
    }

    sort(grade2.begin(), grade2.end());
    it = 0, max = grade2[0];
    while(grade2[it] != TB or max == grade2[0]) {
        it++;
    }

    if(it + 1> M) { 
        cout << "TIDAK" << endl; return;
    } else {
        M -= (it - 1);
    }

    sort(grade1.begin(), grade1.end());
    it = 0, max = grade1[0];
    while(grade1[it] != TA or max == TA) {
        it++;
    }

    if(it + 1> M) { 
        cout << "TIDAK" << endl; return;
    } else {
        cout << "YA" << endl; return;
    }
    
}

int main() {
    boost;
    
    int N; cin >> N;
    while(N--) {
        run_cases();
        cout << flush;
    }
    
    return 0;
}