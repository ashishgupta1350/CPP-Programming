#include<stdio.h>

int main()

{

	int a,b,diff,i;

	scanf("%d%d",&a,&b);

	diff=a-b;

	i=diff%10;

	if(i<9)

	diff++;

	else

	diff--;

	printf("%d",diff);

	return 0;

}

