#include<iostream>

using namespace std;

int main()
{
    int num,rem,rev;

    cout<<"enter a number to be reversed"<<endl;
    cin>>num;

    rev=0;
    for(rem=0;;)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
        if(num==0)
        {
            break;
        }
    }
    cout<<rev<<endl;

    return 0;

}

