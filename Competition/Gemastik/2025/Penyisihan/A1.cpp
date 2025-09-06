#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, k;
  cin >> n >> k;

  int p = pow(2, n);
  if (k == p) return n;

  int ans = 0;
  while (k > 0)
  {
    k /= 2;
    ans++;
  }
  return ans;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
    cout << solve() << "\n";

  return 0;
}