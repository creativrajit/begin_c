#include <stdio.h>

int main(int argc, char  *argv[])
{
    /*
    int c;
    printf("%d \n", EOF);
    c = getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
    }.      */
    int c;
    while ((c = getchar()) != EOF){
        printf("%d", (c = getchar()) != EOF);
        putchar(c);
    }
    return 0;
}
