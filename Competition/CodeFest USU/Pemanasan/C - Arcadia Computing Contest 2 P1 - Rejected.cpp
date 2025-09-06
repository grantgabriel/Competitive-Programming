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
  
  int X, Y, Z;
  cin >> X >> Y >> Z;

  int sum = 0, hund = 0, zero = 0, temp;

  for(int i = 0; i < 6; i++) {
    cin >> temp;

    sum += temp;
    
    if(temp == 100) hund++;

    if(temp == 0) zero++;
  }

  // cout << sum << " " << hund << " " << zero << endl;

  if((sum >= X) && (hund >= Y) && ((6 - zero) >= Z)) {
    cout << "MASTER" << endl;
  } else {
    cout << "REJECTED AGAIN" << endl;
  }

  return 0;
}