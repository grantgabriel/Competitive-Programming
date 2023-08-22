#include <iostream>
using namespace std;

int N, K, arr[10];
bool used[10];

void pwbrankas(int kedalaman) {
    if(kedalaman > N) {
        for(int i = 1; i <= K; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
        return;
    } 

    for(int i = arr[kedalaman - 1] + 1; i <= N; i++) {
        if(used[i] == false) {
            used[i] = true;
            arr[kedalaman] = i;
            pwbrankas(kedalaman + 1);
            used[i] = false;
        }
    }
}

int main() {
    cin >> N >> K;
    pwbrankas(1);

    return 0;
}