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
  
  int N, Q;
  cin >> N >> Q;

  unordered_map<string, int> urutan; vector<string> line(Q);

  for(int i = 1; i <= N; i++) {
    string temp; cin >> temp;
    urutan[temp] = i;
  }

  for(auto &x : line)
    cin >> x;

  for(string x : line) {
    if(urutan[x])
      cout << urutan[x] << endl;
    else
      cout << -1 << endl;
  }
  
  return 0;
}