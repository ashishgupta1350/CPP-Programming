//this program was written by Ashish Gupta on 19th August 2k16
//this is program to calculate arithematic mean of 2 numbers using pre processor direcives

#include <stdio.h>

#define AMEAN(x,y)((x+y)/2)

int main()

{

    float a,b,mean;

    printf("enter any two numbers whose Arithematic mean you wana observe");

    scanf("%f,%f",&a,&b);

    mean=AMEAN(a,b);

    printf("the mean of the numbers is %f",mean);

    return 0;





}


