#include<iostream>
using namespace std;

int swap1(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"in Temp fn SWAP"<<endl;
    cout<<a<<" " <<b;
    return a;


}
int main()
{
    int a,b,swaped;

    cin>>a>>b;
    swaped = swap1(a,b);
    cout<<a<<" " <<b;

    return 0;

}
