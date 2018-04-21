#include<iostream>

using namespace std;

int main()
{
    int i,j;
    int N;
    cin>>N;
    int run;
    int num;
    int marks[100];
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
