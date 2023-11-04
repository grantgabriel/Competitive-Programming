#include <iostream>
using namespace std;

int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
int N = 20;
bool subset_sum(int i, int sum) {
	if(i > N) {
		if(sum = K) {
			return true;
		} else {
			return false;
		}
	}

	return subset_sum(i + 1, sum + arr[i]) or subset_sum(i + 1, sum);
}

int main() {
	cout << ((subset_sum(0, 45)) ? "ADA" : "TIDAK ADA");

	return 0;
}