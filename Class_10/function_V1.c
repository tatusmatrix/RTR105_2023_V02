// https://cplusplus.com/reference/ctime/time/
// https://cplusplus.com/reference/cstdlib/rand/
// https://cplusplus.com/reference/cstdlib/srand/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void genereeshana(void);

int main(void)
 {
 printf("Funkcijas genereeshana() 1. izsaukšana:\n");
 genereeshana();

 printf("Funkcijas genereeshana() 2. izsaukšana:\n");
 genereeshana();
 return 0;
 }

void genereeshana(void)
 {
 int flag = 1;
 long long int counter, counter_sum = 0;;
 int gadiijuma_skaitlju_generatora_grauds;

 gadiijuma_skaitlju_generatora_grauds = time(NULL); // laiks sekundēs kopš 01.01.1970 00:00
 srand(gadiijuma_skaitlju_generatora_grauds);
 //srand(10);

 printf("Laiks sekundēs kopš 01.01.1970 00:00 - %d\n",gadiijuma_skaitlju_generatora_grauds);

 for(int i=0;i<3;i++)
  {
  counter = 1;
  flag = rand();
  while( flag ) // i == 5, ja i = 6 => 6 == 5 -> 0000 0000  0000 0000  0000 0000  0000 0000
   {
   //printf("flag = %d \n",flag);
   counter++;
   flag = rand();
   }
  printf("counter = %lld (pēc cikla)\n",counter);
  counter_sum = counter_sum + counter;
  printf("counter_sum = %lld\n",counter_sum);
  }
 }
