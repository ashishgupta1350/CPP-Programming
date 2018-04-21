#include<iostream>
using namespace std;
int main()
{
    int a[100000],b[100000],n;
    int i;
    int j;
    cin>>n;

    for (i=0;i<n;i++)
    {
        cin>>a[i];

    }
        for(i=0;i<n;i++)
        {
            b[n-i-1]=a[i];
        }


    for (i=0;i<n;i++)
    {
        cout<<b[i]<< " ";

    }

    return 0;
}
