#include <bits/stdc++.h>
using namespace std;

int main() {
  int T; cin >> T;

  int N, K;

  while(T--) {
    cin >> N >> K;

    int ans = 0;
    while(K > 0) {
      K /= 2;
      ans++;
    }

    cout << ans << endl;
  }


  return 0;
}