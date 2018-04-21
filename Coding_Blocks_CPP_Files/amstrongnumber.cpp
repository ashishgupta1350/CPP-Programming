#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   long long int N,A,a,num,number,flag,sum,dig;
   int i,j,k;
    cin>>N;
    for(i=1;i<=N;i++)
    {   sum=0;

        cin>>A;
        dig=0;
        number=A;
        flag=0;
        num=1;

        for(j=1;;)
        {
            num*=10;
            flag++;
            if(A/num==0)
            {
                dig=flag;
                break;
            }
            }
            for(k=1;k<=dig;k++)//check for dig here.....
            {
                a=A%10;
                sum+=pow(a,dig);
                A/=10;
            }

                if(sum==number)
                    cout<<"Yes"<<endl;

                else
                    cout<<"No"<<endl;
        sum=0;


    }




    return 0;
}
