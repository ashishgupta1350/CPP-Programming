#include<iostream>

using namespace std;
int main()
{
    long long int sum=0,temp=0,i,j,k,x,y,n,m;
    cin>>n>>m;//sizes of arrays a and b;
    cout<<'\n';

    k=(n>m?n:m);
    j=k;


    long long int a[n+m],b[n+m],c[m+n];
    for(int z=0;z<=m+n;z++)
    {
        a[z]=0;
        b[z]=0;
        c[z]=0;
    }

        for(int o=1;o<=n;o++)
        {
            cin>>a[o];
        }
        for(int o=1;o<=n;o++)
        {
            cin>>b[o];

        }

        for(i=n,k=j;i>=0;i--,k--)

        {
                sum=0;
            sum=a[i]+b[j]+temp;
            c[k]=sum%10;
            temp=sum/10;

        }
        for(int l=0;l<j;l++)
        {
            cout<<c[k];

        }


return 0;
}
