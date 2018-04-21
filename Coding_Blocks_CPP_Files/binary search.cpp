#include<iostream>
using namespace std;

int binarysearch(int a[],int n,int key)
{
    int s=0,e=n-1,m;
    int count1=0;
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
    int s,e,i,j,k;
    int a[100000];

    int n;
    cin>>n;
    int key;
    //input key
    /*input sorted array*/
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>key;
    k=binarysearch(a,n,key);

    if(k==-1)
        cout<<"-1"<<endl;
    else
        cout<<k<<endl;





    return 0;

}
