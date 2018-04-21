#include<iostream>
using namespace std;
int main()
{
    cout<<"first enter no of test cases \n then type in the number of times string has to be rotated\n then type in the string and pull enter"<<endl;
    int testcases;
    cin>>testcases;
    int str_rotcount;
    cin>>str_rotcount;
    int N=str_rotcount;
    char a[100000];

    for(int l=0;l<testcases;l++){
             cout<<"test"<<endl;
    int count1=0;
    int i=0;
    a[i]='h';
    a[i]=cin.get();

    i=1;
    while(a[i]!='\0')
    {
        a[i]=cin.get();
        i++;
        count1++;
    }

    for(int j=count1-N;j<=count1-1;j++)
    {
        cout<<a[j];
    }
    for(int k=0;k<count1-N;k++)
    {
        cout<<a[k];
    }
     cout<<"test"<<endl;
    cout<<endl;
    }

    return 0;
}
