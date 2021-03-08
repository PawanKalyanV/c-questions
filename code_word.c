
/* code of given string
 * abc = zyx */

#include<stdio.h>

int main()
{
    char s[20];

    scanf("%s",s);

    for (int i=0; s[i] != '\0'; i++) {

    s[i] = 97 -s[i] + 122;

    }

    printf("\n%s  ",s);
}
