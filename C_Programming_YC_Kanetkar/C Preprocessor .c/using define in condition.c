//this program is made by ashish gupta on 18th of august
#include<stdio.h>
#define AND &&

#define OR ||
#define ISDIGIT(y)(y>=48 AND y<=57)


int main()

{
    char ch;
    printf("enteer any digit you want to check");

    scanf("%c",&ch);

    if (ISDIGIT(ch))
        printf("valid input");

    else
        printf("you don't know what a digit is ");

    return 0;




}
