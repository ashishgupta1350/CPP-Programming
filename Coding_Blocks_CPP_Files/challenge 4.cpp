#include<iostream>
using namespace std;

int main()
{
    int i,j,a,b,c;
    int  N;

    int val=1;
    cin>>N;

    for(i=0;i<N;i++)
        { cout<<val;

         for (j=0;j<i-1;j++)
        {
            cout<<"0";


        }

         if(i>0)
            cout<<val;
        cout<<'\n';
        if(i>0)
        val++;
        }

return 0;

}

