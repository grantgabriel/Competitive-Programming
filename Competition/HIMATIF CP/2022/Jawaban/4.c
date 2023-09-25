#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
   char kata[50];
   char sementara;

   printf("Masukkan Sebuah Kata, MAKA AKAN SAYA URUTKAN DIA SESUAI ABJAD !!!! \n");
   printf("Kata : ");
   gets(kata);


   int i, j;
   int n = strlen(kata);

   printf("Kata Sebelum Diurutkan : %s \n", kata);

   for (i = 0; i < n - 1; i++) 
   {
      for (j = i + 1; j < n; j++) 
      {
         if (kata[i] > kata[j]) 
         {
            sementara = kata[i];
            kata[i] = kata[j];
            kata[j] = sementara;
         }
      }
   }
   
   printf("Kata Sesudah diurutkan : %s \n", kata);

   return 0;
}