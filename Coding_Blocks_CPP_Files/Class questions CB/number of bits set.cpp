#include<iostream>
using namespace std;

int main()
{
    int no;
    int count1=0;
    cin>>no;

    while(no>0)
{
        count1+=(no&1);
        no>>=1;

}
cout<<count1;
return 0;
}

