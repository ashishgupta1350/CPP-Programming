#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a,b,c,d,e,f,g,h,i;

   a<=100;
   b<=100;
   c<=100;
   d<=100;
   e<=100;

   printf("enter marks in subject 1    ");
   scanf("%f",&a);
   printf("enter marks in subject 2    ");
   scanf("%f",&b);
      printf("enter marks in subject 3    ");
   scanf("%f",&c);
   printf("enter marks in subject 4    ");
   scanf("%f",&d);
      printf("enter marks in subject 5    ");
   scanf("%f",&e);

   f=(a+b+c+d+e)/5.0;

   printf("your aggregate of marks is ::: %f\n\n\n\n\n\n",f);
    printf("your percentage of marks is ::: %f percent\n\n\n\n\n",f);

     printf("You could have Done better......\n");


   return 0;


}
