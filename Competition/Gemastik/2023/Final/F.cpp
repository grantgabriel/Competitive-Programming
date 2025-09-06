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

int findIndex(int x, vector<int> wildcard) {
  for(int i = 0; i < wildcard.size(); i++) {
    if(wildcard[i] == x)
      return i;
  }

  return - 1;
}

int main() {
  boost;
  
  int N, M, K;
  cin >> N >> M >> K;
  vector<int> temp;
  vector<int> prov;
  for(int i = 0; i < N; i++) {
    int x;
    cin >> x;
    temp.emplace_back(x);
  }

  unordered_map<int, int> m;
  for(int i = 0; i < N; i++) {
    int x; cin >> x; prov.emplace_back(x);
    if (m.find(x) == m.end())
      m[x] = temp[i];
    else 
      m[x] = max(m[x], temp[i]);
  }


  vector<int> wildcard(K);
  for(int i = 0; i < K; i++) {
    cin >> wildcard[i];
  }


  int ans = 0;
  for(int x : wildcard) {
    int index = findIndex(x, prov);
    // cout << m[prov[index]] << " | max at that prov" << endl; 
    if(m[prov[index]] != temp[x - 1])
      ans++;
  }

  sort(all(prov));
  prov.erase(unique(all(prov)), prov.end());
  ans += prov.size();
  cout << ans;

  return 0;
}