#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    stack<int> s;
    for(int i=1;i<=5;i++)
    {
        q.push(i);

    }                                                                           ///working /*this code  is working*/in


    while(!q.empty())
    {
        s.push(q.front());
        q.pop();


    }
    cout<<"after i pushed all the elements in stack"<<endl;
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    while(!q.empty())
    {
        cout<<q.front()<< " ";
        q.pop();
    }

    return 0;
}
