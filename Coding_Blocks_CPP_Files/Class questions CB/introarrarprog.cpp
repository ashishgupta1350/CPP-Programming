#include<iostream>
using namespace std;

int main()
{
    int i;
    int arr[5];
    cout<<"enter 5 numbers"<<endl;
    for(i=0;i<5;i++)
       {cout<<"enter number "<<i<<endl;

        cin>>arr[i];
       }
       //output

       for(i=4;i>=0;i--)
            cout<<arr[i]<<" ";



}
