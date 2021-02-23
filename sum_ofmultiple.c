/* calculate sum value of sum(D,N) function */

#include<stdio.h>

int sum(int d, int n)
{
    int i;

    i = sum(d-1, n*(n+1)/2);

    return i;
}

int main()
{
     int D=2, N=3;

     sum(D, N);
}
~     
