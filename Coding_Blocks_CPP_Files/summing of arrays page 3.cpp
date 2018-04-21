#include<iostream>
using namespace std;
int main()
{
    long long int i,j,k,l;
    long long int m,n;
    long long  int a[100000],b[100000],c[100000];
    cin>>m>>n;

    for(i=1;i<=m;i++)
    {
        cin>>a[i];
        c[i]=0;
        a[0]=0;
        b[0]=0;
    }
      for(i=1;i<=n;i++)
    {
        cin>>b[i];
        c[i]=0;
    }
   long long int sum=0;
    l=(m>n?m:n);
    long long int count1=0;
    if(a[1]+b[1]>9)
        count1++;
    for(i=m,j=n,k=l;k>=1;)//check this
    {
        int x=0;/*check*/
        while (i>=0&&j>=0)
        {
            c[k]+=x/10;
          long long int x=(a[i]+b[j]);
           c[k]+=x%10;
           c[k-1]+=x/10;

            i--;
            j--;
            k--;
        }
        if(i==-1)
        {
            while(j>=0)
            {c[k-1]+=b[j-1]%10;
            c[k-2]+=c[k-1]/10;

            k--;
            j--;
            }
        }
            else if(j==-1)
            {
                while(i>=0)
                {
                    c[k-1]+=a[i-1]%10;
                    c[k-2]+=c[k-1]/10;
                    k--;
                    i--;

                }

            }
            if(i==-2||j==-2)
                break;
        }

    if(count1>0)
    {if(c[0]==1)
    cout<<count1<<" ";
    {for(int y=1;y<=l;y++)
    {

        cout<<c[y]<<" ";
    }}}
    else if(c[0]==0)
    {for(int y=1;y<=l;y++)
    {
        cout<<c[y]<<" ";
    }}
    return 0;
}

