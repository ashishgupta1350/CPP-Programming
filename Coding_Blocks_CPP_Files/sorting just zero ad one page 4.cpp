#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n;

    cin>>n;
    int  a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
        }
    int count1=0,count0=0;
    for(int j=0;j<n;j++)
        {
        if(a[j]==0)
            count0++;
        else if (a[j]==1)
            count1++;


    }
    for(int k=0;k<count0;k++)
       {

        cout<<"0"<<" ";

    }
    for(int k=0;k<count1;k++)
        {

        cout<<"1"<<" ";


    }
    return 0;
}

