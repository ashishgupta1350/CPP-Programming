//this program was made by Ashish Gupta on 18th August 2016

#include <stdio.h>

#define macro

int main ()
{
    printf("this Program intens upon using the if def statement\n");

    #ifdef macroname
    printf("%d",macroname);
    printf("hello I am inside If def\n");
    #endif // macroname

    printf("I am our of ifdef\n");

    return 0;


}
