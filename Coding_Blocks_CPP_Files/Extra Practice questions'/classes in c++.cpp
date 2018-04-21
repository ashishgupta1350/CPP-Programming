#include<iostream>
using namespace std;
class shoppinglist
 {
    int itemcode[100];
    float itemprice[100];
    int count_item=0;//check for 0 type declaration

 public:

    void input_item(void);
    void CNT(void){count_item=0;}
    void displaysum(void);
    void remove_item(void);
    void display_item(void );


 };
 //void shoppinglist ::CNT(){count_item=0;}

 void shoppinglist ::input_item()
 {
     cout<<"enter the code for the item"<<endl;
     cin>>itemcode[count_item];

     cout<<"Enter the price of The Item"<<endl;
     cin>>itemprice[count_item];
     count_item++;
 }
 void shoppinglist::displaysum()
 {
     cout<<"The total sum of the items is"<<endl;
     int sum=0;
     for(unsigned int i=0;i<count_item;i++)
     {
         sum+=itemprice(count_item);

     }
     cout<<" : "<<sum<<endl;
 }

 void shoppinglist::display_item()//check if this is empty or i should add a void in function call;
 {
     cout<<"enter the code of item"<<endl;
     int code;
     cin>>code;
     for (unsigned int i=0;i<count_item;i++)
     {
         if(itemcode[i]==code)
         {
             cout<<"for the code "<<code<<"the price is "<<itemprice[i];
         }

     }
 }

 void shoppinglist::remove_item()
 {
     cout<<"Enter the code u want to remove"<<endl;
     int code1;
     cin>>code1;

     for(unsigned int i=0;i<count_item;i++)
     {
        if(itemcode[i]==code1)
            itemprice[i]=0;

     }
 }


int main()
{
    int i,j,k,l;
    cout<<"This is the First class Mall"<<endl<<endl;
    cout<<"enter your preferences as below"<<endl;
    cout<<"to add an item press 1"<<endl;
    cout<<"to remove an item press 2"<<endl;
    cout<<"to display your total till now press 3"<<endl;
    cout<<"to display price of item press 4 "<<endl;
    cout<<"exit press 5"<<endl;



    return 0;
}
