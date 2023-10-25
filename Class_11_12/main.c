//https://riptutorial.com/c/example/3250/calling-a-function-from-another-c-file

#include "foo.h"
#include <stdio.h>

int main(void)
{
    //char *name_main = "bar"; //NB! šādi nodefinētas simbolu rindas saturu izmainīt vairs nevarēs
    //https://stackoverflow.com/questions/30533439/string-literals-vs-array-of-char-when-initializing-a-pointer
    char name_main[] = "bar";
    printf("name_main atrašanas vieta atmiņā: %p\n", name_main);
    printf("name_main vērtība pirms foo izpildīšanas: %s\n", name_main);

    int id_main = 42;
    printf("id_main atrašanas vieta atmiņā: %p\n", &id_main);
    printf("id_main vērtība pirms foo izpildīšanas: %d\n\n", id_main);

    //foo(42, "bar");
    foo(id_main, name_main);

    printf("\nname_main atrašanas vieta atmiņā: %p\n", name_main);
    printf("name_main vērtība pēc foo izpildīšanas: %s\n", name_main);

    printf("id_main atrašanas vieta atmiņā: %p\n", &id_main);
    printf("id_main vērtība pēc foo izpildīšanas: %d\n\n", id_main);

    return 0;
}
