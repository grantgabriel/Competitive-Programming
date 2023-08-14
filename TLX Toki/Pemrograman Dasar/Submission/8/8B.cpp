#include <iostream>
#include <cmath>
using namespace std;

string primeCheck(int kontol) {
    if(kontol == 1) return "BUKAN";

    for(int i = 2; i <= sqrt(kontol); i+=1) {
        if(kontol % i == 0) return "BUKAN";
    }

    return "YA";
}

int main() {
    int N, input;
    cin >> N;
    while(N--) {
        cin >> input;
        string ganteng = primeCheck(input);
        cout << ganteng << endl;
    }
    
    return 0;
}