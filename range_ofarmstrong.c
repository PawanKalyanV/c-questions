
/* range of armstrong numbers 100 t0 200 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n=100,sum=0, temp;

    temp = n;

    for (n=100; n <= 200; n++) {

    while (n>0) {

      i = n%10;

      sum+= i*i*i;

      n = n/10;
    }
    if (sum == n) {

        printf(" %d\n",sum);
    }
   }
}

