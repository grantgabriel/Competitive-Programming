#include <iostream>
#include <cmath>
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

string agakPrimeChecker(int input) {
    int count = 0;
    if(input == 1) return "YA";

    for(int i = 2; i < input; i++) {
        if(input % i == 0) count++;

        if(count >= 3) return "BUKAN";
    }

    return "YA";
}

int main() {
    boost;
    
    int N, input; cin >> N;
    
    while(N--) {
        cin >> input;
        string answer = agakPrimeChecker(input);
        cout << answer << endl;
    }
    
    return 0;
}