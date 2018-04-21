#include <iostream>
using namespace std;
int main()
{
    int n, i,j,k,l,ans;
    int testcases ,count1=0;
    int a[100000];
    cin>>testcases;
    for(i=1;i<=testcases;i++)
    {
        cin>>n;
        for(j=0;j<=2*n;j++)
        {
            cin>>a[j];
        }
        count1 =0;
        for(k=0;k<2*n+1;k++)
        {
            count1 =0;
            for(j=0;j<=2*n;j++)
            {
                if(a[k]==a[j])
                {
                    count1++;
                }
            }
                    if(count1>=2)
                {
                    continue;

                }
                else if(count1==1)
                {
                    ans=a[k];
                    cout<<ans;
                    return 0;
                    }
        }
    }
    return 0;
}
