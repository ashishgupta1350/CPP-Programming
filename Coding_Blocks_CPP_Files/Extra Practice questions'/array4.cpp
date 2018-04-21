#include <iostream>
using namespace std;
int main()
{
    int a[10000];
    int n,i,j;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count1=0;
    for(i=0;i<n/2;i++)
    {
        if(a[i]==a[n-1-i])
           {
               count1++;
            continue;
           }

            else
            {
                cout<<"nope"<<endl;
                break;

            }
    }

    if(count1!=0)
        cout<<"yes"<<endl;


    return 0;

}
