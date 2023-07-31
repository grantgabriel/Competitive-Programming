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
    
    int N;
    cin >> N;
    int glass[N];

    if(N == 1) {
        cin >> glass[0];
        cout << "SESUAI";
        return 0;
    }
    
    for(int i = 0; i < N; i++)
        cin >> glass[i];

    map<int, int> glassMap;

    for(int i = 0; i < N; i++) 
        glassMap[glass[i]]++;

    if(glassMap.size() == 3) {
        int arr[3], its = 0, sum = 0;
        for(const auto& pair : glassMap) {
            arr[its] = pair.first;
            sum += arr[its];
            its++;
        } 

        int pivot
        for(int i = 0; i < 3; i++) {
            if(arr[i] == sum / 3) pivot = arr[i]; 
        }


            
    } else {
        for(const auto& pair : glassMap)
    }



    
    return 0;
}