/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node* temp=head;
  if (head==NULL)
      {
      Node* n=new Node();
      n->data=data;
      n->next=NULL;
      return n;
  }

   else{
       Node* n1=new Node();
       n1->data=data;
       n1->next=NULL;
       int count1=0;
       if(position==0)
           {

             n1->data=data;
            n1->next=head;
            head=n1;
        return head;


       }
       else{
       while(count1<position-1 )
           {

           count1++;
           temp=temp->next;
       }
       n1->next=temp->next;
           temp->next=n1;
           return head;


   }

}
