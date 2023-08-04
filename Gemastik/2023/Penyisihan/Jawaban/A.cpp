// General solution : Make 2 vector containing the volume of each cup, sort and remove duplicate on one of the vector, 
//                    then do for each edge cases.

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
    boost;

    int N;
    vector<int> cup, cupCopy;
    cin >> N;

    if(N == 1) {
        int x; cin >> x;
        cout << "SESUAI";
        return 0;
    }

    for(int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        cup.push_back(temp);
    }

    cupCopy = cup;

    sort(cupCopy.begin(), cupCopy.end());
    cupCopy.erase(unique(cupCopy.begin(), cupCopy.end()), cupCopy.end());

    if(cupCopy.size() == 1) {
        cout << "SESUAI";
    } else if(cupCopy.size() > 3) {
        cout << "TIDAK SESUAI";
    } else if(cupCopy.size() == 2) {
        int maxVolume = max(cupCopy[0], cupCopy[1]);
        auto it = find(cup.begin(), cup.end(), maxVolume);
        int maxIndex = it - cup.begin();


        int minVolume = min(cupCopy[0], cupCopy[1]);
        it = find(cup.begin(), cup.end(), maxVolume);
        int minIndex = it - cup.begin();
        cout << abs(cupCopy[0] - cupCopy[1]) / 2 << " " << maxIndex + 1 << " " << minIndex;
    } else if(cupCopy.size() == 3) {
        if((cupCopy[0] + cupCopy[2]) / 2 != cupCopy[1]) {
            cout << "TIDAK SESUAI";
        } else {
            auto it = find(cup.begin(), cup.end(), cupCopy[0]);
            int minIndex = it - cup.begin();

            it = find(cup.begin(), cup.end(), cupCopy[2]);
            int maxIndex = it - cup.begin();

            cout << abs(cupCopy[0] - cupCopy[2]) / 2 << " " << maxIndex + 1 << " " << minIndex + 1;
        }
        
    }

    return 0;
}





















// int max_index(int arr[], int sizeOfArray) {
//     int max = 0;
//     for(int i = 0; i < sizeOfArray; i++) {
//         if(arr[max] < arr[i]) max = i;
//     }

//     return max;
// }

// int min_index(int arr[], int sizeOfArray) {
//     int max = 0;
//     for(int i = 0; i < sizeOfArray; i++) {
//         if(arr[max] > arr[i]) max = i;
//     }

//     return max;
// }

// int main() {
//     boost;
    
//     int N;
//     cin >> N;
//     int glass[N];

//     if(N == 1) {
//         cin >> glass[0];
//         cout << "SESUAI";
//         return 0;
//     }
    
//     for(int i = 0; i < N; i++)
//         cin >> glass[i];

//     map<int, int> glassMap;

//     for(int i = 0; i < N; i++) 
//         glassMap[glass[i]]++;

//     if(glassMap.size() == 1) {
//         cout << "SESUAI";
//         return 0;
//     } else if(glassMap.size() == 3) {
//         int arr[3], its = 0, sum = 0;
//         for(const auto& pair : glassMap) {
//             arr[its] = pair.first;
//             sum += arr[its];
//             its++;
//         }   

//         float mean = sum / 3, pivot = -1;
//         for(int i = 0; i < 3;  i++) {
//             if(mean == static_cast<float>(arr[i])) {
//                 pivot = i;
//             }
//         } 

//         if(pivot == -1) cout << "TIDAK SESUAI";
//         else if(arr[static_cast<int>(pivot)] == arr[0]) {
//             int diff = abs(arr[static_cast<int>(pivot)] - arr[1]);
//             cout << diff << " " << max_index(arr, 3) << " " << min_index(arr, 3);
//         } else if(arr[static_cast<int>(pivot)] == arr[1]) {
//             int diff = abs(arr[static_cast<int>(pivot)] - arr[0]);
//             cout << diff << " " << max_index(arr, 3) << " " << min_index(arr, 3);
//         } else if(arr[static_cast<int>(pivot)] == arr[2]) {
//             int diff = abs(arr[static_cast<int>(pivot)] - arr[1]);
//             cout << diff << " " << max_index(arr, 3) << " " << min_index(arr, 3);
//         }


            
//     } else if(glassMap.size() == 2) {
//         int arr[2], it = 0;
//         for(const auto& pair : glassMap) {
//             arr[it] = pair.first;
//             it++;
//         }

//         cout << abs(arr[0] - arr[1]) / 2 << " " << max_index(arr, 2) << " " << min_index(arr, 2);
//     } else {
//         cout << "TIDAK SESUAI";
//     }
    
//     return 0;
// }