#include<iostream>
using namespace std;
#include<queue>
class my_stack
{
    public:
    queue<int > q1;
    queue<int> q2;

    void stack_push(int d)
    {
        q1.push(d);
    }
    void stack_pop()
    {
        if(q1.size()==0)
            return;
        while(q1.size()!=0)
        {
            q2.push(q1.front());
            q1.pop();

        }
        q2.pop();///check if the queue is not already empty
          while(q2.size()!=0)
        {
            q1.push(q2.front());
            q2.pop();

        }


    }

    int   stack_top()
    {
         while(q1.size()!=0)
        {
            q2.push(q1.front());
            q1.pop();

        }


        int top=q2.front();
         while(q2.size()!=0)
        {
            q1.push(q2.front());
            q2.pop();

        }
        return top;
    }

    void stack_display()
    {
         while(q1.size()!=0)
        {
            q2.push(q1.front());
            q1.pop();

        }
        while(q2.size()!=0)
        {
            cout<<q2.front()<<" ";
            q1.push(q2.front());
            q2.pop();

        }
        cout<<endl;

    }



};

int main()
{
    my_stack s1;
    for(int i=0;i<5;i++)
    {
        s1.stack_push(i);

    }
    s1.stack_pop();
    cout<<s1.stack_top()<<endl;
    s1.stack_display();
for(int i=0;i<5;i++)
    {
        s1.stack_push(i);

    }
   cout<< s1.stack_top()<<endl;
   s1.stack_display();
    return 0;
}
