#include<iostream>
using namespace std;
int main()
{

    int i,j,k;
    int testcases;
    cin>>testcases;
    for(i=1;i<=testcases;i++){
    static bool b[1000000];
    int a[100000];
    int size_array;
    cin>>size_array;
    int rmin,rmax;
    cin>>rmin>>rmax;
    for(int j=0;j<size_array;j++)
    {
        cin>>a[j];
        b[j]=0;
                                                //i dont think i used rmin and rmax any good way.
    }

    for(int k=0;k<size_array;k++)
    {
        b[a[k]-1]=1;
        continue;
    }
    for(int j=0;j<size_array;j++)
    {

        if(b[j]==1)
        {
            cout<<a[j]<<" ";

        }
        else
            continue;
    }

    cout<<endl;

    }





        return  0;
}
