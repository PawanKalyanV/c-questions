
/* find the maximum of the subset of array
 * {-2 1 3 -4 5}
 * (-2 3 5)
 * (-2 3) (-2 -4) (-2 5) (1 -4) (1 5) (3 5)
 */

#include<stdio.h>
#include<stdlib.h>

int subset_ofarray(int *arr, int n)
{
    int i, j, k=0, l=0;

    for (i = 0; i < n; i++ ) {

      for (j = 1; j < n; j++) {

	  k = arr[i] + arr[j+1];

	  if (l < k) {

	    l = k;
	  }
       }
    }
    printf("\n %d \n",l);
}

int main()
{
    int n=5;

    int a[] = {-2, 1, 3, -4, 5};

    subset_ofarray(a, n);
}
