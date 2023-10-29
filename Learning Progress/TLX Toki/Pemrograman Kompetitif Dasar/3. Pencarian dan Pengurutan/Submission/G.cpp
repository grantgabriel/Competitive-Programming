#include <bits/stdc++.h>
using namespace std;

int main() {
	int N; cin >> N;

	vector<float> list(N);

	for(auto &r : list) {
		cin >> r;
	}

	sort(list.begin(), list.end());

	if(N % 2 == 0) {
		cout << setprecision(1) << fixed << ((list[N / 2 - 1] + list[(N / 2)]) / 2.0);
	} else {
		cout << setprecision(1) << fixed << list[N / 2];
	}

	return 0;
}

// 0 1 2 3 4 