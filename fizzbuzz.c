
/* if the given range of number are multiples
 * of 3 then print FIZZ or multiples of 5
 * the print BUZZ or if both then FIZZBUZZ */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=1, n=16;

    while (i != n) {

     if (i%3 == 0) {
       
	printf("Fizz\n");
     }
     if (i%5 == 0) {

	printf("Buzz\n");
     }
     if (i%3 == 0 && i%5 == 0) {

	printf("FizzBzz\n");
     }
     else {
     
        printf("%d\n",i);
     }
     i++;
}
}
