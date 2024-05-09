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
  
  ull N; cin >> N;

  int arr[N - 1];

  for(int i = 0; i < N - 1; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + N);

  for(int i = 0; i < N - 2; i++) {
    if(arr[i + 1] - arr[i] != 1) {
      cout << arr[i] + 1;
    }
  }
  
  return 0;
}