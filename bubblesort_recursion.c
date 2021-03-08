
/* bubble sort using recursion */

#include<stdio.h>
#include<stdlib.h>

int bubblesort(int *arr, int n)
{
    int i, j, temp;

    i = n;

    if(i>0) {

      for (j=0; j<n-1; j++) {

	 if (arr[j] > arr[j+1]) {

	  temp = arr[j];

	  arr[j] = arr[j+1];

	  arr[j+1] = temp;
	 }
      }
      bubblesort(arr,n-1);
    }
}

int main()
{
    int i, n=5;

    int a[5] = {7, 11, 9, 23, 15};

    bubblesort(a, n);

    for (i=0; i<n; i++) {

     printf(" %d ",a[i]);
    
    }
}
