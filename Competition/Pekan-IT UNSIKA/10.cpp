#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v;
    string temp;
    
    while(cin >> temp) {
        v.push_back(temp);
    }
    
    for(auto &r : v) {
        cout << r << endl;
    }
    return 0;
}