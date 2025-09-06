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

long long stringToLL(const string& s) {
    long long num = 0;
    for (char c : s) {
        num = num * 10 + (c - '0');
    }
    return num;
}

int main() {
  boost;
    string N;
    cin >> N;
    
    long long originalNumber = stringToLL(N);
    long long minDifference = LLONG_MAX;

    // Sort the string to ensure all permutations are covered
    sort(N.begin(), N.end());
    
    do {
        // Ensure the permutation does not start with '0'
        if (N[0] != '0') {
            long long permutedNumber = stringToLL(N);
            long long difference = abs(permutedNumber - originalNumber);
            if (difference < minDifference) {
                minDifference = difference;
            }
        }
    } while (next_permutation(N.begin(), N.end()));

    cout << minDifference << endl;


  return 0;
}