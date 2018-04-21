#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,m;
    int num;


    num=0;



 for(i=1;i<=5;i++)

 {   for(j=8;j>=i;j--)

    {printf(" ");}

  for(k=2;k<=i;k++)
       {
     num=num+1;


        printf("%d",num);
        printf(" ");
       }

      num++;
        if(i==5)
            break;

        printf("%d\n",num);
   }
 return 0;










}

