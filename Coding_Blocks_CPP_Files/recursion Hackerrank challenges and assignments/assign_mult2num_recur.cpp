#include<iostream>
using namespace std;
int mult(int m,int n)
{

    if(n==1)
        return (+m);
    else if(n==-1)
        return (-m);
/*
 if(n==0)
        return (+0);
    else if(n==-1)
        return (-0);*/
    if(n>0)
        return m+mult(m,n-1);
    else if(n<0)
        return -m+mult(m,n+1);
}
int main()
{
    int m,n;
    cout<<"enter m and n to calculate m*n"<<endl;
    cin>>m>>n;
    int ans=mult(m,n);
    cout<<ans<<endl;

    return 0;
}
