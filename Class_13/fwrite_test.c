// https://cplusplus.com/reference/cstdio/fwrite/

#include <stdio.h>

int main ()
{
  FILE * pFile;
  //char buffer[] = { 'x' , 'y' , 'z' };

  //int buffer[] = { 0x78 , 0x79 , 0x7a };
  int buffer[] = { 5754489 , -54454 , 87657876 };
  pFile = fopen ("myfile.bin", "wb");
  //fwrite (buffer , sizeof(char), sizeof(buffer), pFile);

  fwrite (buffer , sizeof(int), sizeof(buffer)/sizeof(int) , pFile);

  fclose (pFile);
  return 0;
}
