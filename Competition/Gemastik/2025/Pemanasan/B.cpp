// Solved By       : Grant Gabriel Tambunan
// Connect With Me : https://www.linkedin.com/in/grantgabrieltambunan/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define all(a) a.begin(), a.end()
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
  boost;
  
  map<string, string> table1;
  table1 = {
    {"AA", "AB"},
    {"AB", "DC"},
    {"AC", "CC"},
    {"AD", "CB"},
    {"BA", "CA"},
    {"BB", "DA"},
    {"BC", "CD"},
    {"BD", "DD"},
    {"CA", "BC"},
    {"CB", "AA"},
    {"CC", "BA"},
    {"CD", "DB"},
    {"DA", "BD"},
    {"DB", "AD"},
    {"DC", "BB"},
    {"DD", "AC"},
  }; 
  
  map<string, string> table2;
  table2 = {
    {"AA", "CD"},
    {"AB", "BB"},
    {"AC", "AC"},
    {"AD", "CC"},
    {"BA", "CB"},
    {"BB", "DB"},
    {"BC", "AD"},
    {"BD", "DD"},
    {"CA", "DA"},
    {"CB", "DC"},
    {"CC", "BC"},
    {"CD", "BD"},
    {"DA", "AA"},
    {"DB", "BA"},
    {"DC", "CA"},
    {"DD", "AB"},
  }; 

  string x; cin >> x;
  string ans;

  for(int i = 0; i < x.size(); i += 2) {
    string substring = x.substr(i, 2);
    ans = table1[substring];
    ans = table2[ans];
    cout << ans;
  }
  
  return 0;
}