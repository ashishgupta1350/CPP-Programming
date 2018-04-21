#include<iostream>
using namespace std;
int main()
{

    int i,j;
    int testcases;
    cin>>testcases;
    for(int k=1;k<=testcases;k++)
    {
    int i=0;
    char a[1000][1000];//done with the help of 2 d array . now what i did was simple
    int ch='0';         //we know cin takes words and skips spaces and breaks that string . so to input multiple strings i
                        //did initialise a 2 d array and printed indivisual strings.bye..

    while (ch!='\n')
    {
        cin>>a[i];
        ch=cin.get();
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
