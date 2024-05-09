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

int find(int x, vector<int> &ans) {
  for(int i = 0; i < ans.size(); i++) {
    if(ans[i] == x) return i + 1;
  }
}

bool hasDuplicate(const std::vector<int>& vec, int element) {
    int count = 0;
    for (int num : vec) {
        if (num == element) {
            count++;
            if (count > 1) {
                return true; // Element appears more than once
            }
        }
    }
    return false; // Element appears only once or not at all
}

int main() {
  boost;
  
  int N; cin >> N;
  vector<int> cup(N);
  for(int &x : cup) {
    cin >> x;
  }
  
  vector<int> cupCp = cup;
  sort(cup.begin(), cup.end());
  cup.erase(unique(all(cup)), cup.end());

  if(cup.size() == 1) cout << "SESUAI";
  else if(cup.size() == 2 and N == 2) {
    cout << (abs(cup[0] - cup[1])) / 2 << " ";
    cout << find(cup[1], cupCp) << " " << find((cup[0]), cupCp);
  } else if(cup.size() == 3 and !hasDuplicate(cupCp, cup[0]) and !hasDuplicate(cupCp, cup[2]) and (cup[0] + cup[2]) == (cup[1] * 2)) {
    cout << cup[2] - cup[1] << " ";
    cout << find(cup[2], cupCp) << " " << find(cup[0], cupCp);
  } else {
    cout << "TIDAK SESUAI";
  }

  return 0;
}