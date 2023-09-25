#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <climits>
#include <vector>
using namespace std;

#define ull unsigned long long int
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

void run_cases() {
    ull N; cin >> N; N = (2 * N) - 1;
    vector<ull> apples(N);

    for(auto &apple : apples) {
      cin >> apple;
    }
    
    sort(apples.begin(), apples.end());

    ull ans;
    ull pivot = N - 1; 
    ull temp = apples[pivot] + apples[0]; 
    ull limit;
    bool ethical = true;
    ((N == 3) ? limit = 1 : limit = (N - 1) / 2);


    // 2 4 10 999999994 1000000000 

    for(int i = 0; i <= limit; i++) {
      if((apples[i] + apples[pivot] != temp) and (i != (N - 1) / 2) and (i != 0)) {
        cout << -1; return;
      } else if((i == 0) and (apples[i + 1] + apples[pivot]) == (apples[i + 2] + apples[pivot - 1]) and N >= 5 and ((apples[i] + apples[pivot]) != (apples[i + 1] + apples[pivot - 1])) ) {
        temp = apples[i + 1] + apples[pivot]; i++; ethical = false;
      } else if(i == (N - 1) / 2 and pivot != i) {
        ans = temp - apples[i];
      } else if(ethical == false) {
        cout << temp - apples[i];
      } else if(apples[i] + apples[pivot] == temp) {
        pivot--;
      } 
    }

    cout << ans;
}

int main() {
    boost;
    
    unsigned long long int N; cin >> N; unsigned long long int i = 1;
    while(N--) {
      cout << "Case #" << i << ": "; 
      run_cases(); i++; 
      cout << endl;
    }
    
    return 0;
}



// Case #1: 4
// Case #2: 7
// Case #3: 1
// Case #4: -1
// Case #5: 6
// Case #6: -1
// Case #7: 1000000002
