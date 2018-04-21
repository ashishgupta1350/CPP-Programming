#include<stdio.h>
int main()
{


int marks[10];
int i,num,count,sum;

printf("enter the marks one by one of 10 students......  \n");

for(i=0;i<=9;i++)

{
  scanf("%f",&marks[i]);
  printf("enter other marks....");
}
printf("thats it\n\n ");

sum=0;

for(i=0;i<=9;i++)
{   printf("%d\t",marks[i]);
    sum=(sum+marks[i]);
    printf("%d\n",sum);

}
printf("ok the sum is %d \n\n",sum);

return 0;


}
