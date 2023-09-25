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
    
    string N, decodedN;
    cin >> N;

    for(int i = 0; i < N.length() / 2; i+=2) {
        string temp = "";
        if(N[i] == 'A' && N[i + 1] == 'A') 
            temp += 'AB';
        else if(N[i] == 'A' && N[i + 1] == 'A') 
            temp += 'AB';
        else if(N[i] == 'A' && N[i + 1] == 'A') 
            temp += 'AB';
        else if(N[i] == 'A' && N[i + 1] == 'A') 
            temp += 'AB';
        else if(N[i] == 'A' && N[i + 1] == 'A') 
            temp += 'AB';
    }


    
    return 0;
}