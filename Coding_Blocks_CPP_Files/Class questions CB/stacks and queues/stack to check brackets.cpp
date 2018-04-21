#include<iostream>
using namespace std;
#include<cstring>
#include<stack>
int main()
{
    stack<char> s;
    char ch[10000];
    cout<<"enter an expression "<<endl;
    cin.getline(ch,1000,'\n');
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]=='['||ch[i]=='('||ch[i]=='{'||ch[i]=='<');
        {s.push(ch[i]);

        }
        if(ch[i]=='}')
        {
            if(s.top()=='{')
            s.pop();
            else break;
        }
        if(ch[i]==')')
        {
            if(s.top()=='(')
            s.pop();
            else break;
        }
        if(ch[i]==']')
          {
            if(s.top()=='[')
            s.pop();
            else break;
        }
        if(ch[i]=='>')
          {
            if(s.top()=='<')
            s.pop();
            else break;
        }

    }
    if(s.empty())
    {
        cout<<"yes It is balanced"<<endl;

    }
    else
        cout<<"not balanced"<<endl;
    return 0;
}
