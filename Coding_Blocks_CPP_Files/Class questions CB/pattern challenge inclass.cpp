
#include<iostream>

using namespace std;

int main()
{
    int i,j,k,l,m,n;

    int N;
    cin>>N;

    for (i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";

        }
        cout<<" ";

        for (k=1;k<=N-i+1;k++)
     {
         cout<<"*";

     }
         cout<<" ";

    for (k=1;k<=N-i+1;k++)
     {
         cout<<"*";

     }
     cout<<" ";

         for(l=1;l<=i;l++)
        {
            cout<<"*";
        }

            cout<<'\n';

    }

    return 0;

}
