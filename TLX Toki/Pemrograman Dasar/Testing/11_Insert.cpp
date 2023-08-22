#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Pak Dengklek berternak";
    string t = "dan Bu ";
    s.insert(4, t); // Memasukan string / char t ke index 4 dan seterusnya
    cout << s; // Pak dan Bu Dengklek berternak

    return 0;
}