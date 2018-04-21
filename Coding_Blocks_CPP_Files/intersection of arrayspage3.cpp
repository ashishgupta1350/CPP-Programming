#include<iostream>

using namespace std;


void insertionsort(int n)
{
    int c[n];
    for(int k=0;k<n;k++)
    {cin>>c[k];
    }

}
int main()
{
    int m,n,i,j,l;
    int count1=0;
    cin>>m>>n; ///for no of elements in each array
int a[m],b[n];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin >>b[i];
    }
    int k=m+n;
    int c[k];
    k=0;
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++){
        if(a[i]==b[j])
        {
            c[k]=a[i];

            k++;
         count1++;
        }

    }
    }


    if (count1==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    n=count1;
     int value=0,hole;

    for(int i=1;i<=n-1;i++)
    {

            value =c[i];
        hole=i;
        while(hole>0&&(c[hole-1]>c[hole]))
            {c[hole]=c[hole-1];
            c[hole-1]=value;
            hole--;}


    }

        k=0;
    while(k<n)//check this now and now only
    {
        cout<<c[k]<<" ";
        k++;

    }
    cout<<'\n';

    return 0;
}
