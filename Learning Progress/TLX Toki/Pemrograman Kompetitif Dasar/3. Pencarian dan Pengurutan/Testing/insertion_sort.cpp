#include <iostream>
#include <algorithm>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

void insertionSort(int arr[], int size) {
    for(int i = 0; i <= size; i++) {
        int pos = i;
        while(pos >= 1 and (arr[pos] < arr[pos - 1])) {
            swap(arr[pos], arr[pos - 1]);
            pos -= 1;
        }
    }
}

int main() {
    boost;
    
    int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int size = sizeof(arr)/sizeof(int);

    insertionSort(arr, size);

    for(auto x : arr) {
        cout << x << " ";
    }

    return 0;
}