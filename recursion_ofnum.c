
/* strong number 
 * i/p: 9856
 * o/p: 9+8+5+6 =28
 *      2+8 =10
 *      1+0 =1
 */

#include<stdio.h>
#include<stdlib.h>

int recursion_ofNum(int n)
{
    int i=0, j=0;

    while (n != 0) {
    
    i = n%10;

    j = j+i;

    n = n/10;
    
    }

    recursion_ofNum(j);

    printf("\n %d \n",n);

}

int main()
{
    recursion_ofNum(9556);
}
