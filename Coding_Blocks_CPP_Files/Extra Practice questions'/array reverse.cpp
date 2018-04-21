#include<iostream>
using namespace std;
int smallest (int *a,int n)
{
    int i;
    int smallest=100000;
    for(i=0;i<n;i++)
    {
        if(*(a+i)<smallest)
            smallest=*(a+i);
        else
            continue;

    }
    return smallest;
}
int main()

{
    int arr[100000];
    int i;
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=smallest(arr,n);

    cout<<ans<<" :: is the smallest digit"<<endl;



    return 0;
}
