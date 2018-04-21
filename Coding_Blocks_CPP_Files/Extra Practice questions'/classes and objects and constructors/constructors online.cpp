#include<iostream>
using namespace std;
#include<string>
class buckysclass
{
private :
    string name;

public:

    void getstring(string s);
    void putstring(void);
    buckysclass(string s)
    {
        getstring(s);
    }


};
void buckysclass::getstring(string s)
{
    //cout<<"Enter the string "<<endl;
    name =s;

}
void buckysclass::putstring(void)
{
    cout<<"string is : ";
    cout<<name<<endl;
}

int main()
{
    buckysclass bo("My name is Khan");//a constructor is used to initialize a value in a given object
    bo.putstring();



    return 0;
}
