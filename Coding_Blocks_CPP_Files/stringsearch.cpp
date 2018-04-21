#include<iostream>
using namespace std;
#include<cstring>
#include<algorithm>
int main()
{
    char a[100000],b[100000];
    //char b[]="bcad";
        int size_a,size_b;
        //cout<<"enter first string: "<<endl;
        cin>>a;
        size_a=strlen(a);
        //cout<<size_a<<" is the size"<<endl;

        //cout<<"enter second string: "<<endl;
        cin>>b;
        size_b=strlen (b);
        //cout<<size_a<<" is the size"<<endl;

        sort(a,a+size_a);
        sort(b,b+size_b);
    //cout<<a<<" and "<<b<<endl;
    int ans=strcmp(a,b);
            if(ans==0)
        cout<<ans+1<<endl;
        else
            cout<<"0"<<endl;

            return 0;



}
