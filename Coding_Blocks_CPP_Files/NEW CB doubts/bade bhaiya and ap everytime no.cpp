#include <iostream>

using namespace std;

int main()
{
    int testcase,i,j,k,count=0,d;

    int a[100];
    int length;
    //enter no of test case
    cin>>testcase;
    for(i=1;i<=testcase;i++)
    {
        cin>>length;
        count=0;
        for(j=0;j<length;j++)

        {
            cin>>a[j];

        }



        d=a[1]-a[0];

        for(k=0;k<length-1;k++)
        {
            if ((a[k+1]-a[k])!=d)
            {

                cout<<"No"<<endl;
                count++;
                break;

            }
        }
        if(count==0)
        {
            cout<<"Yes"<<endl;

        }

    }
    return 0;

}
