#include<iostream>
using namespace std;
int main()
{
    int a[100][100];
    int i ,j,k,l;
    int num=1;
    int n,m;
    cout<<"enter rows and columns of 2d array n,m"<<endl;
    cin>>n>>m;

    for(i=0;i<n;i++)
    {for(j=0;j<m;j++)
       {
        a[i][j]=num;
        num++;
       }
    }
    int largest = -10000;
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+a[i][j];

        }
        if(sum>largest)
            largest =i;
    }


    cout<<largest<<endl;


    return 0;
}
