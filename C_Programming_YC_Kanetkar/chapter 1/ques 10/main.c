#include<stdio.h>

int main()
//program for calculating the minimum  number of notes in a !sum of rupees N!
{

    int N,a,b,c,d,e,f,g,h,i,j,k;

    printf("Enter a number to calculate min number of notes :   ");

    scanf("%d",&N);

    a = (N/100);//here used concept is that when i divide two integers it will always give me a integer...
                //the number of 100 rs notes required .....
    b = (N%100);//this gives me the rest of the 2 last digits which the user had entered..

    c = (b/50);
    d=b%50;

    e=d/10;//this number is used in sum
    f=d%10;
    g=f/5;//addd the number

    h=f%5;
    i=h/2;//add the number
    j=h%2;//add the number





printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f,g,h,i,j);
printf("the Smallest Number of total currency notes required is   =======   %d\n\n\n\n\n\n\n\n\n",a+c+e+g+i+j);


    return 0;


}
