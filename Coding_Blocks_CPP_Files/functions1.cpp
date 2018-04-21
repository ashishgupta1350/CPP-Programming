#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int sum=0,i,j,n;
    int testcase;
    int num;
    cin>>testcase;
    for(i=1;i<=testcase ;i++)
    {

        cin>>n;
    n<pow(10,15);
       if(n%2==0)
        cout<<n/2<<endl;
        else
        cout<<(-1)*(n+1)/2<<endl;



    }
        return 0;
}
