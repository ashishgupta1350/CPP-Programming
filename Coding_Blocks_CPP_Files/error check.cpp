#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    long long int num,i,j,k,a,b,c[10];
    long long int rem,count1=0;
    int n;
    cin>> n;

for(k=1;k<=n;k++)
    {
        cin>>a>>b;
        count1=0;

        for(i=a;i<=b;i++)

    {
        if(a%2!=0)
         {for(j=2;j<=sqrt(i);j++)
    {
        rem=i%j;
        if(rem==0)

            {
            break;
            }
    }
    if(rem!=0)
    {


        count1++;
    }
         }
}
    if(a==1)
        cout<<count1-1<<endl;
    else
    cout<<count1<<endl;
}

        return 0;

}


