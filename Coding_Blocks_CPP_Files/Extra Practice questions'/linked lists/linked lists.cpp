#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;//node is being pointed
    /*int *ptr ;*/

};
int main()
{
   //Node n1;
  // Node* ptr =new Node
  Node n1;
    n1.data=5;
   Node *ptr = new Node(n1);
   cout<<(ptr->data)<<endl;
   delete ptr;
 //   cout<<*ptr<<endl;



    return 0;

}




