#include <stdio.h>
#define N 3

int main(void)
 {
 //int N;  // NB! nedrīkst!
 //N = 20; // NB! nedrīkst!
 int i = 0;
 printf("i mainīgā sākuma vērtība: %d\n",i);

 //
 i = i + 1; // te ir DIVAS operācijas - piešķiršana un saskaitīšana
            // saskaitīšanai ir lielākā prioritāte => tā tiks
            // izpildīta pirmā un tad + operācijas tiks ievietots
            // atmiņā (vietā, uz kuru norāda identiifkators pa kreisi)
 if(i<=N)
   {
   printf("(1.) i mainīgā nākamā vērtība - %d (un tā ir mazāka par %d)\n",i,N);
   }
 else
   {
   printf("(1.) i mainīgā nākamā vērtība ir kļuvusi lielāla par %d)\n",N);
   printf("Viss, skaitīšanu apturam!\n");
   return 0;
   }

 i = i + 1;
 if(i<=N)
   printf("(2.) i mainīgā nākamā vērtība - %d (un tā ir mazāka par %d)\n",i,N);
 else
   {
   printf("(2.) i mainīgā nākamā vērtība ir kļuvusi lielāla par %d)\n",N);
   printf("Viss, skaitīšanu apturam!\n");
   return 0;
   }


 i = i + 1;
 if(i<=N)
   printf("(3.) i mainīgā nākamā vērtība - %d (un tā ir mazāka par %d)\n",i,N);
 else
   {
   printf("(3.) i mainīgā nākamā vērtība ir kļuvusi lielāla par %d)\n",N);
   printf("Viss, skaitīšanu apturam!\n");
   return 0;
   }

 i = i + 1;
 if(i<=N)
   printf("(4.) i mainīgā nākamā vērtība - %d (un tā ir mazāka par %d)\n",i,N);
 else
   {
   printf("(4.) i mainīgā nākamā vērtība ir kļuvusi lielāla par %d)\n",N);
   printf("Viss, skaitīšanu apturam!\n");
   return 0;
   }

 i = i + 1;
 if(i<=N)
   printf("(5.) i mainīgā nākamā vērtība - %d (un tā ir mazāka par %d)\n",i,N);
 else
   {
   printf("(5.) i mainīgā nākamā vērtība ir kļuvusi lielāla par %d)\n",N);
   printf("Viss, skaitīšanu apturam!\n");
   return 0;
   }

 i = i + 1;
 if(i<=N)
   printf("(6.) i mainīgā nākamā vērtība - %d (un tā ir mazāka par %d)\n",i,N);
 else
   {
   printf("(6.) i mainīgā nākamā vērtība ir kļuvusi lielāla par %d)\n",N);
   printf("Viss, skaitīšanu apturam!\n");
   return 0;
   }

 return 0;
 }
