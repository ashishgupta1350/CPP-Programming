#include<iostream>

using namespace std;

int main()
{
    int N,i,j,a,b,c,d,k;
    int flag;
    int terms,num;
    cin>>N;

    for(i=1;i<=N;i++)
    {
        cin>>terms;

        for(j=1;j<=terms;j++)
        {
        flag=0;
        cin>>a>>b;
        num=1;
        d=b-a;
        for(k=1;k<=terms-2;k++)
        {
            cin>>c;
            if((c-b)!=num*d)
            {
                flag=1;

            }
            num*=2;
            if(k==(terms-2))
            {
                flag=0;
            }
        }
    }


    if(flag==1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    }
return 0;
}
