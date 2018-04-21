#include<iostream>
using namespace std;
int main()
{
   long long  int num,product=1,i,j,a;
    int testcases;
    int count1=0;
        cin>>testcases;

    for(j=1;j<=testcases;j++)

    {
        count1=0;
        cin>>num;
        for(i=1;i<=num;i++)
    {
       long long int k=i;
        while(k%5==0)

        {   count1++;
            k/=5;
        }

    }


    cout<<count1<<endl;
    }

    return 0;
}

