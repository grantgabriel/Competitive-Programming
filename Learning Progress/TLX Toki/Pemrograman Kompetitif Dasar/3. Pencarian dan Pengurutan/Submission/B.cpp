#include <iostream>
#include <algorithm>
#include <cstdint>
#include <climits>
#include <vector>
using namespace std;

#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
	boost;
	
	int N, M, K; cin >> N >> M >> K;

	int grid[N][M]; vector<pair<int, int>> ans;
	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++) {
			int temp; cin >> temp;
			grid[i][j] = temp;
		}	

	
	return 0;
}