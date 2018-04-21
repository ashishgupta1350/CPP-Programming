#include<iostream>
using namespace std;
class items
{
private:
    static int  count;
    int code ;

public:
    void getdata(void)
    {
        ++count;

    }
    items()
    {
        code=0;
    }
    void displaydata()
    {
        ++code;
        cout<<code <<" : is the code"<<endl;
    }

    static  void putboth()
    {
       // cout<<"code is non static and value is : "<<code<<endl;
        //cout<<endl;
        cout<<" static member count is : "<<count<<endl;
        cout<<endl;
    }

};




int items:: count =10;//definition of static data members.
//items::putboth();
int main()
{
    items A,B,C;
    A.displaydata();
    C.displaydata();
    C.getdata();
    B.getdata();
    items::putboth();



    return 0;
}
