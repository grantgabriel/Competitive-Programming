#include <iostream>
#include <array>
#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <string>
#include <functional>
#include <iomanip>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <stack>
#include <vector>
#include <set>
using namespace std;

#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    boost;
    
    int N, M, P;
    cin >> N >> M >> P;
    int NM[N][M], MP[M][P], NP[N][P];
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < P; j++) {
            NP[i][j] = 0;
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> NM[i][j];
        }
    }
    
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < P; j++) {
            cin >> MP[i][j];
            for(int k = 0; k < N; k++) {
                NP[k][j] += NM[k][i] * MP[i][j];
            }
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < P; j++) {
            cout << NP[i][j] << " ";
        }

        cout << endl;
    }
    
    return 0;
}