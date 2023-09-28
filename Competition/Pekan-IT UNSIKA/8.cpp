#include <iostream>
using namespace std;

bool prima(int n) {
    if(n <= 1) return false;
    
    if(n <= 3) return true;
    
    if(n % 2 == 0 || n % 3 == 0) return false;
    
    for(int i = 5; i * i <= n; i+=6) {
        if(n % i == 0 or n % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
    
}

int main() {
    int N, temp; cin >> N;
    
    while(N--) {
        cin >> temp;
        if(prima(temp)) {
            cout << "YA" << endl;
        } else {
            cout << "BUKAN" << endl;
        }
    }
    return 0;
}