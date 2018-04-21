#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int testcases;
    int count1,k1=0;
    char a[1000000];
    cout<<"enter the number of testcases "<<endl;
    cin>>testcases;
    for(int cases=1;cases<=testcases;cases++)
    {

        cout<<"Enter a string "<<endl;
        cin>>a;
        i=0;
        while(a[i]!='\0')
        {
            count1=1;
            k1=i;
            while(a[k1+1]!=a[k1])
            {
                k1++;
                count1++;
                cout<<count1<<endl;
            }

        }

            if(count1!=1)
            {
                cout<<a[i]<<count1;
            }
            else
                cout<<a[i];
            k1++;
            i=k1;

        cout<<endl;


    }
    return 0;
}
