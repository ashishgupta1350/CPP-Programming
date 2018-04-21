#include<stdio.h>

int main()
{
    float i,j,product;
    float sum;
product= 1;
sum=0;
    for(j=2;j<=8;j++)

    {
        product=product*(j-1);
        sum=sum+((j-1)/product);


    }

    printf("sum is %f",sum);
    return 0;


}



