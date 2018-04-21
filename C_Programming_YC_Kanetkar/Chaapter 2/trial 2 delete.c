#include<stdio.h>

int main()

{
    char c;

    printf("enter character whose values you want to have.....\n");

    scanf("%c",&c);

    printf("the Ascii valuue is %d \n",c);


    int ascii;

    ascii=c;

    printf("%d\n",ascii);

    if(ascii>=65&&ascii<=90)
        printf("capital letters\n");

    else if(ascii>=97&&ascii<=122)
        printf("small case alphabets\n");
            else if(ascii>=48&&ascii<=57)
        printf("digits\n");

       else
        printf("speacial symbols");





    return 0;
}









