#include <iostream>
using namespace std;

int n, k, dp[10];

void pwbreak(int x) { 
    if(x >= k) {
        for(int i = 0; i < k; i++) {
            cout << dp[i] << ' ';
        }

        cout << endl;
    } else {
        for(int i = dp[x - 1] + 1; i <= n; i++) {
            dp[x] = i;
            pwbreak(x + 1);
        }
    }
}

int main() {
    cin >> n >> k;
    pwbreak(0);
    
    return 0;
}