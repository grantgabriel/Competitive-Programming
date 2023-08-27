#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int pindahx[] = {0, 0, 1, -1};
int pindahy[] = {1, -1, 0, 0};
int nilai;
int bola[25][25];
int M, N;

void hitung(int x, int y, int awal) {
    if((bola[x][y] != awal) or (y < 0) or (x < 0) or (y >= 25) or (x >= 25)) {
        return;
    } else {
        nilai++;
        // cout << endl << nilai << endl;
        bola[x][y] = -1;
        for(int i = 0; i < 4; i++) {
            hitung(x + pindahx[i], y + pindahy[i], awal);
        }
    }
}

int main() {
    boost;
    nilai = 0;
    cin >> M >> N;

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cin >> bola[i][j];
        }
    }

    int B, K; cin >> B >> K;
    hitung(B, K, bola[B][K]);
    cout << ((nilai - 1) * nilai) << endl;
    
    return 0;
}