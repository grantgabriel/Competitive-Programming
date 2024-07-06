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
vector<int> temp;

int findIndex(int e) {
  for(int i = 0; i < temp.size(); i++)
    if(temp[i] == e)
      return i + 1;

  return -1;
}

int main() {
  boost;
  
  int N; cin >> N;

  vector<int> cup; int x;
  for(int i = 1; i <= N; i++) {
    cin >> x;
    cup.emplace_back(x);
  }

  temp = cup;
  sort(all(cup));
  int maxE = *max_element(all(cup));
  int minE = *min_element(all(cup));

  if(minE == maxE)
    cout << "SESUAI";
  else {
    int sum = 0;
    for(int x : cup)
      sum += x;

      int avg = (int)((sum - minE - maxE) / (N - 2));
      int avgw = (int)((sum) / (N));
      if(avg != avgw) 
        cout << "TIDAK SESUAI";
      else { 
        cout << (int)((maxE - minE) / 2) << " " << findIndex(maxE) << " " << findIndex(minE);
      }
  }

  return 0;
}