#include<iostream>

using  namespace std;

int main()
{
    int i,j;
    char alp='A';
    for(i=5;i>=1;i--)
    {   alp='A';

        for(j=1;j<=i;j++)
           {
        cout<<alp;
        alp=alp+1;
           }
        alp--;

    for (j=1;j<=i;j++)
    {
        cout<<alp;
        alp--;

    }
    cout<<'\n';

    }
    return 0;
}
