#include <iostream>
#include <cstdint>
#include <climits>
using namespace std;

void run_cases() {
	unsigned long long int A, B, C; cin >> A >> B >> C;
	unsigned long long int tempA = A, tempB = B, tempC = C;

	unsigned long long int singleCounter = 0, doubleCounter = 0, affordB = 0, affordA = 0;
	singleCounter = (tempC - (tempC % tempA)) / tempA;
	if(tempC - (singleCounter * tempA) >= tempB) {
		unsigned long long int temp = tempC - (singleCounter * tempA);
		affordB = (temp - (temp % tempB)) / tempB;
	}

	doubleCounter = (tempC - (tempC % tempB)) / tempB;
	if(tempC - (doubleCounter * tempB) >= tempA) {
		unsigned long long int temp = tempC - (doubleCounter * tempB);
		affordA = (temp - (temp % tempA)) / tempA;
	}

	// cerr << "singleCounter : " << singleCounter << endl;
	// cerr << "affordB : " << affordB << endl;
	// cerr << "doubleCounter : " << doubleCounter << endl;
	// cerr << "affordA : " << affordA << endl;


	// singleCounter : 100
	// affordB : 0
	// doubleCounter : 33
	// affordA : 1 

	unsigned long long int bunsCase1 = (singleCounter * 2) + (affordB * 2);
	unsigned long long int pattiesCase1 = (singleCounter) + (affordB *  2);

	unsigned long long int bunsCase2 = (doubleCounter * 2) + (affordA * 2);
	unsigned long long int pattiesCase2 = (doubleCounter * 2) + (affordA);

	// cout << "bunsCase1 : " << bunsCase1 << endl;
	// cout << "pattiesCase1 : " << pattiesCase1 << endl;
	// cout << "bunsCase2 : " << bunsCase2 << endl;
	// cout << "pattiesCase2 : " << pattiesCase2 << endl;

	if(bunsCase1 == 0 and bunsCase2 > 0) {
		cout << bunsCase2 - 1;
	} else if(bunsCase2 == 0 and bunsCase1 > 0) {
		cout << bunsCase1 - 1;
	} else if(bunsCase1 > 0 and bunsCase2 > 0) {
		unsigned long long int kCase1, kCase2;
		(bunsCase1 > pattiesCase1) ? kCase1 = min(pattiesCase1, bunsCase1) : kCase1 = bunsCase1 - 1;
		(bunsCase2 > pattiesCase2) ? kCase2 = min(pattiesCase2, bunsCase2) : kCase2 = bunsCase2 - 1;

		// cout << kCase1 << " " << kCase2 << endl;

		cout << max(kCase1, kCase2);
	} else if(bunsCase1 == 0 and bunsCase2 == 0) {
		cout << "0";
	}

}

int main() {
    unsigned long long int N; cin >> N; unsigned long long int i = 1;
    while(N--) {
		cout << "Case #" << i << ": "; 
        run_cases(); i++; 
		cout << endl;
    }
    
    return 0;
}