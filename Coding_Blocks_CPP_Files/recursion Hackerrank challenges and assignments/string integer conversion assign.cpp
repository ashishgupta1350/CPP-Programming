#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
int str_conv(char a[],int i,int n)
{
    if(i==n-1)
    {
        int ans=a[i]-'0';
        return ans;
    }
    int x=a[i]-'0';
    return (x*pow(10,n-1-i)+str_conv(a,i+1,n));
}
int main()
{
    char a[1000];
    int ans,i;
    int n=strlen(a);
    char b[]="12345";

    cout<<"enter a number based string"<<endl;
    //cin>>a;23
    ans=str_conv(b,0,5);
    cout<<ans<<endl;
    return 0;
}
