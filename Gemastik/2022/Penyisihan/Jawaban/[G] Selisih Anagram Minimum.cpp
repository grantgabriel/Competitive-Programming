// General solution : Use "next_permutation" and "prev_permutation" to check the minumum. *(!)

#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int main() {
    boost;

    ll N;
    cin >> N;
    string tempNext = to_string(N), tempPrev = to_string(N);

    ll arrayNext, arrayPrev, minimum = 9999999;
    
        (next_permutation(tempNext.begin(), tempNext.end()));
        (prev_permutation(tempPrev.begin(), tempPrev.end()));

        arrayNext = stoll(tempNext);
        arrayPrev = stoll(tempPrev);

        minimum = min(minimum, abs(arrayNext - N));
        minimum = min(minimum, abs(arrayPrev - N));

    cout << minimum;

    return 0;
}

// 313
// 331
// 133


// #include <bits/stdc++.h>
// #define ll long long
// #define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
// using namespace std;

// ll run_cases(string x) {
//     ll minimum = 9999999999;
//     string tempString = x;
//     ll num = stoll(x);

//     sort(tempString.begin(), tempString.end());
    
//     do {
//         ll pivot = stoll(tempString);
//         // cout << pivot << endl;
//         ll difference = abs(num - pivot);

//         if(num != pivot) minimum = min(difference, minimum);
//     } while(next_permutation(tempString.begin(), tempString.end()));

//     return minimum;
// }


// int main() {
//     boost;

//     string N;
//     cin >> N;

//     cout << run_cases(N);

//     return 0;
// }