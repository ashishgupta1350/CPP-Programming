#include<iostream>
using namespace std;
int main()
{
    int num=1;
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<num;
        if(i==1)
        cout<<endl;
    else{
        //cout<<num;
        for(j=0;j<i-2;j++)
        {
            cout<<"0";
        }
        cout<<num<<endl;
    }
        if(i>1)
        {
            num++;
                    }
    }

    return 0;
}
