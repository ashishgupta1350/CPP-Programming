#include<stdio.h>
#include<conio.h>

int main()

{printf("this program was created By Ashish Gupta 1051\n");

printf("All Rights are reserved\n\n");
    int p,n;//p and n are principle and number of years...

    float r,si;//r is rate and si is simple intrest

    printf("enter the principle   Also Enter the number of years\n");

    scanf("%d%d",&p,&n);

    r=12.5;

    /*formula for simple interest is*/

    si=p*n*r/100;

    printf("The rate is taken as 12.5 percent... Hence  Simple interest is %f \n thanks for using C 2",si);
    getch();

    return 0;




}
