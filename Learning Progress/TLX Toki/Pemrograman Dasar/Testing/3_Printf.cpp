#include <cstdio>

int main() {
    bool a = true, b = false, c = true, d = true;
    printf("%d %d %d %d", (a && !b || c && d), ((a || !b) && c || !d), (a || b && !c && d), (a && !d || !c || a && b));


    return 0;
}