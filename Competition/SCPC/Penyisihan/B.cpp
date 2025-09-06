#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<long long> D(N - 1);
    for (int i = 0; i < N - 1; ++i) {
        cin >> D[i];
    }
    
    vector<long long> T(N);
    for (int i = 0; i < N; ++i) {
        cin >> T[i];
    }
    
    vector<long long> prefix_sum(N, 0);
    for (int i = 1; i < N; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + D[i - 1];
    }
    
    long long total_time = 0;
    long long last_position = 0;
    long long farthest_position = 0;
    
    for (int i = 0; i < N; ++i) {
        if (T[i] != -1) {
            total_time = max(total_time, prefix_sum[i]) + T[i];
            farthest_position = max(farthest_position, prefix_sum[i]);
        }
    }
    
    total_time = max(total_time, 2 * farthest_position);
    
    cout << total_time << endl;
    
    return 0;
}