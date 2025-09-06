// Solved By       : Grant Gabriel Tambunan
// Connect With Me : https://www.linkedin.com/in/grantgabrieltambunan/

#include <iostream>
#include <array>
#include <algorithm>
#include <bitset>
#include <cassert>
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
#define all(a) a.begin(), a.end()
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
  boost;
  
  int N; cin >> N;

  vector<pair<string, int>> team;
  for(int i = 0; i < N; i++) {
    string temp;
    cin >> temp;

    team.emplace_back(temp, 0);
  }

  for(int i = 1; i <= N - 1; i++) {
    for(int j = i; j < N; j++) {
      int x, y; cin >> x >> y;

      if(x > y) {
        team[i - 1].second += 3;
        team[j].second -= 1;
      } else if(x < y) {
        team[i - 1].second -= 1;
        team[j].second += 3;
      } else {
        team[i - 1].second += 1;
        team[j].second += 1;
      }
    }
  }

  int maxScore = INT_MIN;
  for(const auto pair : team) {
    maxScore = max(maxScore, pair.second);
  }

  vector<string> ans;
  for(const auto pair : team) {
    if(pair.second == maxScore) { 
      ans.emplace_back(pair.first);
    }
  }

  sort(all(ans));
  cout << ans[0] << endl;
  
  return 0;
}