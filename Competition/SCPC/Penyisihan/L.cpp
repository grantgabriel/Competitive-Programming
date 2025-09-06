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

int main(){
    boost;
    
    int N;
    long long K;
    cin >> N >> K;
    vector<int> A(N);
    for(auto &x : A) cin >> x;
    
    long long count = 0;
    vector<pair<int, long long>> prev;
    
    for(int i=0;i<N;i++){
        vector<pair<int, long long>> curr;
        
        curr.emplace_back(A[i], 1);
        
        for(auto &[val, cnt] : prev){
            int new_and = val & A[i];
            if(!curr.empty() && curr.back().first == new_and){
                curr.back().second += cnt;
            }
            else{
                curr.emplace_back(new_and, cnt);
            }
        }
        
        prev = curr;
        
        for(auto &[val, cnt] : curr){
            if(val == K){
                count += cnt;
            }
        }
    }
    
    cout << count;
}
