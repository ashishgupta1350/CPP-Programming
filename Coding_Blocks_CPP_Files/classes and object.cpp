#include<iostream>
using namespace std;

class item{
private :
    int itemcode[50];
    int itemprice[50];
    int count;

public:
    void CNT(void){count=0;}//initialize count to zero
    void getitem(void);
    void putsum(void);
    void removeitem(void);
    void displayitems(void);


};

void item::getitem(void)
{
    cout<<"enter the code of the item : ";
    cin>>itemcode[count];
    cout<<"enter the price of the item : ";
    cin>>itemprice[count];
    count++;
}
void item::removeitem(void)
{
    cout<<"Enter the code of the item to remove : ";
    int code;
    cin>>code;
    for(unsigned int i=0;i<count;i++)
    {
        if(itemcode[i]==code)
        {
            itemprice[i]=0;
            break;
        }
    }

}
void item::putsum(void)
{
    int sum=0;
    for(unsigned int i=0;i<count;i++)
    {
            sum+=itemprice[i];
    }
    cout<<sum<<" : is the total sum of the items"<<endl<<endl;

}
void item::displayitems(void)
{
    for(unsigned int i=0;i<count ;i++)
    {
        cout<<"For item code"<< " : "<<itemcode[i]<<endl;
        cout<<"price is : "<<itemprice[i]<<endl;
        cout<<endl;
    }
    char l=cin.get();
}




int main()
{
//initialize count to zero
    item A;
    A.CNT();
     cout<<"                    Welcome to ShopMart              "<<endl<<endl;
    int x;
    do{

        cout<<"You can do following by Pressing "<<endl;
        cout<<" 1 : For adding an item"<<endl;
        cout<<" 2: For removing an item"<<endl;
        cout<<" 3 : For display all items for list"<<endl;
        cout<<" 4 : For displaying sum of all the items "<<endl;
        cout<<" 5 : to exit"<<endl;
        //int x;
        cout<<"Enter your option"<<endl;
        cin>>x;
        switch (x)
        {
        case 1:
            A.getitem();
            break;
        case 2:
            A.removeitem();
            break;
        case 3:
            A.displayitems();
            break;
        case 4:
            A.putsum();
            break;
        case 5:
            break;
        default:
            cout<<"invalid input : please try again " <<endl;


        }

    }while(x!=5);

    return 0;
}
