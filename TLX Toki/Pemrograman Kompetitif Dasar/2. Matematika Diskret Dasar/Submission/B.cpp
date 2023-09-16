#include <iostream>
using namespace std;

#define ll long long
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

bool isPrime(ll num) {
    if(num <= 1) return false;
    else {
        int i = 2;
        while(i * i <= num) {
            if(num % i == 0) return false;
            i++;
        }
        return true;
    }
}

void run_cases() {
    ll N; cin >> N;

    ll counter = 0;
    ll mode = 0;
    while(counter < N) { 
        if(isPrime(mode)) {
            counter++;
        }
        mode++;
    }

    cout << mode - 1 << endl;
}

int main() {
    boost;
    
    ll T; cin >> T;

    while(T--) {
        run_cases();
        cout << flush;
    }
    
    return 0;
}