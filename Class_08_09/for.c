#include <stdio.h>
#define N 10
#define X 7

int main(void)
 {
 int i = 0;
 printf("i mainīgā sākuma vērtība: %d\n",i);

 for( i=1  ;i<=N; i++ )
   {
   printf("(%d.) i mainīgā nākamā vērtība - %d (un tā ir mazāka par %d)\n",i,i,N);
   if(i == X)
    {
    printf("X vērtība ir \"trapījusies\", viss aprēķinu izbeidam!\n");
    break;
    }
   }

 printf("(%d.) i mainīgā nākamā vērtība ir kļuvusi lielāla par %d)\n",i,N);
 printf("Viss, skaitīšanu apturam!\n");

 return 0;
 }
