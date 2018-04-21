#include<iostream>
using namespace std;
void reverseword(char a[]);
{

    int i=1;
    int ab[100000];
    a[0]=cin.get();
    ab[0]=0;
    int flag=0;
    int j=1;
    while(a[i]!='\n')
        {
            a[i]=cin.get();
            if(a[i]==" ")
            {
               ab[j]=i;
               j++;
            }
            if(a[i]='\n')
                a[j]=i;
                flag=i;
        }
        for(j=flag;)
        for(i=flag;i>=j;i--)
            coot

    return;
}
int main()
{
    char ch[100000];


    reverseword(ch);

    return 0;

}
