/* Number of digits do have */

#include<stdio.h>

int main()
{
     int n, count=0;
     scanf("%d",&n);
     while (n%10 != 0) {
     count++;
     n = n/10;
     }
     printf("%d\n",count);
}

