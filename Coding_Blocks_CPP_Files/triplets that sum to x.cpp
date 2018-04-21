#include<iostream>

using namespace std;
int main()

{
    int i,j,k;
    int n;
    int a[100000];
    cin>>n;/*size of array*/
    for(i=0;i<n;i++)
    {
        cin >>a[i];
    }

    /*sorting of array*/

      for(k=0;k<n;k++)
    {

        int swap1=0;
        for( j=0;j<n-1;j++)//check this
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
    int integer,x,y,z;
    cin>>integer;
    for(i=0;i<n-2;i++)
    {
        for(j=1+i;j<n-1;j++)
        {
            for(k=1+j;k<n;k++)
            {if(a[i]+a[j]+a[k]==integer )
            {
                x=a[i];
                y=a[j];
                z=a[k];


            }
            }
        }
    }
    cout<<x << " "<<y<<" "<<z<<endl;


    return 0;
}
