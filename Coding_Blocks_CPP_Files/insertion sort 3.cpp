#include<iostream>
using namespace std;


void insertionsort(int n)
{
    int a[n];
    for(int k=0;k<n;k++)
    {cin>>a[k];
    }
    int value=0,hole;

    for(int i=1;i<=n-1;i++)
    {

            value =a[i];
        hole=i;
        while(hole>0&&(a[hole-1]>a[hole]))
            {a[hole]=a[hole-1];
            a[hole-1]=value;
            hole--;}


    }

        int j=0;
    while(j<n)
    {
        cout<<a[j]<<" ";
        j++;

    }
    cout<<'\n';

}

int main()
{

    int hole,count1, i,value ,testcase,sizearray;
    cin>>testcase;
    for(i=1;i<=testcase;i++)
    {
        cin>>sizearray;


        insertionsort(sizearray);
    }
    return 0;
}
