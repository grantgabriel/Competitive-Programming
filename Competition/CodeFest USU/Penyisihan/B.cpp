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
  int t;
  cin >> t;
  while (t--) {
      int n;
      cin >> n;
      vector<int> num(n);
      for (int i = 0; i < n; ++i) {
          cin >> num[i];
      }
      sort(num.begin(), num.end());

      map<int, multiset<int>> mp;
      for (int x : num) {
          if (mp.count(x - 1)) {
              int val = *mp[x - 1].begin();
              mp[x - 1].erase(mp[x - 1].begin());
              if (mp[x - 1].empty()) mp.erase(x - 1);
              mp[x].insert(val + 1);
          } else {
              mp[x].insert(1);
          }
      }

      int res = INT_MAX;
      for (auto &[key, s] : mp) {
          res = min(res, *s.begin());
      }
      cout << (res == INT_MAX ? 0 : res) << '\n';
  }
    return 0;
}
