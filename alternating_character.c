/* Alternating character */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int c, n=0, end_c=0;

    while ( ( c = getchar()) != EOF) {

        if (c =='A' && end_c == 'A')
                n++;
        if (c =='B' && end_c =='B')
                n++;
        if (c =='B'&& end_c =='A' || c =='A' && end_c =='B')
                end_c = c;
    }
    printf("\n%d",n);
}

