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

void swapNum(int &a, int &b) { // Jika parameter tidak menggunakan adress, nilai dari x dan y tidak akan bertukar.
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    boost;
    
    int x = 15, y = 10;
    swapNum(x, y);
    cout << x << " " << y;
    
    return 0;
}