#include<iostream>
using namespace std;
int power(int a,int x)
{
    //base case

    if(x==0)
    {
        return 1;

    }
    else
        return power (a,x-1);

}
int main()
{
    int a,x;
    cout<<"enter a,x to calculate a power x"<<endl;

    cin>>a>>x;

    int ans = power(a,x);
    cout<<ans<<endl;
    return 0;
}
