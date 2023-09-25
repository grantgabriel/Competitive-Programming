#include <iostream>
#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <climits>
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

void run_cases() {
	ll S, D, K; cin >> S >> D >> K;
	ll buns = (2 * S) + (D * 2);
	ll patties = S + (2 * D);
	ll kBuns = K + 1;
	ll kPatties = K;

	// cout << buns << " " << patties << " " << kBuns << " " << kPatties << endl;


	if((patties >= kPatties) and (buns >= kBuns)) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}

int main() {
    boost;
    
    ll N; cin >> N; ll i = 1;
    while(N--) {
    	cout << "Case #" << i << ": "; 
    	run_cases(); i++; 
    	cout << endl << flush;
    }
    
    return 0;
}