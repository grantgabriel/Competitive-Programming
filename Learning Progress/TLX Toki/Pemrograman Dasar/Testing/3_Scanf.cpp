#include <cstdio>
#include <string>

char c1, c2, c3;
int bil;

int main() {
    // Untuk memastikan agar tidak terjadi salah scan character (Coba input p q <ENTER> 5 <ENTER> r); 
    scanf("%c %c\n", &c1, &c2);
    scanf("%d\n", &bil);
    scanf("%c", &c3);

    printf("c1 = '%c' c2 = '%c' bil = '%d' c3 = '%c'", c1, c2, bil, c3);
    
    return 0;
}