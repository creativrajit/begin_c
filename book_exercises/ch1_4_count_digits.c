#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ndigit[10];
    int nother, nwhite, c, i;

    nother = nwhite = 0;
    for(i =0; i< 10; ++i){
        ndigit[i] = 0;
    }


    while((c = getchar()) != EOF){

        if (atoi(c) >= 0 && atoi(c) <= 10)
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    for(i=0; i<10; ++i){
        printf(" %d", ndigit[i]);
    }
    printf("\nNumber of white spaces: %d", nwhite);
    printf("\nNumber of other characters: %d", nother);

    return 0;
}
