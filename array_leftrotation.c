
/* left rotation of array */

#include<stdio.h>
#include<stdlib.h>

int left_rotation(int arr[], int d, int n )
{
    int i, j, temp;

    for (i = 0; i < d; i++) {

       temp = arr[0];

       for (j = 0; j < n - 1; j++)

         arr[j] = arr[j + 1];

         arr[n-1] = temp;
    }
}

int main()
{
    int i, n=7;

    int a[] = { 1, 2, 3, 4, 5, 6, 7 };

    left_rotation(a, 6, 7);

     for (i = 0; i < n; i++) {

       printf("%d ", a[i]);
    }

}
~  
