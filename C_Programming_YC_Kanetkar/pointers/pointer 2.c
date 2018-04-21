#include<stdio.h>

int main()
{
    int *p;

    int arr[]={10,20,30,40,50,20,10,5,2,10};
    int i,j,k;

    printf("hello world i am gona use pointers and arrays \n\n");

    p=arr;

        for (i=0;i<=9;i++)
 {
           printf("enter number %d",i);
           scanf("%d",p+i);
}

           int sum=0;


        for(j=0;j<10;j++)

            sum=sum+(*(p+j));

            printf("sum of the numbers using pointers and arrays is %d",sum);

    return 0;

}
