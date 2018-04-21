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



for(int j=0;j<=n;j++)
{
    if((a[j]==a[j+1]))
    {
        count1++;
    }

}
cout<<count1;





return 0;
}
