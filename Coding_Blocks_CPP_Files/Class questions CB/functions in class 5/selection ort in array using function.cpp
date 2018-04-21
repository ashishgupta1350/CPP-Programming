#include<iostream>
using namespace std;
void arraysort(a[],n)
{
        for(int i=0;i<n-1;i++)
    {
        int smallest=i;
        //finding the min element in remaining thing


    for(int j=i+1;j<=n-1;j++)
    {
        if (a[j]<a[smallest])
            smallest=j;

    }
    //sorting

    int temp=a[i];
    a[i]=a[smallest];
    a[smallest]=temp;

    }

    return //complete it very simple
}
int main()
{
    int i,j,smallest=0;
    int n=10;
    int a[10]={10,20,23,345,32,321,1245,34,5,66};


    //output
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
