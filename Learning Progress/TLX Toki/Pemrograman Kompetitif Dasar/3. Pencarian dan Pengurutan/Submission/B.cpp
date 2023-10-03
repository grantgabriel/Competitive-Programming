#include <iostream>
#include <algorithm>
#include <cstdint>
#include <climits>
#include <vector>
using namespace std;

#define ll long long
#define ull unsigned long long
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)
vector<pair<int, int>> ans; bool ada = false;
int N, M, K; int grid[100][100];

void countNeighbors(int x, int y) {
	ull total;
	if(y == 0 and x == 0) {
		total = grid[x + 1][y] * grid[x][y + 1];
	} else if(x == 0 and y == M - 1) {
		total = grid[x][y - 1] * grid[x + 1][y];
	} else if(x == N - 1 and y == 0) {
		total = grid[x - 1][y] * grid[x][y + 1];
	} else if(x == N - 1 and y == M - 1) {
		total = grid[x][y - 1] * grid[x - 1][y];
	} else if(x == 0) {
		total = grid[x][y - 1] * grid[x + 1][y] * grid[x][y + 1];
	} else if(y == 0) {
		total = grid[x + 1][y] * grid[x - 1][y] * grid[x][y + 1];
	} else if(x == N - 1) {
		total = grid[x][y - 1] * grid[x - 1][y] * grid[x][y + 1];
	} else if(y == M - 1) {
		total = grid[x + 1][y] * grid[x - 1][y] * grid[x][y - 1];
	} else {
		total = grid[x][y + 1] * grid[x][y - 1] * grid[x + 1][y] * grid[x - 1][y];
	}

	if(total == K) {
		ans.push_back(make_pair(x, y)); ada = true;
	} 
}

void findAnswer() {
	// for(auto &r : ans) { 
	// 	cout << r.first << " " << r.second << endl;
	// }
	
	if(!ada) {
		cout << "0 0"; return;
	}
	
	int temp;
	bool doubly = false;

	sort(ans.begin(), ans.end());


	if(ans[0].first == ans[1].first) {
		temp = min(ans[0].second, ans[1].second);
		cout << ans[0].first << " " << temp;
	} else {
		cout << ans[0].first << " " << ans[0].second;
	}

	

}

int main() {
	boost;
	cin >> N >> M >> K;
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			cin >> grid[i][j];
		}		
	}

	for(int x = 0; x < N; x++) {
		for(int y = 0; y < M; y++) {
			countNeighbors(x, y);
		}
	}

	findAnswer();
	
	return 0;
}