
/*
   The cash machine will only accept the transaction if X is 
   multiple of 5. for each successful transaction bank charges
   0.5$
 */

#include<stdio.h>

int main()
{
     float n = 120;
     int i;
     printf("\nEnter to  withdraw: ");
     scanf("%d",&i);

     if (i > n) {

       printf("\nNOT ENOUGH TO WITHDRAW\n");

     }
     else if (i%5 != 0) {

       printf("\n%.2f\n",n);
     }
     else {

       n = n-i-0.5;

       printf("\n%.2f\n",n);
       }
}

