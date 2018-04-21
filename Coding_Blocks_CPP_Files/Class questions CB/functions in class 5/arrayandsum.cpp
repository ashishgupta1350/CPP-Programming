#include<iostream>

using namespace std;

int sumofarray(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    return sum;
}

int main()
{
    int a[100];
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    cout<<" this sum of all the values is " << sumofarray(a,n)<<endl;
    return 0;
}
