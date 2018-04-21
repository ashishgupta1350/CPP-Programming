#include<iostream>
using namespace std;
#include<stack>
void insertatbottom(stack<int> s1,int data)
{
    if(s.empty())
    {
        s.push(data);
        return ;

    }
    top=s1.top;
    s1.pop();
    insertatbottom(s1,data);            /// complete at home please
    s1.push(top);
}
void Reversestack(stack<int> &s)
{
    if(s.empty())
    {
        return;

    }
    int data=s.top();
    s.pop();
    ///
    Reversestack(s);
    ///insert at bottom
    insertatbottom(s,data);




}



int main()
