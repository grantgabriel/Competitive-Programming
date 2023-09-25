#include <stdio.h>
#include <string.h>

int main()
{
    char kalimatawal[50];
    char katabaru[50][50];
    int i, j, batas;

    printf("Program Untuk Memisahkan Kata Pada Kalimat \n");
    printf("\n \n");    
 
    printf("Masukkan Sebuah Kalimat : ");
    fgets(kalimatawal, sizeof kalimatawal, stdin);	
 
    j = 0; 
    batas = 0;

    for (i = 0; i <= (strlen(kalimatawal)); i++)
    {
        if (kalimatawal[i]==' ' || kalimatawal[i]=='\0')
        {
            katabaru[batas][j] = '\0';
            batas++;  
            j=0;    
        }
        else
        {
            katabaru[batas][j]= kalimatawal[i];
            j++;
        }
    }

    printf("\n\nKalimat Setelah Dipisah Adalah :\n");
    
    for(i=0; i < batas; i++)
        printf("\"%s\"\n", katabaru[i]);

    return 0;
}