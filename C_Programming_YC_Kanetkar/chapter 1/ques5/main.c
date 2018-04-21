#include <stdio.h>
#include <stdlib.h>
int main()
{
    float l,b,ar,pr;

    printf("length and breadth=");
    scanf("%f\n%f",&l,&b);

    ar=l*b;

pr=2*(l+b);
printf("the area of rectangle is%f\n\n\nPerimeter is =%f",ar,pr);

return 0;
}
