#include<iostream>
using namespace std;
int main()
{
    int testcases,count1=0;
    cin>>testcases;
    int a[testcases+1],b[testcases+1];

    for(int i=1;i<=testcases;i++)
    {

        cin>>a[i]>>b[i];
        if(a[i]<b[i])
            count1++;
    }

    if(count1>0)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;

    return 0;
}
