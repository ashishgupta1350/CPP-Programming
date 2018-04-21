#include<iostream>

using namespace std;

int main()
{
    int b,c;
    int testcases,n,m;//n denotes dollars c=cost and m is wrappers for trade
    cin>>testcases;
    int sum=0;
    for(int i=0;i<=testcases;i++)

    {       sum=0;
         cin>>n>>c>>m;
         int a=n/c;

         int j=1;
        while(a>0)
        {
            sum=sum+a;
            if(j==2)
            {
                break;
            }
            a=a/m;
            b=a%m;
            a=a+b;
            j++;
        }






cout<<sum<<endl;


    }




    return 0;
}
