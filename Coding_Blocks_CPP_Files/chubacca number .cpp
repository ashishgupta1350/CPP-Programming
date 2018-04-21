#include<iostream>

using namespace std;

int main()
{
    int b;

    long long int rev=0,rev2=0,i,j,num;
    cin>>num;
    i=1;
    rev=0;
    long long int a=num;
    while(num>0)
    {
    b=num%10;
    if(b>4)

    {
        b=9-b;
    }

        rev=(rev*10)+b;
        num/=10;
        i++;
    }
    j=1;
    while(rev>0)
    {
        long long int rem=rev%10;
        rev2=(rev2*10)+rem;
        rev/=10;

    }
    cout<<rev2;
    return 0;
}
