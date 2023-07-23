#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    int numbers[N];
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    sort(numbers, numbers + N);

    for(int i = 0; i < N; i++) {
        bool awal = true;
        if((numbers[i] == numbers[i++] || numbers[i++] == numbers[i]++) && awal == true) {
            int pivot = numbers[i];
        } else if((numbers[i] == numbers[i++] || numbers[i++] == numbers[i]++) && awal == false) {
            int pivot = numbers[i];
        }

    }

    return 0;
}
