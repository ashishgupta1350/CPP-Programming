#include<iostream>
using namespace std;
int main()
{
    //enter 2 d array
    int m,n;//m is two and n is column
    cin>>m>>n;
    int a[100][100];
    int i,j;
    //enter sored array
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    //enter key
    int index1,index2;
    int key;
    cin>>key;
    int s=0;
    int e=m*n-1;
    while(s<=n)
    {int mid=(s+e)/2;
    if(a[mid/n][mid%n]==key)
    {
        index1=mid/n;
        index2=mid%n;
        cout<<index1<<" "<<index2<<endl;
        break;
    }
    else if(a[mid/n][mid%n]>key)
            {e=mid-1;}
    else if(a[mid/n][mid%n]<key)
    {
        s=mid+1;
    }

    }

    return 0;
}
