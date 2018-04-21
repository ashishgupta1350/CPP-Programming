
#include<iostream>

using namespace std;

int main()
{
    long long  int n,i;
    cin>>n;//size of array

long long int a[n];
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int k=0;k<n;k++)
    {

        int swap1=0;
        for(int j=0;j<n-1;j++)//check this
    {
       if(a[j]>a[j+1])
            {swap(a[j],a[j+1]);
            swap1++;}
    }
    if (swap1==0)
    {

        break;

    }
    }
    for(int l=0;l<=n-1;l++)
    {
        cout<<a[l]<<" ";
    }


    return 0;
}
