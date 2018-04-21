#include<iostream>
using namespace std;
int sum_array(int a[],int n )
{

    int sumchotaarray, chotaarray[10000];
    if(n==0)
        return 0;//check it


    //passing v lues to chotaarray
    for(int i=1 ;i<n;i++) //wrong!!!!
    {
        chotaarray[i-1]=a[i];

    }
int f1=sum_array(chotaarray,n-1);
    sumchotaarray=a[0]+f1;



// cout<<sumchotaarray<<endl;

 return sumchotaarray;
}


int main()
{
    int a[100000];
    int i;
    cout<<"size of array"<<endl;
    int size_array;
    cin>>size_array;
    int num=0;
    for(i=0;i<size_array;i++)
    {
        a[i]=num;
        num++;
        cout << a[i] << " ";

    }


    int ans=sum_array(a,size_array);

    cout << ans;


    return 0;

}
