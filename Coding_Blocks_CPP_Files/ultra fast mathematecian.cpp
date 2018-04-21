#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    string a,b;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cin>>a;
        cin>>b;
        j=0;
        while(a[j]!='\0'&&b[j]!='\0')
        {
            if(a[j]==b[j])
            {
                a[j]='0';
            }
            else a[j]='1';
        j++;
        }
        cout<<a<<endl;


    }






    return 0;
}
