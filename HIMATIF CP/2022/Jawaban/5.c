#include <stdio.h>

int main()
{
    int array[22] = {67, 111, 109, 112, 101, 116, 105, 116, 105, 118, 101, 32, 80, 114, 111, 103, 114, 97, 109, 105, 110, 103};
    
    printf("Program Untuk Translate Sebuah Kode, Dari Angka Ke ASCII! \n");
    printf("Kode adalah : \n");
    printf("67 111 109 112 101 116 105 116 105 118 101 32 80 114 111 103 114 97 109 105 110 103 \n");
    printf("Kode Setelah Ditranslate : ");
    

    for(int i = 0; i < 22; i++)
    {
        printf("%c", array[i]);
    }

    return 0;
}