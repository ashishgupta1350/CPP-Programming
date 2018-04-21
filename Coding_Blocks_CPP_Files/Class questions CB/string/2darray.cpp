#include<iostream>
using namespace std;
int main()
{
    int a[100][100];
    cout<<"enter the number of rows and columns "<<endl;
    int n,m,val=1;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a[i][j]=val;
            val++;
        }
    }
    int col,row;
    for(col=0;col<m;col++)
        if(col%2==0)
    {
        for(row=0;row<n;row++)
            cout<<a[row][col]<< " " ;
    }
    else if(col%2==1)
    {
        for(row=n-1;row>=0;row--)
            cout<<a[row][col]<< " ";

    }

    return 0;

}
