#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key)
{
    int s=0,e=n-1,m;
    while (s<=e)
    {
        m=(s+e)/2;
        if(a[m]==key)
            return m;
        else if(a[m]>key)
        {
            e=m-1;
        }
        else if(a[m]<key)
        {
            s=m+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
      int key , a[100000];
    for(int i=0;i<n;i++)/*sorted array*/

    {
        cin>>a[i];
    }
        int num;
        cin>>num;//input number that u want sum to;
        int ans=-10000000,i;
      for( i=0;i<n-1;i++)
      {
           key=num-a[i];
        ans=   binarysearch(a+1,n,key);
        if(ans==-1)
        {
            continue;
        }
        if(ans>-10000)
            break;

      }
       if(ans==-1)
            {
                cout<<"not found"<<endl;

            }
        else cout<<a[i]<< " "<<ans<<endl;

        return 0;
}
