// https://cplusplus.com/reference/cstdio/fopen/

#include <stdio.h>
int main() {
  FILE *pFile;
  char c;

  // uzdevums - faila nosaukuma un atrašanas vietas noskaidrošanas no lietotāja

  // pFile = fopen ("/myfile.txt","w");
  pFile = fopen("myfile.txt", "w");
  if (pFile != NULL) {
    printf("norāde uz failu - %p\n", pFile);
    // https://stackoverflow.com/questions/7988784/how-to-get-a-files-name-from-file-struct-in-c
    // printf ("uz ko norāda norāde - %s\n",*pFile); // faila nosaukumu nevar
    // izgūt
    fputs("fopen - testa ieraksts failā\n", pFile);
    scanf("%c", &c);
    fclose(pFile);
  } else {
    fputs("fopen - failu nav izdevies atvērt\n", stderr);
  }
  return 0;
}
