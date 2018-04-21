#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    long long int a[100000],b[100000];

    int i,j,k,l;

    bool c[100000];
    int count1=0;
    for(i=0;i<=100000;i++)

    {   c[i]=true;//for this be prime then the statement be true
        a[i]=i;

    }
    c[1]=false;
    c[0]=false;
        for(i=2;i<=100000;i++)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    c[i]=false;
                    break;
                }
            }
        }
        int x,y,testcases;
    cin>>testcases;
    for(int l=1;l<=testcases;l++)
    {

    count1=0;
    cin>>x>>y;

    for(k=x;k<=y;k++)
    {
        if(c[k]==true)
            count1++;
    }

cout<<count1<<endl;

    }


    return 0;
}

