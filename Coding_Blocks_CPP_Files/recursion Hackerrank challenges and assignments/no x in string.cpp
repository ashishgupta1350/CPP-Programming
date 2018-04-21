#include<iostream>
using namespace std;
#include<cstring>
void noX(char a[],int i,int n)
{

    if(i==n)
        return;
    int j;
    if(a[i]=='x')
       {
            for(j=i;j<=n;j++)
        {
            a[j]=a[j+1];


        }

        return noX(a,i,n-1);

    }
    else if(a[i]!='x')
            return noX(a,i+1,n);




}
int main()
{
    char a[100000];
    cout<<"enter a string"<<endl;
    cin>>a;
    int n=strlen(a);//check this for n-1
    noX(a,0,n);
    cout<<a<<endl;
    return 0;

}
