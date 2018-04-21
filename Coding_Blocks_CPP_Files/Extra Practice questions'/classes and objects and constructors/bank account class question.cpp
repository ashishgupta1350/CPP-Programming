#include<iostream>
using namespace std;
class bankaccount
{
private:
    char name[50];
    int accno;
    char acctype[50];
    int balance;
    static int  count;//this will auto assign an account number

  public:
    void newacc();
    void depositmoney();
    void withdraw();
    void display();
    void changebal()
    {
        cout<<"Enter the Amount you want to enter : ";
        int amount;
        cin>>amount;
        balance+=amount;

    }
     void changebalsub()
    {
        cout<<"Enter the Amount you want to enter : ";
        int amount1;
        cin>>amount1;
        if(balance>amount1)
        balance-=amount1;
        else{
            cout<<"Insufficient balance: first add balance to your account"<<endl;
        }

    }

};
void bankaccount::newacc()
{
    cout<<"Enter the name of the depositer"<<endl;
    cin>>name;
    accno=++count;
    cout<<"The account number alloted is : "<<accno;
    cout<<endl<<"Enter  the account type[fix deposit (fd) or temporary(tem) "<<endl;
    cin>>acctype;
    cout<<"Type in balance to be put at start : "<<endl;
    cin>>balance;
    cout<<endl;
}
void bankaccount::display()
{
    cout<<name<<endl;
    cout<<accno<<endl;
    cout<<acctype<<endl;
    cout<<balance<<endl;
}
int bankaccount::count=100;



int main()
{
    int not,notf,notff;

    bankaccount b[10];
    cout<<"enter the number of accounts you want to open : ";
    int counter=0;
    cin>>counter;
    cout<<endl;

    for(unsigned int i=0;i<counter ;i++)
    {
        b[i].newacc();

    }int x;

   do{ cout<<"    You have following things you can do now "<<endl;

    cout<<" press 1 : to add balance "<<endl;
    cout<< " press 2 : to withdraw "<<endl;
    cout<<" Press 3 : to display an account "<<endl;
    cout<<"Press 4 :  to Exit"<<endl;
    cout<< "what to do : ";
    cin>>x;
    cout<<endl;
    switch(x)
    {
    case 1:

        cout<<"enter an account no : ";
        int accnum1;
         not=0;
        cin>>accnum1;
        for(int j=0;j<counter;j++)
        {
            if(b[j].accno==accnum1)
            {
                b[j].changebal();
                not++;
                break;
            }


        }
        if(not==0)
            cout<<"Not Found ..   Try again:)"<<endl;
        break;


    case 2:


               cout<<"enter an account no : ";
        int accnum2;
         notf=0;
        cin>>accnum2;
        for(int j=0;j<counter;j++)
        {
            if(b[j].accno==accnum2)
            {
                b[j].changebalsub();
                notf++;
                break;
            }


        }
        if(notf==0)
            cout<<"Not Found ..   Try again:)"<<endl;
        break;



    case 3:
        cout<<"enter an account no : ";
        int accnum;
         notff=0;
        cin>>accnum;
        for(int j=0;j<counter;j++)
        {
            if(b[j].accno==accnum)
            {
                b[j].newacc();
                notff++;
                break;
            }


        }
        if(notff==0)
            cout<<"Not Found"<<endl;
        break;

    case 4:
        break;

    default:
        cout<<"Invalid input. Try Again"<<endl;

    }


   }while(x!=4);


    return 0;
}
