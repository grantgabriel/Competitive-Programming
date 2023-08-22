#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;

char s[50];
int arr[50];
int testing[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};

int main() {
    memset(s, 'x', sizeof(s)); // Akan membuat setiap index dalam array s menjadi 'x'
    memset(arr, -1, sizeof(arr)); // Akan membuat setiap index dalam array menjadi -1
    // cout << s << endl << arr[0] << endl << arr[1];
    memset(testing, -1, 12); // 12 adalah 3 byte, maka 3 angka pertama (index 0, 1, 2) akan diubah menjadi -1

    for(auto &v : testing) {
        cout << v << " ";
    }

    
    return 0;
}