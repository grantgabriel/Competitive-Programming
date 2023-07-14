#include <iostream>

using namespace std;

unsigned long long int faktorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }

    return n * faktorial(n - 1);
}

unsigned long long int kombinasi(int a, int b){
    return faktorial(a) / (faktorial(b) * faktorial(a - b));
}

int main(){
    int N, pivot = 0;
    unsigned long long int jumlah = 0;

    cin >> N;

    if(N % 2 == 0){
        for(int i = N; i >= N / 2; i--){
            jumlah += kombinasi(i, pivot);
            pivot++;
            // cout << "Jumlah : " << jumlah << "\n";
        }
    }else{
        for(int i = N; i >= N / 2 + 1; i--){
            jumlah += kombinasi(i, pivot);
            pivot++;
            // cout << "Jumlah : " << jumlah << "\n";
        }
    }

    cout << (jumlah * jumlah) % 1000000007 << endl;

    return 0;
}