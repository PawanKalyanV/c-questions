/* Given an unsorted array 'A' of size 'N' of non negative 
   integers. Find a contigeous sub array which adds to
   a given number 'S' */

#include<stdio.h>

int contigeous_array(int *a, int n)
{
     int i=0, j, k=j+1, d=0;

     for (i=0; i<6; i++) {

       for (j=i+1; j<=6; j++) {

         if (a[i] + a[j] == 5) {

            printf("\n{%d, %d}\n", a[i], a[j]);

         }

         else if (a[i] + a[j] < 5) {

          d = a[i] + a[j];

           while (d == 5 || d > 5) {

            d= d + a[k];

            k++;
           }
         }
       }
     }
}

int main()
{
     int n=5;

     int a[6] = {1, 2, 3, 3, 1, 1};

     contigeous_array(a, n);
}

