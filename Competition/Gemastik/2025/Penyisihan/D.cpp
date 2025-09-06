#include <bits/stdc++.h>
using namespace std;

int main() {
  long long A, B, N;

  cin >> N >> A >> B;
  vector<long long> prices;

  long long price;
  for(long long i = 0; i < N; i++) {
    cin >> price;
    prices.push_back(price);
  }

  sort(prices.begin(), prices.end());
  reverse(prices.begin(), prices.end());

  long long total = 0;

  while(prices.size() >= A + B) {
    for(long long i = 0; i < A; i++) {
      total += prices[i];
    }

    for(long long i = 0; i < A + B; i++) {
      prices.erase(prices.begin());
    }
  }

  for(long long price : prices) {
    total += price;
  }

  cout << total;

  return 0;
}