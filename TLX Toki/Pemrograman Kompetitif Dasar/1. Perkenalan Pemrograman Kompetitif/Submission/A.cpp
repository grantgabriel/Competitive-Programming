#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

struct pemain {
    string ID;
    int N1, N2, N3;
};

void run_cases() {
    int N, M;
    cin >> N >> M;
    string TID; cin >> TID;
    int T1, T2, T3;

    vector<pemain> peserta(N);
    for(auto &r : peserta) {
        cin >> r.ID >> r.N1 >> r.N2 >> r.N3;
        if(r.ID == TID) {
            T1 = r.N1;
            T2 = r.N2;
            T3 = r.N3;
        }
    }
}

int main() {
    boost;
    
    int T; cin >> T;
    while(T--) {
        run_cases();
        cout << flush;
    }
    
    return 0;
}

// int find_index(vector<int> &a, int key) {
//     int i = 1;
//     for(auto &num : a) {
//         if(num == key) return i;

//         i++;
//     }

//     return -1;
// }

// int count_element(vector<int> &a, int target) {
//     int i = 0;

//     for(auto &num : a) {
//         if(num == target) i++;
//     }

//     return i;
// }

// int count_before_element(vector<int> &a, int target) {
//     int i = 0;
    
//     for(auto &num : a) {
//         if(num == target) {
//             return i;
//         } else {
//             i++;
//         }
//     }

//     return -1;
// }

// void run_cases() {
//     int N, M; cin >> N >> M; string target; cin >> target;
//     vector<int> grade1, grade2, grade3;
//     int TA, TB, TC;

//     for(int i = 0; i < N ; i++) {
//         string temp; cin >> temp;
//         int a, b, c;
//         cin >> a >> b >> c;
//         if(temp == target) {
//             TA = a; TB = b; TC = c;
//         }
//         grade1.emplace_back(a);
//         grade2.emplace_back(b);
//         grade3.emplace_back(c);
//     }

//     sort(grade3.begin(), grade3.end());
//     int curr = find_index(grade3, TC);
//     if(curr <= M and count_element(grade3, TC) < 2) { 
//         cout << "YA" << endl; return;
//     } else if(grade3[M - 1] > TC){
//         cout << "TIDAK" << endl; return;
//     } else {
//         int before = count_before_element(grade3, TC);
//         M = M - before;
//     }

//     sort(grade2.begin(), grade2.end());
//     curr = find_index(grade2, TB);
//     if(curr <= M and count_element(grade2, TB) < 2) { 
//         cout << "YA" << endl; return;
//     } else if(grade2[M - 1] > TB){
//         cout << "TIDAK" << endl; return;
//     } else {
//         int before = count_before_element(grade2, TB);
//         M = M - before;
//     }

//     sort(grade1.begin(), grade1.end());
//     curr = find_index(grade1, TA);
//     if(curr <= M) {
//         cout << "YA"; return;
//     } else {
//         cout << "TIDAK"; return;
//     }
    
// }