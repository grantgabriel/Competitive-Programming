#include <bits/stdc++.h>
using namespace std;

void runCases(int M) {
    if(M == 0) { cout << "0 0"; return;}

    int timur = 0, utara = 0, barat = 0, selatan = 0, checkPoint = M;
    for(int i = 1; i <= checkPoint; i++) { 
        if(M - i <= 0) {
            if(i % 4 == 1) timur += M;
            else if(i % 4 == 2) utara += M;
            else if(i % 4 == 3) barat += M;
            else if(i % 4 == 0) selatan += M;

            break;
        }

        if(i % 4 == 1) {
            timur += i;
            M -= i;
        } else if(i % 4 == 2) {
            utara += i;
            M -= i;
        } else if(i % 4 == 3) {
            barat += i;
            M -= i;
        } else if(i % 4 == 0) {
            selatan += i;
            M -= i;
        }
    }

    cout << timur - barat << " " << utara - selatan;
}

int main() {
    int N, M;
    cin >> N;

    for(int i = 1; i <= N; i++) {
        cin >> M;
        runCases(M);
    }

    return 0;
}