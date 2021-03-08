
/* armstrong or not ex: 153
 *   1^3+ 5^3+ 3^3 = 153 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, sum=0, n=153, temp;

    temp=n;

    while (n>0) {

      i = n%10;

      sum+= i*i*i;
      
      n = n/10;
    }
    if (sum == temp) {

	printf("\nArmstrong num\n");
    }
    else {

	printf("\nNot  ");
    }
}
