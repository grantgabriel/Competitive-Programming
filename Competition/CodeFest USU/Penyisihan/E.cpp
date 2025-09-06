#include <iostream>
#include <string>
#include <sstream>

int main() {
    int c = 0;
    int t = 0;
    int n = 0;
    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    char s;

    while (ss >> s) {
        if (s == '-') {
            n = 1;
        } else if (s >= '0' && s <= '9') {
            t *= 10;
            t += s - '0';
        } else {
            if (n) {
                t *= -1;
            }
            c += t;
            t = 0;
            n = 0;
        }
    }

    if (n) {
        t *= -1;
    }
    c += t;

    std::cout << c << std::endl;

    return 0;
}