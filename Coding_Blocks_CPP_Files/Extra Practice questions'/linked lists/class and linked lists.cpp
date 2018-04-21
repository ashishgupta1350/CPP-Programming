#include<iostream>
using namespace std;
class Node
{
public:

    int data;
    Node* next;

//public:
    Node(int d)
    {
        data=d;
        next=NULL;
    }
    ~Node()
    {
        if(next==NULL)
            delete next;
            next=NULL;

    }
};
class linkedlist
{
public:
    Node* head;
    Node* tail;
   linkedlist()
   {
       head=NULL;
       tail=NULL;
       /*
        Node* temp =new Node(d);        ??????????check??????????????
        head= tail= temp;
        temp=NULL;
       */
   }
    void insertatfront(int d)
    {
        if(head==NULL)
        {
            head=tail=new Node(d);
        }
        else{
        Node*temp=new Node(d);
        temp->next=head->next;
        head=temp;
        temp=NULL;

        }
    }

    int print()
    {

        int count=0;
        if(head==NULL)
            cout<<"NO linked list found , insert some elements . "<<endl;
        else{

            Node* temp=head;
            while(temp!=NULL)
            {
                count++;
                temp=temp->next;
               // if(temp->next!=NULL)
                //cout<<temp->data<<" >>> "<<endl;
            }


        }

        return count;
    }

};
int main()
{
        linkedlist l;
        l.insertatfront(100);//whatever is this
        l.insertatfront(100);
         l.insertatfront(100);
          l.insertatfront(100);

        cout<<l.print()<<endl;
    return 0;
}
