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
  
  unordered_map<string, string> mp1 = {
    {"AB", "AA"}, {"DC", "AB"}, {"CC", "AC"}, {"CB", "AD"},
    {"CA", "BA"}, {"DA", "BB"}, {"CD", "BC"}, {"DD", "BD"},
    {"BC", "CA"}, {"AA", "CB"}, {"BA", "CC"}, {"DB", "CD"},
    {"BD", "DA"}, {"AD", "DB"}, {"BB", "DC"}, {"AC", "DD"}
  };  
  
  unordered_map<string, string> mp2 = {
    {"CD", "AA"}, {"BB", "AB"}, {"AC", "AC"}, {"CC", "AD"},
    {"CB", "BA"}, {"DB", "BB"}, {"AD", "BC"}, {"DD", "BD"},
    {"DA", "CA"}, {"DC", "CB"}, {"BC", "CC"}, {"BD", "CD"},
    {"AA", "DA"}, {"BA", "DB"}, {"CA", "DC"}, {"AB", "DD"} 
  };

  string x; cin >> x;

  string ans = "";
  for(int i = 0; i < x.size(); i+=2) {
    string temp = x.substr(i, 2);
    temp = mp2[temp];
    temp = mp1[temp];

    ans += temp;
  }
  
  cout << ans;
  return 0;
}