#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
    ~Node()
    {
        if(next!=NULL)
        {
            delete next;
            next=NULL;}
    }
};
class LinkedList
{
public:
    Node* Head;
    Node* Tail;
    LinkedList()
    {
        Head=NULL;
        Tail=NULL;
    }

    void insertAtFront(int d)
    {
        if(Head==NULL)
            Head=Tail=new Node(d);


    else{

        Node* n = new Node(d);
        n->next=Head;
        Head=n;
    }
    }
    void print()
    {
        Node* temp=Head;
        while(temp!=NULL)
            {
                cout<<temp->data<<"-->";
                temp=temp->next;
            }
              cout<<"NULL"<<endl;
    }

    void insertAtEnd(int d)
    {
        if(Head==NULL)
        {
            Head=Tail=new Node(d);
        }
        else{
            Node* n=new Node(d);
            Tail->next=n;
            Tail=n;
        }
    }

    void InsertAtMiddle(int d,int place)//
    {
        int count=0;
        Node* temp=Head;

        if(place==0)
        {
            insertAtFront(d);
        }
        else if(place>=getsize())
        {
            insertAtEnd(d);

        }

        else{
            Node* n=new Node(d);
            while(count<place-1)
            {
                count++;
                temp=temp->next;
            }
            n->next=temp->next;
            temp->next=n;

        }


    }

    int  getsize()
    {
        int count1=0;
        Node* temp=Head;
        while(temp!=NULL)
        {
            count1++;
            temp=temp->next;
        }
        return count1;
    }

    int  findkey(int d)
    {

        int count=0;
        if(Head==NULL)
        {
            //cout<<"Not found"<<endl;
            //Found=NULL;
            return -1;
        }
        else
        {
            Node* temp=Head;
            while(temp!=NULL)
            {
                if(temp->data==d)
                {
                    return  count+1; //
          //          Found=temp;
                }
                count++;
                temp=temp->next;
            }
            return -1;
        }

        //return Found;
    }
    //for destroying a node
    void deletel(int d)
    {
        if(Head==NULL)
        {
            //do nothing
            cout<<" The key was not there "<<endl;

            return ;
        }
        if(findkey(d)==-1)//check if its l.findkey==-1
        {
            //do nothing
                cout<<" The key was not there : " <<endl;//check for l.print
            return ;
        }
        else{
            Node* temp= Head;
            while(temp->next!=NULL&&temp->next->data!=d)
            {
                temp=temp->next;

            }
           /* if (temp->next->next==NULL)
            {
                temp->next==NULL;
                Tail=temp;
                return;
            }
            *///else
            temp->next=temp->next->next;
            return ;

        }

    }
    void deletefromint(int d)
    {
        if(findkey(d)==-1)
        {
            cout<<"not found"<<endl;
            return ;
        }
        else{

            Node* temp=Head;
            Node* temp1;
            while(temp->next->data!=d)
            {
                temp=temp->next;
            }
            temp1=temp->next;
            delete temp1;
            temp->next=NULL;
            return ;

        }

    }

    //Destructor
    ~LinkedList()
    {
        if(Head!=NULL)
        {
            delete Head;
            Head=NULL;
        }
    }

    Node* findmid()
    {
        cout<<"in find mid"<<endl;
        Node*slow=Head;
        Node* fast =Head->next;
      /*  while(fast!=NULL&&fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;

        }*/
        while (fast!=NULL)
        {
            fast=fast->next;
            if (fast!=NULL)
            {
                fast=fast->next;
                slow=slow->next;

            }
        }

      cout<<slow->data<<" is the middle most element"<<endl;
        return slow;
    }
      Node*  findfifth()
    {
        Node* fast=Head;
        Node*slow=Head;
        if(getsize()<5)
            return NULL;
        else{
            int i=4;
            while(i>=0)
            {
                fast=fast->next;
                i--;
            }
            while(fast->!=NULL)
            {
                slow=slow->next;

            }
            return slow;
        }
    }
};



int main()
{
    LinkedList l;
    l.insertAtFront(5);
    l.insertAtFront(6);
    l.insertAtFront(7);
    l.insertAtFront(8);
    l.insertAtFront(9);
    l.insertAtEnd(11);
    l.insertAtEnd(12);
    l.insertAtEnd(13);
    l.print();

   // cout<<l.Head->data<<endl;
    cout<<endl<<"enter a position at which you want to enter a node(position is 1 based) : " ;
    int pos,d;
    cin>>pos;
    cout<<"enter a  element that you want to enter : ";
    cin>>d;
    l.InsertAtMiddle(d,pos);
    l.print();
    cout<<"enter a key that you want to find : ";

    cin>>d;
    pos=l.findkey(d);
    if(pos!=-1&&pos!=0)
    cout<<pos<<" : is the position of the key "<<endl;
    else
        cout<<"not found"<<endl;

        //delete a node;

        cout<<"enter a integer that you want to delete : ";
        cin>>d;
        l.deletel(d);
        l.print();


       /* cout<<"enter the integer from which you want to delete the linked list : "<<endl;
        int integer;
        cin>>integer;
        l.deletefromint(integer);
        l.print();*/



    Node* foundmid=l.findmid();
    foundmid=l.findfifth();
    cout<<l.findfifth()->data<<" is the fifth element from the last"<<endl;

   // cout<<l.findmid()->data<<" is the data at the middle of the node"<<endl;

    l.~LinkedList();
    cout<<"after calling destructor"<<endl;
    l.print();
    return 0;
}
