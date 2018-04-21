#include<stdio.h>
void sum(int lol[],int x);

int main()

{
    printf("enter the numbers one by one\n\n\n");

    int *p ;
    int mks[10];
    p=mks;
     int i,j,k;


     for(i=0;i<10;i++)
     {
         printf("enter the value %d     \n",i);
    scanf("%d",p+i);

     }
    sum(mks,10);

        printf("%d",mks[0]);

    return 0;

}
void sum(int lol[],int x)//when i sent marks to the new function it automatically made a copy of it in a new memory location instead of same  memory location

{int i;

for(i=1;i<10;i++)
  {
lol[i]=(lol[i]+1);
printf("%d\n",lol[i]);
  }


}
