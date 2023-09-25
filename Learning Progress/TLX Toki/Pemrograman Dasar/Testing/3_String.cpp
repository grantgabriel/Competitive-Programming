#include <cstdio>
#include <string>
using namespace std;

int main() {
    
    // // Cara reguler membaca 1 token dalam c;
    // char buff[1001];
    // scanf("%s", buff);    
    // std::string s = buff;
    // printf("s = '%s'\n", s.c_str());

    // Cara agar membaca 1 baris dalam c (Mirip getline);
    char buff[1001];
    scanf("%[^\n]\n", buff);    
    std::string s = buff;
    printf("s = '%s'\n", s.c_str());



    return 0;
}