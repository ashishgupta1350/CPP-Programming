#include<iostream>
using namespace std;
void myswap(int *ptra,int *ptrb)
{
    int temp;
    temp=*ptra;
    *ptra=*ptrb;
    *ptrb=temp;

}


int main()
{
    int a=10,b=20;
    myswap(&a,&b);
    cout<< a << " "<<b<<endl;//confusing thing is this
/*use call by reference */






}
