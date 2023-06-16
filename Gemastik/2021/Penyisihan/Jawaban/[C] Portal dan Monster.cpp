#include <bits/stdc++.h>
using namespace std;

struct Monster {
    int banyak;
    int 
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    int monster[N], nodesarang[K][K];

    for(int i = 0; i < N; i++)
        cin >> monster[i];

    for(int i = 0; i < K; i++) {
        cin >> nodesarang[i][0];
        cin >> nodesarang[0][i];
    }

    return 0;
}