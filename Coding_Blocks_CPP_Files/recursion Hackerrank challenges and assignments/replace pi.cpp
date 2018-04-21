#include<iostream>
using namespace std;
void replacepi(char a[])
{
    int i=0;
    char b[1000000];
    for(i=0;i<strlen(a[]);i++)
    {
        if(a[i]=='3'&&a[i+1]=='.'&&a[i+2]='1'&&a[i+3]=='4')
        {
            b[i]='p'
            b[i+1]='i';



        }
        else





    }
}
int main()
{
    int i,j,k;
    char a[1000000];
    int testcases;
    cin>>testcases;
    for(i=1;i<=testcases;i++)
    {
        a[]=cin.getline();
        replacepi[a];
        cout<<"back in main"<<endl;
    }
    return 0;
}
