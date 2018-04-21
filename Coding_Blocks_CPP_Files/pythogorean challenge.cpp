#include<iostream>

using namespace std;
#include<math.h>

int main()
{
    long long int a,b,i,N;
    long long  int A;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        cin>>A;
        for(a=0;a<=A;a++)
        {
            for(b=0;b<=A;b++)
            {
               if(a<=b)
                {if(pow(a,2)+pow(b,2)==A)
                    cout<<"("<<a<<","<<b<<")"<<endl;
                }
            }
        }
    }


        return 0;


}
