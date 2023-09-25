#include <cstdio>
#include <cstring>

int main() {
    // // Strcpy -> Mengcopy seluruh isi string ke string lainnya
    // char source[] = "Hello, world!";
    // char destination[20];
    // strcpy(destination, source);

    // // Strncpy -> Mencopy string sampai batas n 
    // char source[] = "Hello, world!";
    // char destination[10];
    // strncpy(destination, source, 5);
    // destination[5] = '\0'; // Manually add null-terminator
    // printf("%s", destination); // Hanya akan menampilkan hello

    // Strstr -> mencari alamat dari sebuah substring 
    char text[] = "Hello, world!";
    char substring[] = "world";
    char *result = strstr(text, substring);
    if (result != NULL) {
        printf("Substring found at index: %ld\n", result - text);
    } else {
        printf("Substring not found.\n");
    }


    return 0;
}