#include <stdio.h>
#include <stdlib.h>
//  QUESTION IS IF LENGTH OF 3 SIDES OF TRIANGLE IS ENTERED FIND THE AREA OF THE TRIANGLE;
//date 3/8/16
//Author Ashish Gupta.....

int main()
{
  float s1,s2,s3,s;
  float area;

  printf(" enter the length of side 1    ");
  scanf("%f",&s1);

   printf(" enter the length of side 2   ");
  scanf("%f",&s2);

   printf(" enter the length of side 3    ");
  scanf("%f",&s3);

  s=(s1+s2+s3 )/3;

  area = ((s)*(s-s1)*(s-s2)*(s-s3));     //herons formula is applicable

  printf("Your area of triangle is     %f",area);
  return 0;





}
