#include<iostream>
using namespace std;

int main()
{
    int N;
    int i,j,k,l,spaces=0;
    cin>>N;
    for(i=1;i<=N+1;i++)
        {
            for(spaces=0;spaces<=N-i;spaces++)
        cout<<" ";
    cout<<"*";
    if(i==1)
        cout<<'\n';

    for(j=1;j<=2*i-3;j++)
        {
           cout<<" ";

        }
        if(i>1)
            cout<<"*"<<endl;

        }


        for(i=1;i<=N;i++)

            {
                for(k=1;k<=i;k++)
                cout<<" ";
                cout<<"*";

                for(j=1;j<=2*(N-i)-1;j++)
                cout<<" ";
             if(i<N)
        cout<<"*"<<endl;

            }

return 0;
}
