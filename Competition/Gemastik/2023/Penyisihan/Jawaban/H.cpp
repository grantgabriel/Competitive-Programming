#include <iostream>
#include <unordered_set>
#include <vector>
#include <cmath>

using namespace std;

bool isSquare(int n) {
    int sqrt_n = sqrt(n);
    return sqrt_n * sqrt_n == n;
}

int findSmallestK(int N, vector<int>& A) {
    unordered_set<int> squaresSet;
    for (int num : A) {
        if (isSquare(num)) {
            squaresSet.insert(num);
        }
    }

    if (squaresSet.size() < N) {
        return -1;
    }

    for (int K = N; K >= 2; K--) {
        bool containsNonSquare = false;
        for (int i = 0; i <= N - K; i++) {
            bool subsequenceKIsSquare = true;
            for (int j = i; j < i + K; j++) {
                if (squaresSet.find(A[j]) == squaresSet.end()) {
                    subsequenceKIsSquare = false;
                    break;
                }
            }
            if (subsequenceKIsSquare) {
                return K;
            }
        }
    }

    return N;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int result = findSmallestK(N, A);
    cout << result << endl;

    return 0;
}
