#include<stdio.h>

int main()

{
    int a,b,c;

    for(a=1;a<=30;a++)
   {
        for(b=1;b<=30;b++)
    {for(c=1;c<=30;c++)


    {
        if(a+b>c&&b+c>a&&c+a>b)
       if((a*a)+(b*b)==(c*c))
          printf("%d,%d,%d is the required set\n\t",a,b,c);

          else
            continue;

    }
    }
   }
      return 0;

    }






