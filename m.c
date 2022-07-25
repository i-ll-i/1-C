#include <stdio.h>

int main()
{
    // int c, nl, br;
    // nl = 0;
    // br = 0;
    // while ((c = getchar()) != EOF) {
    //     if (c == '\t') { nl++; }
    //     if (c == '\n') { br++; }
    // }
    // printf("%d %d\n", nl, br);
    // return 0;

    int nl, nt, c;
 
    nl= 0; nt= 0;
    while ( (c= getchar()) != EOF ) {
        if ( c == '\n' ) { nl++; }
        if ( c == '\t' ) { nt++; }
    }
    
    printf("%d %d\n", nl, nt );
    return 0;
}