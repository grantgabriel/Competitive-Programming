#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int> 
#define sc set<char>

#define fors(i,s,e) for(long long int i=s;i<e;i++)
#define foro(i,e) for(long long int i=0; i<e; i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define sw swap

template <class T> 
void print_v(vector<T> &v) {
    cout << "{"; 
    for (auto x : v) 
        cout << x << ",";
    cout << "\b}";
}

#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }

string to_upper(string a) {for (int i=0;i<(int)a.size();++i)if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a;}
string to_lower(string a) {for (int i=0;i<(int)a.size();++i)if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a;}

bool prime(ll a) {if (a==1) return 0;for (int i=2;i<=round(sqrt(a));++i)if (a%i==0) return 0; return 1; }

void yes() {cout<<"YES\n";}
void no() {cout<<"NO\n";}
void cs(int n) {cout<<"Case #"<<n;}

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int T;
    int i;
    cin >> T;

    for (i = 1; i <= T; i++) {
        int M, R, N;
        cin >> M >> R >> N;

        vector<int> X(N);
        for (int j = 0; j < N; j++) {
            cin >> X[j];
        }

        int ans = 0;
        i = 0;
        while (i < N) {
            int j = i;
            while (j < N && X[j] - X[i] <= R) {
                j++;
            }
            if (j == i) {
                // unable to cover the next streetlight
                break;
            }
            // place bulb at X[j-1]
            ans++;
            int p = j - 1;
            while (p < N && X[p] - X[j-1] <= R) {
                p++;
            }
            i = p - 1;
        }
        if (i < N && X[N-1] - X[i] > R) {
            // unable to cover the last segment
            cout << "Case #" << i << ": IMPOSSIBLE" << endl;
        } else {
            cout << "Case #" << i << ": " << ans << endl;
        }
    }

    return 0;
}