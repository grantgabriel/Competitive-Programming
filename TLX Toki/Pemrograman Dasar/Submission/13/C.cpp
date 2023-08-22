#include <iostream>
#include <array>
#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <climits>
#include <string>
#include <cstring>
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

int n;
int catat[100];
bool pernah[100] = {false};

void tulis(int kedalaman) {
    if(kedalaman > n) {
        bool zigzag;
        for(int i = 2; i <= n - 1; i++) {
            if(catat[i] > catat[i - 1] and catat[i] > catat[i + 1] or catat[i] < catat[i - 1] and catat[i] < catat[i + 1]) {
                zigzag = true;
            } else {
                zigzag = false;
                break;
            }
        }

        if(zigzag) {
            for(int i = 1; i <= n; i++) {
                cout << catat[i];
            } 
            
            cout << endl;
        } 
    } else {
        for(int i = 1; i <= n; i+=1) {
            if(!pernah[i]) {
                pernah[i] = true;
                catat[kedalaman] = i;
                tulis(kedalaman + 1);
                pernah[i] = false;
            }
        }
    }
}

int main() {

    cin >> n;
    
    tulis(1);


    return 0;
}