/* multiplication without using * operator */

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i, j, n=0;
    printf("Enteri and j: ");
    scanf("%d %d",&i,&j);

    while(j != 0) {

     n = n+i;
     j--;
    }
    printf("\n%d\n",n);
}

