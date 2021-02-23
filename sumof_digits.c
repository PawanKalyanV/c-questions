/* sum of digits */

#include<stdio.h>

int main()
{
     int i, n, res=0;
     scanf("%d",&n);

     while(n != 0) {

     i = n%10;
     res = res+ i;
     n = n/10;
     }
     printf("%d\n",res);
}
~      
