#include<iostream>

using namespace std;

int main()
{
   long long int i,j;
    long long int N;
    cin>>N;
   long long int run;
    long long int num;
     long long int marks[100];
    for(run=1;run<=N;run++)

     {
        cin>>num;

        for(i=0;;i++)
    {
        marks[i]=num%10;
        num/=10;
        if (num==0)
            break;
    }

        for(j=0;j<=i;j++)
            cout<<marks[j];

        cout<<'\n';


    }


        return 0;

}
