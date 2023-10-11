#include <stdio.h>
#define N 10
#define X 7

int main(void)
 {
 int i = 0;
 printf("i mainīgā sākuma vērtība: %d\n",i);

 i = i + 1;
 while(i<=N) // NB! 10 <= 10 rezultāts ir 1 (dec) - nav 0 => cikls vēl nostrādās
   {
   printf("(%d.) i mainīgā nākamā vērtība - %d (un tā ir mazāka par %d)\n",i,i,N);
   if(i == X)
    {
    printf("X vērtība ir \"trapījusies\", viss aprēķinu izbeidam!\n");
    //return 0;
    break;
    //continue; // continue esot šeit - pirms i = i + 1;
    }
   i = i + 1; // NB! obligāti jāmaina i vērtība, savādāk, dabūsim "bezgalīgu" ciklu
   //i++;
   //i += 1;
   }

 printf("(%d.) i mainīgā nākamā vērtība ir kļuvusi lielāla par %d)\n",i,N);
 printf("Viss, skaitīšanu apturam!\n");

 return 0;
 }
