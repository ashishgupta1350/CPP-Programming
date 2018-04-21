#include<stdio.h>

int main()

{
    float ar,pr,l,b;

    printf("enter the length and breadth ....");

    scanf("%f%f",&l,&b);

    ar=l*b;
    pr= 2*(l+b);

    ar>pr?(printf("area is greater")):(printf("perimeter is greater"));
    return 0;

}
