#include<stdio.h>

int main()
 {
 int i_array_2[3] = {1,2,3};

 printf("masīva i_array_2 adrese: %p\n",i_array_2);

 printf("masīva i_array_2 0. elementa adrese: %p\n",&i_array_2[0]);
 printf("masīva i_array_2 0. elementa vērtība: %d\n",i_array_2[0]);
 printf("masīva i_array_2 0. elementa vērtība: %d\n",*(i_array_2+0));

 printf("masīva i_array_2 1. elementa adrese: %p\n",&i_array_2[1]);
 printf("masīva i_array_2 1. elementa vērtība: %d\n",i_array_2[1]);
 printf("masīva i_array_2 1. elementa vērtība: %d\n",*(i_array_2+1));

 printf("masīva i_array_2 2. elementa adrese: %p\n",&i_array_2[2]);
 printf("masīva i_array_2 2. elementa vērtība: %d\n",i_array_2[2]);
 printf("masīva i_array_2 2. elementa vērtība: %d\n",*(i_array_2+2));

 printf("\n");

 //for(int i = 0;i<5;i++)
 int N_bytes = sizeof(i_array_2);
 int N_elements = N_bytes / sizeof(int);
 for(int i = 0;i<N_elements;i++)
  {
  printf("masīva i_array_2 0. elementa adrese: %p\n",&i_array_2[i]);
  printf("masīva i_array_2 0. elementa vērtība: %d\n",i_array_2[i]);
  printf("masīva i_array_2 0. elementa vērtība: %d\n",*(i_array_2+i));
  }

 /*
 i_array_2[4] = 5;

 for(int i = 0;i<5;i++)
  {
  printf("masīva i_array_2 0. elementa adrese: %p\n",&i_array_2[i]);
  printf("masīva i_array_2 0. elementa vērtība: %d\n",i_array_2[i]);
  printf("masīva i_array_2 0. elementa vērtība: %d\n",*(i_array_2+i));
  }
 */

 return 0;
 }
