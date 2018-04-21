#include<stdio.h>

int main()
{

float a,b,c;
float product;
int i,j,k;

int year=0;
product=1;


int sum=2000;

for(i=1;;i++)

{
    sum=sum+1000;
    year=year+1;

    product=product*((112/100)*i);



    if(product>sum)
    break;
    else
        continue;


}
printf("%d",year);
return 0;

}
