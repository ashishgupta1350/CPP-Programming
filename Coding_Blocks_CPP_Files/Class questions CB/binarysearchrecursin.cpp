#include<iostream>
using namespace std;

int  recurbs(int a[],int s,int e , int ele)
{
    int m=s+(e-s)/2;
    //base case
    if(s>e)
        return -1;
    if(s==e)
        return (a[s]==ele?s:-1);

        //the recursive case

    if(a[m]>ele)
        recurbs(a,s,m-1,ele);

    else if(a[m]<ele)
        recurbs(a,m-1,e,ele);

}
int main()
{
    int a[10000];
    cout<<"enter the number of elements"<<endl;
    int n;
    cin>>n;
    cout<<"enter the elements"<<endl;
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"key"<<endl;
    int key;
    cin>>key;
    int s=0;int e=n-1;
    int ans=recurbs(a,s,e,key);
    cout<<ans<<endl;


    return 0;
}
