#include <iostream>
#include <math.h>
#include <algorithm>
#include <climits>
using namespace std;

int main() {

    int N, target; cin >> N >> target;
    int diff = INT_MAX, diffTemp = INT_MAX, temp, final = INT_MAX;

    while(N--) {
        cin >> temp;
        diffTemp = abs(target - temp);
        if(diff > diffTemp) {
            diff = diffTemp; 
            final = temp;
        } else if(diff == diffTemp) {
            if(temp < final)
                final = temp;
        }
    }

    cout << final;

    return 0;
}
