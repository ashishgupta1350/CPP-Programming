#include<iostream>
using namespace std;
void mergesortedarrays(int *a,int b[],int m,int n,int p)
{
    ///base case
    if(n<0)
        return ;
    else if(m<0)
    {
        while(p>=0)
        {
            a[p]=b[n];
            p--;
            n--;
        }
        return;
    }
    ///recursive case
    if(a[m]>b[n])
    {
        a[p]=a[m];
        mergesortedarrays(a,b,m-1,n,p-1);
    }
    else
    {
        a[p]=b[n];
        mergesortedarrays(a,b,m,n-1,p-1);
    }
    }
int main()
{
    int a[100]={2,4,6,8,9};
    int b[1000]={-1,0,2,3};

    mergesortedarrays(a,b,4,3,8);
    for(int i=0;i<8;i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;

    return 0;
}
