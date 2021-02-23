/* decimal to binary */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int dec=10, temp, i, j=1, binary=0 ;

    temp = dec;

    while(temp != 0) {

       i = temp%2;

       binary = binary + (i*j);

       temp = temp/2;

       j = j*10;

    }
    printf("\n %d %d ",dec,binary);

}
~   
