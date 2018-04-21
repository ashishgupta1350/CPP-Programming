#include<iostream>
using namespace std;

int main()
{
    int n;

    cin>>n;
    int storage [3];
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

     for(int k=0;k<n;k++)
    {

        int swap1=0;
        for(int j=0;j<n-1;j++)//check this
    {
       if(a[j]>a[j+1])
            {swap(a[j],a[j+1]);
            swap1++;}
    }
    if (swap1==0)
    {

        break;

    }
    }

        int A;//for sum=A
        cin>>A;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)//search the tweak
            {
                for(int k=i;k<n;k++)
                    if((a[i]+a[j]+a[k])==A&&i<j&&j<k)
                {
                    storage[0]=a[i];
                     storage[1]=a[j];
                      storage[2]=a[k];


                }
            }
        }


        cout<<storage[0]<<" "<<storage[1]<<" "<<storage[2];

        return 0;
}
