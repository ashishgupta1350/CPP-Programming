#include<iostream>
using namespace std;
int length_string(char a[],int size_max=10000)
{
    int count1=0;
    int i=0;
    a[0] = cin.get();

    while(a[i]!='\n')
    {
        i++;
        count1++;

        a[i]=cin.get();

    }

    cout<<count1<<endl;
    return count1 ;

}
void palindrome(char a[],int count1)
{
    int i=0;
    int j=count1-1;
    for(i=0;i<=count1/2;i++)
    {
        if(a[i]==a[j])
        {
            j--;
            continue;
        }
        else
            cout<<"no palindrome"<<endl;
        return ;
    }

    cout<<"palindrome"<<endl;

    return ;
}
int main()
{
    int i;char a[10000];

    int ans=length_string(a,10000);
    palindrome(a,ans);

    return 0;
}
