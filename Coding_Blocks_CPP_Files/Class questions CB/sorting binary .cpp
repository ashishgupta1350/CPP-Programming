#include<iostream>

using namespace std;
int main()
{

    int i;
    int a[i];
    int j,k,l,num;
    int c0=0,c1=0,count=0;


    cin>>num;

    i=0;
    while(num>0)
    {
        a[i]=num%10;

        if(a[i]==0)
            {
                c0++;

            }
    if(a[i]==1)
            {
                c1++;

            }
            num/=10;

            i++;
            count++;

    }
            i=0;
        while(i<=count)
        {
            cout<<a[i];
            i++;

        }

return 0;

}
