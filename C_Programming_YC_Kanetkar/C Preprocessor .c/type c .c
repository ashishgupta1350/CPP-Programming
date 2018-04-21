//this program Is made by Ashish Gupta on 18th August 2k16

#include <stdio.h>
#include <math.h>


#define MACOS

int main()
{
    #ifdef INTEL
    printf("this is INTEL\n");

    #else
    printf("This is MAC os\n");


    #endif // INTEL

    printf("this is common for both intel and mac os");

    return 0;


}
