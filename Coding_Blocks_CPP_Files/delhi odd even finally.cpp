#include<iostream>
using namespace std;

int main()
{
    long long int testcases,sume=0,sumo=0;
    cin>>testcases;
    long long int carno;
    for(int i=1;i<=testcases;i++)
    {
        sume=0,sumo=0;
        long long int j=1;
        cin>>carno;
        while(carno>0)
        {
            int a=carno%10;
            if(carno%2==0)
            {
                sume+=a;
            }
            else
                sumo+=a;

            carno/=10;


            j++;
        }
        if(sumo%3==0||sume%4==0)
        {
            cout<<"Yes"<<endl;

        }


        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;

}
