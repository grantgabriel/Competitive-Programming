#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ,i ,langkah = 0, lomp;
    printf("Berikan Lokasi Terakhir Kucing : ");
    scanf("%d", &x);

    if(x > 0)
    {
        lomp = 2*x;
    }
    else
    {
        lomp = 2 * abs(x) + 1;
    }

    for (i = 1; i < lomp; i++)
    {
        langkah = langkah + i;
    }

    printf("Kucing Telah Melangkah Sebanyak %d Langkah Jika Diumpamakan Di Diagram Cartesius",langkah);
}