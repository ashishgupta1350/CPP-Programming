#include<iostream>

using namespace std;

int main()

{
    int num;
    static int N,i,j,k,a[5];//check this i have serious doubt....
    int count;
    count=1;
    i=0;
    cin>>num;
i=0;

    while(num>9)
    {
        count++;
        a[i]=(num%10);
        if(a[i]>=5)
        {
            (a[i])=(9-a[i]);

        }
        num/=10;

        cout<<a[0]<<endl;


    cout<<a[i]<<" is the ith digit"<<endl;
    i++;
    }
    cout<<"out of for loop 1"<<endl;
    for(j=count;j>=1;j--)
    {
        cout<<a[j];

    }


    return 0;
}
