#include<iostream>
using namespace std;
#include<algorithm>
#include<cstdlib>
#include<cstring>
int main()
{
    int testcases;
        //cout<<"enter the number of testcases"<<endl;
    cin>>testcases;
    char *str[1000];
    char name[1000000];
    char *ptr;

    for(int n_test=1;n_test<=testcases;n_test++)
    {
        int i=0;
        char test='y';
        //cout<<"enter string seperated properly with spaces"<<endl;
        while(test!='\n')
        {

            cin>>name;
            int len=strlen(name);
            //cout<<name<<" is string and "<<len<<" is length"<<endl;
            ptr =(char *)malloc(len+1);
            strcpy(ptr,name);
            //cout<<ptr<<" is the above and "<<endl;
            str[i]=ptr;
            i++;
            test=cin.get();
        }
        for(int l=i-1;l>=0;l--)
        {
            cout<<str[l]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
