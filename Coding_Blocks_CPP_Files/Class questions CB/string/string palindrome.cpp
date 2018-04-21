#include<iostream>
using namespace std;
int main()
{

    int a[1000],count1=0;
    int i=0;

    while(a[i]!='\n')
    {
        i++;
        a[i]=cin.get();

        count1++;


    }
    count1--;

    int flag=0;
    int j;
    for(i=0,j=count1-1;i<=(count1-1)/2;i++,j--)
    {
        if(a[i]==a[j])
        {
            continue;

        }
        else
        {
            flag++;

        }

    }

    if(flag==0)
    {
        cout<<"a palindrome"<<endl;
    }
    else
        cout<<"not a palindrome"<<endl;

    return 0;
}
