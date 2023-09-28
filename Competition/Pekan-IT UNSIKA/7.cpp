#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    
    vector<int> v(N);
    
    for(auto &x : v) {
        cin >> x;
    }
    
    sort(v.begin(), v.end());
    cout << v[N -1] << " " << v[0];
    return 0;
}