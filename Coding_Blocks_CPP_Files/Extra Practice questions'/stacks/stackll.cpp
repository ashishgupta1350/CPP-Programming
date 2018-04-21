
#include<iostream>
using namespace std;
#include"Node.h"
#include"stack.h"
int main()
{
    int d;
    Stackll s1;
    for(int i=0;i<6;i++)
    {
        s1.push(i);
    }
    cout<<s1.top()<<"is the top most element in stack"<<endl;
        cout<<s1.isempty()<<" is empty if zero else not"<<endl;
    cout<<s1.getsize()<<" is the size of the ll"<<endl;



    for(int j=0;j<s1.getsize();j++)
    {
        s1.pop();
        cout<<"in the dumb loop"<<endl;
    }
        cout<<s1.isempty()<<" is empty if zero else not"<<endl;
    cout<<s1.getsize()<<" is the size of the ll"<<endl;


    cout<<s1.top()<<"is the top most element"<<endl;


    return 0;
}
