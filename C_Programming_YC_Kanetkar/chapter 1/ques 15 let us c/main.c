#include <stdio.h>
#include <stdlib.h>
#include<math.h>//in thi program using atan and asin or acos is because of math.h

//sqrt is used in math.h....:)
int main()
{
    float x,y,r,angle;

    printf("Enter the x part of cartesian coordinate   ");

    scanf("%f",&x);

    printf("enter the y part of cartesian coordinate   ");

    scanf("%f",&y);

    r = sqrt(x*x+y*y);//radial polar distance

    angle = atan(y/x);//angle in polar form

    printf(" Hence the' r,angle'   form of the above coordinate system is ====== ");
    printf("'%f, %f'",r,angle);

    return 0;

}
