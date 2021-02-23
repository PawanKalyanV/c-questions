/* To find the pair of numbers
 * 1 2 2 3 4 4 
 * 2 set */

#include<stdio.h>
#include<stdlib.h>


int of_pair(int *arr, int n)
{
    int i, j, k=0,  count=0;

    for (i=0; i<n; i++) {

     for (j=i+1; j<n; j++) {

        if(arr[i] == arr[j]){
         count++;
        }
        n = count/2;
        k = k + n;
     }
    }
}

int main()
{
   int n=6;
   int a[6] = { 1, 2, 2, 3, 4, 4 };
   of_pair(a, n);
}

