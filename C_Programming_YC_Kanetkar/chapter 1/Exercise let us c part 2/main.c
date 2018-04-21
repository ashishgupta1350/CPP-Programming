#include<stdio.h>
int main()
{


    float km,feet,inch,cm;
    printf("Enter the distance between two cities in kilometers-------");

    scanf("%f",&km);

    cm=km*1000;
    feet=km*4.52;
    inch=km/1000;

    printf("%f cm\n %f feet\n%f inch\n\n\n\n\n\n",cm,feet,inch);
    printf("please visit us Again Soon.....bye........\n\n\n\n\n\n\n\n");


    return 0;



}
