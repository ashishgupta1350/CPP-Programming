#include<iostream>
using namespace std;
#include<cstring>
void replacepi(char a[],int i,int j,char c[],int size_arr)
{
    //base case
    if(i>=size_arr)
        return;
    //recursive case
    if(a[i]=='3'&&a[i+1]=='.'&&a[i+2]=='1'&&a[i+3]=='4')
    {
        c[j]='p';
        c[j+1]='i';
        replacepi(a,i+4,j+2,c,size_arr);
        return ;
    }
    else
    {
        c[j]=a[i];
        replacepi(a,i+1,j+1,c,size_arr);
        return;
    }
}
int main()
{
    int testcases;
    //cout<<"Enter the number of testcases"<<endl;
    cin>>testcases;
   // char a[100000],c[100000];//later increase its size.
    cin.get();
    for(int k=1;k<=testcases;k++)
    {
        char a[100000],c[100000];

                //later increase its size.

      //  cout<<"enter a string "<<endl;
        //if(k=1)
      //  cin.get();
        cin.getline(a,1000000);
        int size_arr=strlen(a);
        //cout<<"string is :: "<<a<<"and size is "<<size_arr<<endl;
        int i=0;
        int j=0;
        replacepi(a,i,j,c,size_arr);
        //cout<<c<<":   is the required string."<< endl<<endl<<endl;
        for(int m=0;m<strlen(c);m++)
        {
            c[m]='\0';
        }
    }
    return 0;
}
