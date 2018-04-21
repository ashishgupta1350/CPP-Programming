#include <stdio.h>
#include <stdlib.h>
//ques is IF THE TOTAL SELLING PRICE OF 15 ITEMSS AND TOTAL PROFIT IS GIVEN FIND INDIVISUAL COST PRICE OF ITEM....

int main()
{
    float s,p,costprice;
    printf("Enter the total selling price of items:    ");

    scanf("%f",&s);

    printf("Enter the total profit you had:      ");;
    scanf("%f",&p);

    costprice = (s-p)/15;

    printf("cost price of indivisual item is :     %f",costprice);

    return 0;




}
