
/* how many number of swaps required */

#include<stdio.h>
#include<stdlib.h>

int min_swap(int *arr, int n)
{
    int i, j, temp, count=0;

    for (i=0; i < n; i++) {

      for (j=i+1; j < n; j++) {
         
	 if (arr[i] > arr[j]) {

           temp = arr[i];

	   arr[i] = arr[j];

	   arr[j] = temp;

	   count++;
	 }
      }
    }
    printf("\n%d  ",count);
}

int main()
{
    int n=7;

    int a[7] = {1, 3, 5, 2, 4, 6, 7};

    min_swap(a, n);
}
