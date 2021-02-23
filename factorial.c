/* factorial of a number */

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    while(n != 0) {

    n = n*n-1;
    n--;
    }
    printf("%d",n);
}

