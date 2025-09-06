#include <bits/stdc++.h>
#define FOR(a, b, c) for (i32 a = b; a < c; ++a)
#define mFOR(a, b, c) for (i32 a = b; a > c; --a)
#define pii pair<i32, i32>
#define all(x) x.begin(), x.end()
#define pb push_back
using i32 = int32_t;
using i64 = int64_t;
using namespace std;

template<typename T>void print(vector<T>&v,char end=' ',char endf='\n'){for(T &e : v)cout<<e<<end;cout<<endf;}
template<typename T>void print(T var, string end="\n"){cout << var << end;}
template<typename T>void input(vector<T> &v){for(auto &e : v) cin >> e;}
template<typename T>void num_input(T &num){auto c = getchar();num = 0;while (c >= '0' and c <= '9'){num = num * 10 + c - '0';c = getchar();}}

static const auto __optimize__ = []()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	return 0;
}();


void dfs(vector<vector<i32>> &graph, vector<bool> &visited, i32 v)
{
	visited[v] = true;

	for (i32 &ne : graph[v]) if (!visited[ne])
		dfs(graph, visited, ne);
}

void solve()
{
	i32 n, m;
	cin >> n >> m;

	vector<vector<i32>> graph(n);
	vector<bool> visited(n, false);

	while (m--)
	{
		i32 x, y;
		cin >> x >> y;

		graph[x - 1].pb(y - 1);
		graph[y - 1].pb(x - 1);
	}

	i32 cnt = 0, icnt = 0;
	FOR(i, 0, n) if (!visited[i])
	{
		if (graph[i].empty())
		{
			++icnt;
			continue;
		}

		dfs(graph, visited, i);
		++cnt;
	}

	if (icnt > 1) ++cnt;
	print(cnt);
}

i32 main()
{
	solve();

	return 0;
}