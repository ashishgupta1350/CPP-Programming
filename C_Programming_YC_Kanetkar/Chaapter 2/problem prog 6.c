#include<stdio.h>

int main()

{

    float x,y,r;

    printf(" !CENTER OF CIRCLE IS ORIGIN.. enter the x coordinate , the Y coordinate and the radius of circle    \n");

    scanf("%f%f%f",&x,&y,&r);

    if(x*x+y*y>r)
      printf("point outside");

    else if(x*x+y*y==r)
    printf("lies on the circle");

    else if("x*x+y*y<r")
        printf("lies inside the circle");

    return 0;



}

