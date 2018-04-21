#include<iostream>
using namespace std;
int main()
{
    int x=10;


    int *ptr=&x;
    int a[10];
    cout<<ptr-a<<endl;
    return 0;
}
