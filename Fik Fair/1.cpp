#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'input' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING_ARRAY firstList
 *  2. STRING_ARRAY secondList
 *  3. STRING needle
 */
int main()
{
    int x; cin >> x;
    string arr1[x];
    for(int i = 0; i < x; i++) {
        cin >> arr1[i];
    }
    
    int y; cin >> y;
    string arr2[y];
    for(int i = 0; i < y; i++) {
        cin >> arr2[i];
    }
    
    string temp; cin >> temp;
    bool tdkada = true;
    
    for(int i = 0; i < x; i++) {
        if(arr1[i] == temp) {
            cout << "satu "; tdkada = false; break;
        }
    }
    
    if(tdkada) {
        cout << "tidak_ada ";
    }
    
    tdkada = true;
    
    for(int i = 0; i < y; i++) {
        if(arr2[i] == temp) {
            cout << "dua"; tdkada = false; break;
        }
    }
    
    if(tdkada) {
        cout << "tidak_ada";
    }
    
    return 0;
}
