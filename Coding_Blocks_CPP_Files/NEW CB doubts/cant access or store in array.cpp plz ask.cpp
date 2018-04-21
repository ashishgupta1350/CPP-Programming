#include<iostream>

using namespace std;

int main()
{
    int N;
    int i,j,k,l;

    int count=0,num=0;

    int a[5];
    cin>>num;
    i=0;
    while(num!=0)
    {
        a[i]=num%10;
        num/=10;
        i++;
        cout<<a[i]<<endl;
        cin>>num;
    }
    for(j=0;j<=i+1;j++)
        cout<<a[j];
    return 0;
}

