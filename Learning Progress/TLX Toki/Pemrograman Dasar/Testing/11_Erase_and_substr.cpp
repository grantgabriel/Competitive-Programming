#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Pak opim berternak";
    string substring1 = s.substr(0, 6); // Pak op
    string substring2 = s.substr(2, 3); // k o

    s.erase(1, 3); // Menghapus dari index 1 sebanyak 3 karakter

    cout << substring1 << endl;
    cout << substring2 << endl;
    cout << s; // Popim berternak

    return 0;
}