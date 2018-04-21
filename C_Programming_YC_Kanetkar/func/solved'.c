#include<stdio.h>

void function(int *);

int main()
{
    int i=35,*z;
    function(&i);
    printf("%d\n",i);
    return 0;

}
void function(int *m)
{


    printf("%u\n%u\n%u\n",m,m+1,m+2);
}
