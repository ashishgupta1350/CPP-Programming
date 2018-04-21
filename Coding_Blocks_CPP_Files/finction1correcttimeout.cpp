#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    /*initialize a for loop1---------------n;   */

    int sum=0,i,j,n;
    int testcase;
    int num;
    cin>>testcase;
    for(i=1;i<=testcase ;i++)
    {
        sum=0;
        num=1;

        cin>>n;

        for(j=1;j<=n;j++)

        {

            sum=sum+pow(-1,j)*num;

            num++;





        }


        cout<<sum<<endl;



    }


        return 0;
}


