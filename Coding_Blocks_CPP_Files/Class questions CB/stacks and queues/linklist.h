#ifndef LINKLIST_H
#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node*next;
    Node(int d):data(d),next(NULL){}//another way of saying that data=d and Next=null;

    ~Node(){
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        //cout<<"Deleting Node with data "<<data<<endl;
    }
};

class LinkedList{
public:
    Node*head;
    Node*tail;

    LinkedList(){
        head = NULL;        // constructors in c++
        tail = NULL;
    }
    void insertAtFront(int d){
        if(head==NULL){
            head = tail = new Node(d);
        }
        else{
            Node *n = new Node(d);
            n->next = head;
            head = n;
        }
    }

       void print(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data <<"-->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
       }
       int getSize(){
            int count=0;
            Node*temp = head;
            while(temp!=NULL){
                count++;
                temp = temp->next;
            }
            return count;
       }
       void insertInMiddle(int d,int p){
            if(p==0){
                insertAtFront(d);
            }
            else if(p>=getSize()){
                insertAtEnd(d);
            }
            else{
                int count=0;
                Node*temp = head;
                while(count<p-1){
                    temp = temp->next;
                    count++;
                }
                Node* n = new Node(d);
                n->next = temp->next;
                temp->next = n;
            }

       }
       int findElement(int key){
            Node*temp = head;
            int position = 0;

            while(temp!=NULL){
                if(temp->data==key){
                    return position;
                }
                position++;
                temp = temp->next;
            }
            return -1;
       }


    void insertAtEnd(int d){
        if(tail==NULL){
            head = tail = new Node(d);
        }
        else{
            Node *n = new Node(d);
            tail->next = n;
            tail = n;
        }
    }
    static Node* findElementHelper(int key,Node*start){
        if(start==NULL){
            return NULL;
        }
        if(start->data==key){
                return start;
        }
        return findElementHelper(key,start->next);
    }
    Node*findMid(){
        Node*slow = head;
        Node*fast = head->next;
            /*
            while(fast!=NULL && fast->next!=NULL){
                fast = fast->next->next;
                slow = slow->next;
            }*/

            while(fast!=NULL){
                    fast = fast->next;
                    if(fast!=NULL){
                        fast = fast->next;
                        slow = slow->next;
                    }
            }
            return slow;
    }

    Node* findElementRec(int data){
            return findElementHelper(data,head);
    }
    void deleteNode(int p){
        if(p==0){
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        else{
            //Delete from the middle
            int count=0;
            Node*temp = head;
            while(count<p-1){
                temp = temp->next;
                count++;
            }
            Node* n = temp->next;
            temp->next = n->next;
            if(p==getSize()){
                tail = temp;
            }
        }



    }
    ~LinkedList(){
            if(head!=NULL){
                delete head;
                head = NULL;
            }
    }
    void deletefront()
    {
        Node*temp=head;
        head=head->next;
        delete temp;///check this
    }


};

#endif // LINKLIST_H
