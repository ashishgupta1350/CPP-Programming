#include <stdio.h>
#include <stdlib.h>
//sum of first and last digit of 4 digit number
int main()

{
    int a,b,c,d,e,f,g,h;

    printf("enter a 4 digit number please to calculate sum o 1st and last digit:-   ");

    scanf("%d",&a);

    b=a/1000;
    c=a%10;
    printf("%d\n%d\n",b,c);
    printf("ohk i got your answer    . The answer is :   %d",b+c);
    return 0;


}
