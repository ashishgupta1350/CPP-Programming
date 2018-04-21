#include<iostream>
using namespace std;

int main()
{
    long long int m,num=1,i,j,k;
    long long int testcases,a,b,c,count1;

    cin>>testcases;

    for(i=1;i<=testcases;i++)
    {
        cin>>m>>c>>num;//c is for dollars  ,m is for  dollars in pocket, num is for number of wrappers in trade
        count1=0;
        j=1;
        while((((m/c)/num)+(m/c)%num)/num>0)//enter it... it is very important to know when ur loop terminates

        {a=(m/c)/num;
        count1+=a;
        count1+=(((m/c)/num)+(m/c)%num)/num;

        num*=num;

        j++;

        }

    cout<<count1<<endl;
    }








    return 0;
}
