#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,d;
    int e;
    printf("enter  both the numbers to be swaped First enter A and then B ");

    scanf("%d\n%d",&c,&d);

    e=c;
    c=d;
    d=e;

    printf("swaped numbers are A=%d B=%d",c,d);
    return 0;









}
