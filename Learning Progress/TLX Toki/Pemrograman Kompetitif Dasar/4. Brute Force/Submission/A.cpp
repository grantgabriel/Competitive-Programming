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
int N;

string hs(int arr1[], int arr2[]) {
    if (arr1[0][0] != arr2[0][N - 1]) {
        return "";
    }

    return "horizontal";
}

string vt(int &arr1[][], int &arr2[][]) {
  if(arr1[0][0] != arr2[N - 1][0]) return "";

  return "vertikal";
}

string dkn(int &arr1[][], int &arr2[][]) {
  if(arr1[0][0] != arr2[0][0]) return "";

  return "diagonal kanan bawah";
}

string dkr(int &arr1[][], int &arr2[][]) {
  if(arr1[0][0] != arr2[N - 1][N - 1]) return "";

  return "diagonal kiri bawah";
}


int main() {
  boost;
  
  cin >> N >> N;

  int arr1[N][N], arr2[N][N];
  
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      cin >> arr1[i][j];
    }
  }

  cin >> N >> N;

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      cin >> arr2[i][j];
    }
  }
  
  string ans = "";

  ans += hs(arr1, arr2);
  ans += vt(arr1, arr2);
  ans += dkn(arr1, arr2);
  ans += dkr(arr1, arr2);

  cout << ans;

  return 0;
}