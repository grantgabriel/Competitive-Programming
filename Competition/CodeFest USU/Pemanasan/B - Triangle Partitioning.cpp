// Solved By       : Grant Gabriel Tambunan
// Connect With Me : https://www.linkedin.com/in/grantgabrieltambunan/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define all(a) a.begin(), a.end()
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
  boost;
  
  int T;
  cin >> T;

  for(int i = 1; i <= T; i++) {
    double AB, AC, BC, r;
    cin >> AB >> AC >> BC >> r;
    double AD = AB * sqrt(r / (1.0 + r));
    cout << fixed << setprecision(10) << "Case " << i << ": " << AD << endl; 
  }
  
  return 0;
}