#include<iostream>
using namespace std;
int length_string(char a[],int size_max=1000000)
{
    int count1=0;
    int i=0;
    a[0] = cin.get();

    while(a[i]!='\n')
    {
        i++;
        count1++;

        a[i]=cin.get();

    }


    return count1 ;
}
int main()
{
    int testcases;
    char a[1000000];
    cin>>testcases;
    for(int j=0;j<=testcases;j++)
    {
    int ans=length_string(a,1000000);

    for(int i=ans-1;i>=0;i--)
    {
        cout<<a[i];

    }
    if(j!=0)

    cout<<'\n';
    }
    return 0;
}
