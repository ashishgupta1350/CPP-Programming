//this program was written by Ashish Gupta on 19th August 2016

#include <stdio.h>

#define COMPARE(x)(x>=65&&x<=91)
#define SMALLCASE(y) (y>=97&&y<=122)
int main()
{
    char ch;
    char yon;

    char y,n;

    printf("Enter any character\n ");

    scanf("%c",&ch);

    if (COMPARE(ch))
        printf("The big case letters were entered\n");

    else if(SMALLCASE(ch))
        printf("The small case letter was entered\n");

        else
            printf("anything except alphabets big or small was entered");

         scanf("%c",&yon);

        printf("do you want to continue (y/n)\n");




        scanf("%c",&yon);

        if (yon==y)
       {
        main();
       }
        else
            printf("program Terminated. Press any key to exit ");




    return 0;

}
