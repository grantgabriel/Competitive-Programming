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


// koosaga is drawing a logo for the next iteration of the KAIST contest. He has gotten lazy, so he has taken a rectangle of length X and height Y and drawn the two diagonals of the rectangle, forming four small triangles. He wishes to know the area of one of these triangles in the figure he has drawn.
// If X and y can be 10^9
// Calculate the area of one of the triangles in the figure he has drawn. The answer will be considered correct if the absolute error is less than 10^-6.

int main() {
  boost;
  
  ll X, Y;
  cin >> X >> Y;

  long double area = (double) X / 4.0 * Y;
  cout << fixed << setprecision(2) << area << '\n';
  return 0;
}