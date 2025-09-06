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
#define boost                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

void generateSubsetSums(const vector<int> &nums, vector<int> &subsetSums)
{
  int n = nums.size();
  int numOfSubsets = 1 << n;

  for (int i = 0; i < numOfSubsets; ++i)
  {
    int sum = 0;
    for (int j = 0; j < n; ++j)
    {
      if (i & (1 << j))
      {
        sum += nums[j];
      }
    }
    subsetSums.push_back(sum);
  }
}

int closestSum(const vector<int> &nums, int target)
{
  int n = nums.size();
  int half = n / 2;

  vector<int> firstHalfSums, secondHalfSums;
  generateSubsetSums(vector<int>(nums.begin(), nums.begin() + half), firstHalfSums);
  generateSubsetSums(vector<int>(nums.begin() + half, nums.end()), secondHalfSums);

  sort(secondHalfSums.begin(), secondHalfSums.end());

  int closest = INT_MAX, closestSum = 0;

  for (int sum1 : firstHalfSums)
  {
    auto it = lower_bound(secondHalfSums.begin(), secondHalfSums.end(), target - sum1);

    if (it != secondHalfSums.end())
    {
      int sum2 = *it;
      int currentSum = sum1 + sum2;
      if (abs(currentSum - target) < abs(closestSum - target) ||
          (abs(currentSum - target) == abs(closestSum - target) && currentSum < closestSum))
      {
        closest = abs(currentSum - target);
        closestSum = currentSum;
      }
    }
    if (it != secondHalfSums.begin())
    {
      int sum2 = *(--it);
      int currentSum = sum1 + sum2;
      if (abs(currentSum - target) < abs(closestSum - target) ||
          (abs(currentSum - target) == abs(closestSum - target) && currentSum < closestSum))
      {
        closest = abs(currentSum - target);
        closestSum = currentSum;
      }
    }
  }

  return closestSum;
}

int main()
{
  boost;

  int P, N, K;
  cin >> P >> N >> K;

  map<string, vector<int>> m1;
  string temp;
  cin.ignore();
  for (int i = 0; i < P; i++)
  {
    getline(cin, temp);

    for (int j = 0; j < N; j++)
    {
      int htemp;
      cin >> htemp;
      m1[temp].emplace_back(htemp);
    }

    cin.ignore();
  }

  map<string, int> m;

  for (const auto &pair : m1)
  {
    int y = closestSum(pair.second, K);
    m[pair.first] = y;
  }

  int minE = INT_MAX;
  for (const auto &pair : m)
  {
    cout << pair.first << " | " << pair.second << endl;
    minE = min(minE, abs(pair.second - K));
  }

  vector<pair<int, string>> ans;
  for (const auto &pair : m)
  {
    if (abs(pair.second - K) == minE)
      ans.emplace_back(K - pair.second, pair.first);
  }

  std::sort(ans.begin(), ans.end(), [](const std::pair<int, std::string> &a, const std::pair<int, std::string> &b) {
    if (a.first != b.first) {
      return a.first < b.first;
    }
    return a.second < b.second; 
  });

  cout << ans[0].second;

  return 0;
}