#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
    boost;
    
    int n = 100;
int i = 0;
while (n > 1) {
    i = i + 1;
    n = n - (n / 2);
}
printf("%d", i);
    
    return 0;
}