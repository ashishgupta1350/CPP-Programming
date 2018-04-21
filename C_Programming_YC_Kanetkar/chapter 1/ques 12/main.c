#include <stdio.h>
#include <stdlib.h>
//enter a five digit number from user and calculate sum of five numbers of digits in let us c ques 7.....
int main()
{
int a,b,c,d,e,f;
printf("enter a 5 digit number only please");

scanf("%d",&a);


b=a/10000;//smartness using hit and trial and not by use of brain......
c=(a/1000)%10;
d=(a/100)%10;
e=(a/10)%10;
f=a%10;
printf("%d \n %d\n %d\n %d\n%d\n",b,c,d,e,f);



printf("your sum of digits is : %d",b+c+d+e+f);

printf("The new number after adding 1 to every digit of your number is : %d%d%d%d%d",b+1,c+1,d+1,e+1,f+1);


return 0;














}
