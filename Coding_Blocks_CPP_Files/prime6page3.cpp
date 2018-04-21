#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;//size of array
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

       for(int k=0;k<n;k++)
    {for(int j=0;j<n-1;j++)//check this
    {
       if(a[j]>a[j+1])
            {swap(a[j],a[j+1]);}

    }
    }
    int A;


        cin>>A;//number whose sum has to be found;
    int b[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((a[i]+a[j]==A)&&(a[i]<=a[j])&&(i!=j))
            {
                b[k]=a[i];
                b[k+1]=a[j];
                k+=2;

            }
        }
    }
       int m=k;

        for(int l=0;l<m;l+=2)
        {
            cout<<"("<<b[l]<<","<<b[l+1]<<")"<<" ";

        }



    return 0;
}
