#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> find_longest_prefix(const string& s) {
    int n = s.length();
    vector<int> lps(n, 0);
    int length = 0;
    int i = 1;

    while (i < n) {
        if (s[i] == s[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}

int main() {
    string S;
    cin >> S;
    int Q;
    cin >> Q;

    for (int q = 0; q < Q; q++) {
        int operation, a, b;
        cin >> operation >> a >> b;

        if (operation == 1) {
            char x;
            cin >> x;
            S[a] = x;
        } else if (operation == 0) {
            string substring = S.substr(a, b - a + 1);
            string prefix = substring;
            reverse(substring.begin(), substring.end());
            vector<int> lps = find_longest_prefix(substring);
            int longest_prefix_length = lps.back();

            cout << longest_prefix_length << endl;
        }
    }

    return 0;
}
