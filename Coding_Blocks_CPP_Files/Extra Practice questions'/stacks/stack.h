#ifndef STACK_H
#define STACK_H
#include"Node.h"

class Stackll
{
    //static int size;
public:
    Node* head;
    int size;
   // static int size;
    Stackll()
    {
        head=NULL;
        size=0;

    }
    void push(int d)
    {
        Node*n=new Node(d);
        n->next=head;
        head=n;
        size++;

    }
    void pop()
    {
        if(size!=0)
        {
            size--;
            Node* temp=head;
            head=head->next;
        }
    }

    int top()
    {
       if(head!=NULL)
            return head->data;

    }
    int getsize()
    {

        return size;
    }

    bool isempty(){
        return size==0?true:false;

    }

};


#endif // STACK_H
