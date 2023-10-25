// https://stackoverflow.com/questions/4176326/arguments-to-main-in-c
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{

    printf("you entered in reverse order:\n");

    while(argc--)
    {
        printf("%s\n",argv[argc]);
        printf("%d\n",atoi(argv[argc]));
    }

return 0;
}
