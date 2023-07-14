#include <bits/stdc++.h>                                                    
#define ll long long    
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);              
using namespace std;

string run_query1(const string& A, ll L, ll R, ll K) {
    string modifiedA = A;
    
    for(ll i = L - 1; i < R; i++) {
        int temp = modifiedA[i] - '0';
        temp = temp + K;
        temp = temp % 10;
        modifiedA[i] = char(temp + 48);
    }

    return modifiedA;
}

void run_query2(string A, ll L, ll R) {
    string temp = A.substr(L - 1, (R - L) + 1);
    ll tempNum = stoll(temp);
    cout << tempNum % 998244353;
}

int main() {
    boost;
    
    ll N, Q, query, L, R, K;
    string A, B;
    cin >> N >> Q;
    cin >> A;
    
    for(int i = 0; i < Q; i++) {
        cin >> query;
        if(query == 2) {
            cin >> L >> R;
            run_query2(A, L, R);
        } else if(query == 1) {
            cin >> L >> R >> K;
            B = run_query1(A, L, R, K);
            A = B;
            cout << A << endl;
        }
    }
    
    
    return 0;
}