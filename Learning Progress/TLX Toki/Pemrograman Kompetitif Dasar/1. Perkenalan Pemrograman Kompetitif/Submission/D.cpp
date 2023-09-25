#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {

    string A, B; cin >> A >> B; 

    int count = 0, j = 0;

    for(int i = 0; i < B.length(); i++) {
        if(A[j] == B[i]) j++;
        else {
            count ++; j++; i--;
        }
    }

    if(A.length() - B.length() != 1) cout << "Wah, tidak bisa :(";
    else if(count == 1) cout << "Tentu saja bisa!";
    else if(count == 0 and A.length() - B.length() == 1) cout << "Tentu saja bisa!";
    else cout << "Wah, tidak bisa :(";

    return 0;
}