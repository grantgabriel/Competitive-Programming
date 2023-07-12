#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
int N;
using namespace std;

int factorial(int x) {
    if(x == 1 || x == 0) {return 1;}
    else {return x * (factorial(x - 1));}
}

void runcases(int elements[], int much[], int j) {
    int tempTotal = 1;
    for(int i = 0; i < sizeof(much) / sizeof(int); i++) {
        tempTotal = tempTotal * factorial(much[i]);
    }

    int kombinasi = factorial(j) / tempTotal;

    cout << N - kombinasi;
}

int main() {
    boost;

    int i = 0, j = 0;
    cin >> N;
    map<int, int> diffElement;

    int arraying = N;
    vector<int> digits; 
    while(arraying > 0) {
        digits[i] = arraying % 10;
        arraying /= 10; i++; j++;
    }

    for(int i = 0; i < digits.size(); i++) diffElement[digits[i]]++;

    int elements[diffElement.size()], much[diffElement.size()];
    i = 0;

    for(const auto& pair : diffElement) {
        elements[i] = pair.first;
        much[i] = pair.second; 
        i++;
    }

    runcases(elements, much, j);

    return 0;
}