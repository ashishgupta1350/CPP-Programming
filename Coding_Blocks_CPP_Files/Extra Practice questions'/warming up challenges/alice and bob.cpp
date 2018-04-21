#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<3;i++)
    {
        cin>>b[i];
    }
    int sum1=0;
    int sum2=0;
    for(int j=0;j<3;j++)
    {
        if(a[j]>b[j])
        sum1++;
        else if(a[j]<b[j])
            sum2++;

    }
    cout<<sum1<< " "<<sum2;

    return 0;
}
