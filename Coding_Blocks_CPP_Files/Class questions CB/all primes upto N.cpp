#include<iostream>
using namespace std;

int main()
{
    int num,i,j,k;
    int rem;

    cin>>num;

    for(i=2;i<=num;i++)

    {
         for(j=2;j<i;j++)
    {
        rem=i%j;
        if(rem==0)

            {
            break;
            }
    }
    if(rem!=0)
        cout<<i <<"  is prime"<<endl;

}

        cout<<"prime";
        return 0;

}
