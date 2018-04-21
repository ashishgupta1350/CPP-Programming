#include<iostream>
#include<cstring>
using namespace std;
void strfind(char a[],char b[])
{
    int i=0,j=0,k1=0,k2=0;
    if(strlen(b)>strlen(a))
    {
        //cout<<"not present"<<endl;
        cout<<strlen(a)<<endl;//this was asked in question
        return;
    }
    else
    {
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]==b[j])
            {
                k1=i;
                k2=j;
                while (a[k1]!=NULL&&a[k2]!=NULL)
                {
                    if(a[k1]==b[k2])
                    {
                        k1++;
                        k2++;

                    }
                    else break;

                }
                if(k2==strlen(b))
                {
                   // cout<<"The string is found "<<endl;
                    cout<<i<<endl;//the index was asked in question
                   return;//to terminate program

                }


            }
        }




    }
    cout<<"not found anywhere in the string "<<endl;
    cout<<strlen(a)<<endl;

}
int main()
{
    //cout<<"Enter string 1"<<endl;
    char a[100009];//10 pow 5 +1
    char b[100009];
    cin.getline(a,100009,'\n');
   // cout<<"Enter second string that you want to find in String 1"<<endl;
    cin.getline(b,100009,'\n');

   // cout<<"the strings you entered are : "<<a<<" size is "<<strlen (a)<< " : and  :  "<<b <<" size is "<<strlen(b)<<endl<<endl;

    strfind(a,b);
    return 0;
}
