#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    cout<<"enter any five elements in array"<<endl;
    int count1=0;
    int i;

    for(i=0;i<5;i++)
    {
        cin>>arr[i];
        count1++;
    }

        cout<<"count is "<<count1<<endl;

    //works


    return 0;
}
