#include<iostream>
using namespace std;
#include<cstring>
int main()
{
   // cout<<"hello"<<endl;
    char a[100000];
    int j;
    int testcases;
    //cout<<"enter the number of testcases"<<endl;
    cin>>testcases;

    for(int i=1;i<=testcases;i++)
    {

         //cout<<"enter the number of rotations"<<endl;
        int N;
        cin>>N;
        //cout<<"enter a string here"<<endl;
        j=0;
        a[0]=cin.get();
        a[0]=cin.get();//plz check for this as this may be wrong on hackerrank
        while(a[j]!='\n')
        {

            j++;
            a[j]=cin.get();

        }
        a[j]='\0';

        int len=strlen(a);
        //cout<<len<<" represents the length of the string "<<endl;
        for(int k=len-N;k<len;k++)
        {
            cout<<a[k];
        }
        for(int l=0;l<len-N;l++)
        {
            cout<<a[l];
        }
        cout<<endl;

    }//loop ends
    return 0;
}
