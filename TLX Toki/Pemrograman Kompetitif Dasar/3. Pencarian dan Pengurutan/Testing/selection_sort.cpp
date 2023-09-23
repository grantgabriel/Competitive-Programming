#include <iostream>
using namespace std;

#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

void selectionSort(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        int leastIndex = i;
        for(int j = i + 1; j < size; j++) {
            if (arr[j] < arr[leastIndex]) {
                leastIndex = j;
            }
        }

        swap(arr[i], arr[leastIndex]);
    }
}

int main() {
    boost;
    
    int arr[] = {1, 4, 7, 2, 5, 7, 8, 2, 0};
    int size = sizeof(arr)/sizeof(int);

    selectionSort(arr, size);

    for(int x : arr) {
        cout << x << " ";
    }     
    
    return 0;
}