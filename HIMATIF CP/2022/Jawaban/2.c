#include <stdio.h>

int main()
{
    int input, sementara;
    int aa = 0, bb = 0, cc = 0, dd = 0, ee = 0, ff = 0, gg = 0, hh = 0, ii = 0, jj = 0;

    printf("Masukkan Nilai Uang (Diantara 1 Sampai 10000), Maka Akan Saya Pecahkan! \n");
    printf("Jumlah uang : ");
    scanf("%d", &input);

    sementara = input;

    if (input <= 10000 && input >= 1)
    {
        while (sementara >= 1000)
        {
            sementara = sementara - 1000;
            jj = jj + 1;
        }
        while (sementara >= 500)
        {
            sementara = sementara - 500;
            ii = ii + 1;
        }
        while (sementara >= 200)
        {
            sementara = sementara - 200;
            hh = hh + 1;
        }
        while (sementara >= 100)
        {
            sementara = sementara - 100;
            gg = gg + 1;
        }
        while (sementara >= 50)
        {
            sementara = sementara - 50;
            ff = ff + 1;
        }
        while (sementara >= 20)
        {
            sementara = sementara - 20;
            ee = ee + 1;
        }
        while (sementara >= 10)
        {
            sementara = sementara - 10;
            dd = dd + 1;
        }
        while (sementara >= 5)
        {
            sementara = sementara - 5;
            cc = cc + 1;
        }
        while (sementara >= 2)
        {
            sementara = sementara - 2;
            bb = bb + 1;
        }
        while (sementara >= 1)
        {
            sementara = sementara - 1;
            aa = aa + 1;
        }

        printf("Dibutuhkan Koin Sebanyak : \n");

        if (jj > 0)
            printf("1000 = %dx \n", jj);
        if (ii > 0)
            printf("500 = %dx \n", ii);
        if (hh > 0)
            printf("200 = %dx \n", hh);
        if (gg > 0)
            printf("100 = %dx \n", gg);
        if (ff > 0)
            printf("50 = %dx \n", ff);
        if (ee > 0)
            printf("20 = %dx \n", ee);
        if (dd > 0)
            printf("10 = %dx \n", dd);
        if (cc > 0)
            printf("5 = %dx \n", cc);
        if (bb > 0)
            printf("2 = %dx \n", bb);
        if (aa > 0)
            printf("1 = %dx \n", aa);
    }
    else
    {
        printf("Nilai uang tidak sesuai kriteria!");
    }

    return 0;
}