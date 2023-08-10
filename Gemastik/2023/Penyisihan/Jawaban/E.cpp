#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> numbers(N);
    int temp;
    for (int i = 0; i < N; ++i) {
        cin >> temp;
        numbers.push_back(temp);
    }

    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    vector<string> step; 
    int j = 0;
    for(int i = 0; i < numbers.size(); i++) {
        bool flag = true; int temp;
        if(numbers[i] + 1 == numbers[i + 1] and flag) {
            flag = false;
            temp = numbers[i];
            while(numbers[i] + 1 == numbers[i + 1]) {
                i++;
            }
        } else if(numbers[i] + 1 != numbers[i + 1]) {
            string tempStr = "";
            tempStr += to_string(temp)+'-'+to_string(numbers[i]);
            step.push_back(tempStr);
        }   
    }

    return 0;
}
