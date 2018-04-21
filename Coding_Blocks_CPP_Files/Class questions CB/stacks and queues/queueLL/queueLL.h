#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
//#include "linklist.h"
class queuell{

public:
    int head;
    int tail;
    int current_size;

    queuell()
    {
        head=tail=NULL;
        current_size=0
    }


    void push(int d)
    {

    }
    void pop()
    {
        deletefront();
    }

    void getfront()
    {
        cout<<front->data<<" is the front element of the queue"<<endl;


    }
    void getend()
    {
        cout<<rear->data<<" : is the last element in the queue"<<endl;


    }
    int sizeofq()
    {
       return getSize();
    }
    void printq()
    {
        print();
    }




};
/*Node* Merge(Node*a,Node*b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    Node* newHead;
    if(a->data < b->data){
       newHead = a;
       newHead->next = Merge(a->next,b);
    }
    else{
        newHead = b;
        newHead->next = Merge(a,b->next);
    }
    return newHead;
}
*/

int main(){
    LinkedList l;
    int data;
    int n;

    for(int i=0;i<n;i++)
    {
        l.push(i);
    }
    l.printq();
    l.pop();
    l.printq();
    cout<<l.sizeofq()<< " is the size of q"<<endl;




    /*l.insertAtFront(1);
    l.insertAtFront(2);
    l.insertAtFront(3);
    l.insertAtEnd(4);
    l.insertAtEnd(5);
    l.insertAtEnd(6);
    l.insertInMiddle(11,2);
    l.insertInMiddle(0,0);
    l.insertInMiddle(11,20);
    l.print();
    int ans = l.findElement(100);
    if(ans==-1){
        cout<<"Not found "<<endl;
    }
    else{
        cout<<"Found at Position "<< ans <<endl;
    }
    l.deleteNode(4);
    l.print();

    Node *n = l.findElementRec(6);
    cout<<n <<" and data is "<< n->data <<endl;
    cout<< l.findMid()->data<<endl;

    LinkedList l1,l2;
    l1.insertAtEnd(1);
    l1.insertAtEnd(4);
    l1.insertAtEnd(6);
    l2.insertAtEnd(2);
    l2.insertAtEnd(3);
    l2.insertAtEnd(5);

    l1.head = Merge(l1.head,l2.head);
    l1.print();*/

    return 0;
}


#endif // QUEUE_H

