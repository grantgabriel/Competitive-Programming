#include <iostream>
#include <cstring>
#include <vector>
#include <map>

using namespace std;

void countingSort(int arr[], int size) {
    int fTable[100000];
    memset(fTable, 0, sizeof(fTable));
    for(int i = 0; i < size; i++) {
        int x = arr[i];
        fTable[x] += 1;
    }

    int index = 0;
    for(int i = 0; i < 100000; i++) {
        for(int j = 0; j < fTable[i]; j++) {
            arr[index] = i;
            index += 1;
        }
    }
}

int main() {
    int arr[] = {9, 8, 7, 6, 5, 4, 4, 4, 3, 3, 2, 2, 2, 2, 2, 1};
    int size = sizeof(arr)/sizeof(int);

    countingSort(arr, size);

    for(int i : arr) {
        cout << i << " ";
    }

    return 0;
}