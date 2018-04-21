#include<iostream>

using namespace std;
int main()
{
    char alp;

    cin>>alp;

    if(alp>=65&&alp<=90)
        cout<<"UPPERCASE"<<endl;
    else if (alp>=97&&alp<=122)
        cout<<"lowercase"<<endl;

    else
        cout<<"Invalid";
    return 0;

}

