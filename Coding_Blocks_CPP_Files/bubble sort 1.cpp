
#include<iostream>

using namespace std;

int main()
{
    int n,i,a[1000];
    cin>>n;//size of array

    for( i=0;i<n;i++)
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
    for(int l=n-1;l>=0;l--)
    {
        cout<<a[l]<<" ";
    }


    return 0;
}
