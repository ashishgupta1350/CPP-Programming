#include<iostream>

using namespace std;
void modify(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        *(a+i)*=3;

    }
    return ;
}
int main()
{
    int arr[10];
    int i;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];

    }
    modify(arr,10);

      for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";

    }


    return 0;

}
