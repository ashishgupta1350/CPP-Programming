#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
char a[n];
int count1=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];

}



for(int i=0;i<=n;i++)
{
    if(a[i]=='B'&&a[i+1]=='B')
        count1++;
    if(a[i]=='G'&&a[i+1]=='G')
        count1++;

    if(a[i]=='R'&&a[i+1]=='R')
        count1++;
}
cout<<count1;


return 0;
}
