#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

float line_distance(int x1, int y1, int x2, int y2) {
    int formula = (abs(x2 - x1) * abs(x2 - x1)) + (abs(y2 - y1) * abs(y2 - y1));
    return sqrt(formula);
}   

void run_cases(int koorX[], int koorY[], int bom, int X, int Y, int N) {
    int insider = 0;
    for(int i = 0; i < N; i++) {
        float temp = line_distance(X, Y, koorX[i], koorY[i]);

        if(temp <= bom) insider++;
    }

    cout << insider << endl;
}

int main() {
    boost;
    int X, Y, N, Q;
    cin >> X >> Y >> N;

    int koorX[N], koorY[N];
    for(int i = 0; i < N; i++) cin >> koorX[i] >> koorY[i];

    cin >> Q;

    int bom;
    for(int i = 0; i < Q; i++) {
        cin >> bom;
        run_cases(koorX, koorY, bom, X, Y, N);
    }

    return 0;
}