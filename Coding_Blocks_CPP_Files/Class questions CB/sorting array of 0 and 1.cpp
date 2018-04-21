
#include<iostream>


using namespace std;
int main()
{
    int a[100];
    int i,j,k,n;
    int c0=0,c1=0;
    cout<<"input a binary number to be sorted"<<endl;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]!=0&&a[i]!=1)
            {cout<<"false input"<<endl;
            return 0;}
            //counts ++

            if(a[i]==0)
                c0++;
            else if(a[i]==1)
                c1++;



    }
    for(j=0;j<n;j++)
    {
        cout<<a[j];

    }


            return 0;


}
