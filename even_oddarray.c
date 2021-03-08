
/* Separate Even and odd in an array */

#include<stdio.h>
#include<stdlib.h>

int in_array (int *arr, int n)
{
    int i;

    for (i=0; i < n; i++) {

       if (arr[i]%2 == 0) {

	  printf(" %d ",arr[i]);
       }
    }

       printf("\n");

     for (i=0; i < n; i++) {

       if (arr[i]%2 == 1) {
	  printf("%d ",arr[i]);
       }
     }
    
}

int main()
{
    int n=6;

    int a[6] = {8, 11, 15, 16, 19, 6};

    in_array (a, n);
}
