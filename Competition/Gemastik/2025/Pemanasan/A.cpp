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
  
  int N; cin >> N;

  vector<int> A;

  for(int i = 0; i < N; i++) {
    int x; cin >> x;
    A.emplace_back(x);
  }

  sort(A.begin(), A.end());
  A.erase(unique(A.begin(), A.end()), A.end());

  vector<string> res;
  for(int i = 0; i < A.size(); i++) {
    int start = A[i];
    int end = A[i];

    while(i + 1 < A.size() && A[i + 1] == A[i] + 1) {
      end = A[i + 1];
      i++;
    }

    if(start == end) {
      res.emplace_back(to_string(start));
    } else {
      res.emplace_back(to_string(start) + "-" + to_string(end));
    }

  }

  for(int i = 0; i < res.size(); i++) {
    cout << res[i];
    if(i != res.size() - 1) cout << ",";
  }
  return 0;
}

