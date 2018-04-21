#include<stdio.h>

#include<conio.h>

int main()
{int i,j;

int c;

for(i=3;i<=300;i++)


      for(j=2;j<=(i-1);j++)

   {

    c=i%j;

    if(c==0)
    break;

    if(c!=0)
        continue;

        if(j==(i-1))
            printf("%d is prime",i);

    if(i=299)
        printf("prime number %d\n ",i);
   break;

   }





return 0;


}
