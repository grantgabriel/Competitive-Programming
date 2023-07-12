#include <bits/stdc++.h>
using namespace std;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);

int FormattedMax(int arr[], int n) {
	int max = arr[0];
	for(int i = 0; i < n; i++) arr[i] > max ? max == arr[i] : max == max;

	return max;
}

int FormattedMin(int arr[], int n) {
	int min = arr[0];
	for(int i = 0; i < n; i++) arr[i] < min ? min == arr[i] : min == min;

	return min;	
}

int factorial(int n) {
	if(n == 1) return 1;

	return n * factorial(n - 1);
}

int main() {
    boost;

    int N, M;

    cin >> N >> M;
    int menit[N][M], nilai[N][M]; 

    for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++)
			cin >> nilai[i][j];

	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++)
			cin >> menit[i][j];
		
	int hasil = 0, maksSementara[4][N];

	for(int i = 0; i < M; i++) {
		for(int j = 0; j < N; j++) {
			maksSementara[0][j] = nilai[j][i] + menit[j][i] + j;
			maksSementara[0][j] = nilai[j][i] - menit[j][i] - j;
			maksSementara[0][j] = nilai[j][i] + menit[j][i] + j;
			maksSementara[0][j] = nilai[j][i] - menit[j][i] + j;
		}

		for (int j = 0; j < 4; j++) {
			hasil = max(hasil, FormattedMax(maksSementara[j], N) - FormattedMin(maksSementara[j], N));
		}
	}

	cout << hasil;

    return 0;
}

// (abs(nilai[i][j + k] - nilai[i][j]) + abs(j - i)) > maks ? maks == (abs(nilai[i][j + k] - nilai[i][j]) + abs(j - i)) : maks == maks;				
/*
1 2 3 4
2 4 6 8
3 6 9 12

*/

