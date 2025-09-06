/*

$$\      $$\                 $$\               $$\           
$$ | $\  $$ |                $$ |              $$ |          
$$ |$$$\ $$ | $$$$$$\  $$\ $$$$$$\   $$\   $$\ $$ | $$$$$$\  
$$ $$ $$\$$ |$$  _$$\ \|\$$  |  $$ |  $$ |$$ | \_$$\ 
$$$$  _$$$$ |$$ /  $$ |$$\   $$ |    $$ |  $$ |$$ | $$$$$$$ |
$$$  / \$$$ |$$ |  $$ |$$ |  $$ |$$\ $$ |  $$ |$$ |$$  __$$ |
$$  /   \$$ |\$$$$$$  |$$ |  \$$$$  |\$$$$$$$ |$$ |\$$$$$$$ |
\/     \| \/ $$ |   \/  \$$ |\| \_|
                 $$\   $$ |          $$\   $$ |              
                 \$$$$$$  |          \$$$$$$  |              
                  \/            \/               
*/

#include <bits/stdc++.h>
#define FOR(a, b, c) for (int a = b; a < c; ++a)
#define mFOR(a, b, c) for (int a = b; a > c; --a)
#define pii pair<int, int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define sit set<int>::iterator
using i64 = long long;
using namespace std;

template<typename T>void print(vector<T>&v,string end=" ",string endf="\n"){for(T &e : v)cout<<e<<end;cout<<endf;}
template<typename T>void print(T var, string end="\n"){cout << var << end;}
template<typename T>void input(vector<T> &v){for(T &e : v){cin >> e;--e;}}
template<typename T>void num_input(T &num){auto c = getchar();num = 0;while (c >= '0' and c <= '9'){num = num * 10 + c - '0';c = getchar();}}

static const auto _optimize_ = []()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	return 0;
}();

const int MOD = 998244353;
const int INF = numeric_limits<int>::max();

unordered_map<string, string> ump1 = {
  {"CD", "AA"},
  {"BB", "AB"},
  {"AC", "AC"},
  {"CC", "AD"},
  {"CB", "BA"},
  {"DB", "BB"},
  {"AD", "BC"},
  {"DB", "BB"},
  {"DD", "BD"},
  {"DA", "CA"},
  {"DC", "CB"},
  {"BC", "CC"},
  {"BD", "CD"},
  {"AA", "DA"},
  {"BA", "DB"},
  {"CA", "DC"},
  {"AB", "DD"},
};

unordered_map<string, string> ump2 = {
  {"AB", "AA"},
  {"DC", "AB"},
  {"CC", "AC"},
  {"CB", "AD"},
  {"CA", "BA"},
  {"DA", "BB"},
  {"CD", "BC"},
  {"DD", "BD"},
  {"BC", "CA"},
  {"AA", "CB"},
  {"BA", "CC"},
  {"DB", "CD"},
  {"BD", "DA"},
  {"AD", "DB"},
  {"BB", "DC"},
  {"AC", "DD"},
};


void solve()
{
    string st;
    cin >> st;

    for (int i = 0; i < st.size(); i += 2)
    {
        string res = ump2[ump1[st.substr(i, 2)]];
        cout << res;
    }
}


int main()
{
    solve();

    return 0;
}