#include <stdio.h>
#include <stdlib.h>
//print reverse of entered five digit number......


int main()
{int a,b,c,d,e,f,g,h,i;

    printf("enter a five digit number please:-  ");

    scanf("%d",&a);

    b=a/10000;
    c=(a/1000)%10;
    d=(a/100)%10;
    e=(a/10)%10;
    f=a%10;
    printf("%d\n%d\n%d\n%d\n%d\n",b,c,d,e,f);

    printf("yeah i got it your number in reverse is %d%d%d%d%d",f,e,d,c,b);

    return 0;

}
