#include<iostream>
using namespace std;
int main()
{
    int num;






    for(i=m,j=n,k=m+n-1;i>=0,j>=0;)
    {
        if(i>-1&&j>-1)
        {
            if(a[i]>=b[j])
        {
            a[k]=a[i];
            k--;
            i--;
        }
        else if(b[j]>a[i])
        {
            a[k]=b[i];
            k--;
            j--;
        }
        }



         if(i=-1)
        {
            int l=j,m=k;
            for(j=l;j>=0;j--)

            {b[j]=a[k];
            k--;
            j--;
            }
            break;
        }

        else if(j=-1)
        {
            int l=i;m=k;
            for(i=l;i>=0;i--)

            {b[i]=a[k];
            k--;
            j--;
            }
            break;
        }

    }
    for(k=0;k<=m+n-1;k++)
    {
        cout<<a[k]<<" ";
    }










    return 0;
}
