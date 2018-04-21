#include<iostream>
using namespace std;
void mergearray(int x[],int y[],int a[],int s,int e)
{


    mid=(s+e)/2;







}


void mergesort(int a[],int s,int e)
{
    //base case
    if(s>=e)
        return ;
    int mid=(s+e)/2;
    int x[100],y[100]
    for(int i=0;i<=mid;i++)
        x[i]=a[i];
    for(int j=mid+1;j<e;j++)
        y[j]=a[j];
    //recursively sort 2 parts
    mergesort(x,s,mid);
    mergsort(y,mid+1,e);

    mergearray(x,y,a,s,e)
}
int main()
{
    int a;


 return 0;
}
int main()
{
    cout<<"hello world "<<endl;
}
