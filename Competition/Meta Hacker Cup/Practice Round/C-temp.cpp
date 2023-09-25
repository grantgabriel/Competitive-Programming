#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <climits>
#include <vector>
#include <map>
using namespace std;

#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

template<class T>
map<T, T> count_map(vector<T> &V) {
    map<T, T> counter;
    for(auto &v : V) {
        counter[v]++;
    }

    return counter;
}
void run_cases() {
    ull N; cin >> N; N = (2 * N) - 1;
    vector<ull> apples(N);
    vector<ull> addedWeight;

    for(auto &apple : apples) {
        cin >> apple;
    }

    sort(apples.begin(), apples.end());

    for(ull i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            addedWeight.push_back(apples[i] + apples[j]);
        }
    }

    map<ull, ull> freq = count_map(addedWeight);
    ull freqAdd = 0, temp; 
    for(const auto& pair : freq) {
        if(pair.second > freqAdd) {
            freqAdd = pair.second;
            temp = pair.first;
        }
    }

    bool breakPoint = true; ull leftPivot = 0, rightPivot = N - 1; ull leftout; 
    while(breakPoint) {
        if((leftPivot == rightPivot)) {
            cout << temp - apples[leftPivot];
        } else if(rightPivot - leftPivot == 1) {
            cout << temp - leftout;
        } else if((apples[leftPivot] + apples[rightPivot] != temp) and (apples[leftPivot + 1] + apples[rightPivot] == temp)) {
            leftout = apples[leftPivot];
            leftPivot++;
        } else if((apples[leftPivot] + apples[rightPivot] != temp) and (apples[leftPivot] + apples[rightPivot - 1] == temp)) {
            leftout = apples[rightPivot];
            rightPivot--;
        }
    }

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