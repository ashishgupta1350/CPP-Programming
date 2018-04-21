#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float v,t,wcf;

    printf("enter the velocity     =  \n");
    scanf("%f",&v);

          printf("enter the temperature     =  \n");
    scanf("%f",&t);

    wct=35.74+.6215t+(0.4275-35.75)*v^0.16;

    printf("hence Wind chill factor is    =  %d",wct);

    return 0;
}
