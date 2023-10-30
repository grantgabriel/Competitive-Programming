#include <bits/stdc++.h>
using namespace std;

struct Rice {
	int weight;
	int price;
};

bool comp(Rice a, Rice b) {
	return (double)a.price / a.weight > (double)b.price / b.weight;
}

int main() {
	int N, X; cin >> N >> X;

	Rice rice[N];

	for(int i = 0; i < N; i++) {
		cin >> rice[i].weight;
	}

	for(int i = 0; i < N; i++) {
		cin >> rice[i].price;
	}

	sort(rice, rice + N, comp);

	for(int i = 0; i < N; i++) {
		cerr << rice[i].weight << " " << rice[i].price << endl;
	}

	double total = 0.0;

	for(int i = 0; i < N and X > 0; i++) {
		int buy = min(X, rice[i].weight);
		total += (double)rice[i].price / rice[i].weight * buy;
		X -= buy;
	}

	cout << setprecision(5) << fixed << total << endl;

	return 0;
}