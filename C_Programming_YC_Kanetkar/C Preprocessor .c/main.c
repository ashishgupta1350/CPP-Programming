/*testing functions on 9.00 18th august*/

#include<stdio.h>
#define UPPER 8
int main()
{
    printf("this is a finite loop\n");
    int product=1;
    int i;

    for ( i=1;i<=UPPER;i++)
    {
        product=product*i;
        printf("product is %d\n",product);


    }
        printf("hence the final product is %d",product);
        return 0;




}

