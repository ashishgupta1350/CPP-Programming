#include<iostream>

using namespace std;

int main()
{
    int i,j,a,space,k;
    int num,N;
    cin>>N;
    num=1;
    a=N;
    for(i=1;i<=N;i++)
    {   num=1;

            for(j=1;j<=i;j++)
        {cout<<num;
            num++;
        }


            for(k=(2*a-2);k>=1;k--)
            {
                cout<<" ";

            }

            a-=1;
            num--;

            for(j=1;j<=i;j++)
            {
                cout<<num;
                num--;

            }
            cout<<'\n';

    }





    return 0;
}
