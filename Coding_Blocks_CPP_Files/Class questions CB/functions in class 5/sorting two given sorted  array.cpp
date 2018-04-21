#include<iostream>

using namespace std;

int main()
{   int m;
    int n;
  int i,j,k;
    long long int a[10000],b[10000];
    cin>>m>>n;
    for( i=0;i<m;i++)

        {
        cin>>a[i];

    }
        for( j=0;j<n;j++)
    {
        cin>>b[j];/*this is fine*/

    }
    for(i=m,j=n,k=m+n-1;k>=0;)
    {

        while (i>=0,j>=0)
        {
            if(a[i]>b[j])
        {   a[k]=a[i];
            k--;                         /*check thIS PROGRAM*/
            i--;
        }
        else
            {
                a[k]=b[j];
                k--;
                j--;
            }
    }
    if(j==0)
        {a[i]=a[k];


        i--;
        k--;

        }
    else if(i==0)
        {b[j]=a[k];
        j--;
        k--;

    }

    }


a[m+n-1]=(a[m-1]>b[n-1]?a[m-1]:b[n-1]);

    for(int m=0;m<7;m++)
        cout<<a[m]<< " ";
    return 0;


}
