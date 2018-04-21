#include<stdio.h>

int main()
{
    int a[10];
    int *pa;

    int num;
    int i;
    int  b,c,d;
    num=10;

    for(i=1;i<=9;i++)
    {
        num+=1;
        a[i]=num;

    }
    pa=a;



    printf("print the following VALUE OF ARRAY(11)%d \n  ",a[1]);

    printf("print the following VALUE OF ARRAY %d\n ",*(a+i));
    printf("print the following  VALUE OF ARRAY(10) %d\n ",*pa);
    printf("print the following  ADRESS OF A %x\n",&a[1]);
    printf("print the following ADRESS OF A %x\n ",(a));
    printf("print the following  ADRESS USING POINTERS %x\n",pa+i);

    return 0;

}
