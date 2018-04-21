#include<iostream>
using namespace std;
int first7(int a[],int n,int i)
{
    if(i==n)
        return -1;
    if(a[i]==7)
        return i;

    //recursion

    int index=first7(a,n,i+1);
    return index;

}


int main()
{

    int a[]={1,2,4,5,6,2,3};
    int ans = first7(a,7,0);
    if(ans==-1)
    {
        cout<<"not found"<<endl;
        return 0;
    }

    cout<<"found at index "<< ans<<endl;
    return 0;

}
