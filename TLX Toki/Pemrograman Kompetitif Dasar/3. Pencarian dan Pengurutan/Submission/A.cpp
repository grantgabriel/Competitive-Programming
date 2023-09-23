#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    int N, target; cin >> N >> target;
    int diff = INT_MAX, diffTemp = INT_MAX, temp;
    bool doubly = false;

    while(N--) {
        cin >> temp;
        diffTemp = min(diffTemp, abs(temp - target));
        if(diff != diffTemp) {
            diff = diffTemp; doubly = false;
        } else if(diff == diffTemp) {
            doubly = true;
        }
    }

    if(diff == diffTemp and target < 0) {
        cout << (min((target - diff), (diff - target)));
    } else if(diff == diffTemp and target > 0) {
        cout << -(min((target - diff), (diff - target)));
    } else {
        cout << "KONTOL";
    }
    
    return 0;
}
