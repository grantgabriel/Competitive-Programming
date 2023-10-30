#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, K; cin >> N >> K;

	vector<int> bebeks(N);

	for(auto &bebek : bebeks) {
		cin >> bebek;
	}
	
	sort(bebeks.begin(), bebeks.end());

	cout << bebeks[K - 1];

	return 0;
}