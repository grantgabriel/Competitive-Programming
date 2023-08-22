#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Pak denny berternak";
    string t1 = "denny";
    string t2 = "pak";
    string t3 = "erna";

    // Find -> turunan fungsi dari string untuk mencari substring 
    cout << s.find(t1) << endl; // Index ke 4
    cout << s.find(t2) << endl; // Garbage karena tidak ditemukan
    cout << s.find(t3) << endl; // Index ke 14

    return 0;
}
