#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int total = 0, temp;
    
    while(N--) {
        cin >> temp;
        total += temp;
    }
    
    cout << total;
    return 0;
}