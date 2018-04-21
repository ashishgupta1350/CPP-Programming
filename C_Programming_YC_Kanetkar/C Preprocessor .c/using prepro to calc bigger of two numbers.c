//this program was written by Ashish Gupta on  19th August  2016

#include<stdio.h>

#define GREATER(a,b) (a>b)
int main()
{


    int x,y;

    printf("enter any tow numbers in Following order   (a,b)\n");

    scanf("%f %f",&x,&y);

    if(GREATER(x,y))
        printf("x was greater than y");

    else
        printf("y was  greater than or equal to x");

    return 0;



}
