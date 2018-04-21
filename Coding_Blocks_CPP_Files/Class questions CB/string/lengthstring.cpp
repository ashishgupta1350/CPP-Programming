#include<iostream>
using namespace std;
int main()
{666
    int a[1000],count1=0;
    int i=0;
    while(a[i]!='\n')
    {
        i++;
        a[i]=cin.get();
        a[i]=cin.get();
        count1++;
    }
    count1--;
    cout<<count1;

    return 0;
}
