#include<iostream>

using namespace std;

int main()
{
    int i,j;
    int count1=0;
    int countch=0;
    int countalp=0;
    int countdigit=0;
    char check;
    int countspace=0;


    for(i=1;;)
    {
        count1++;
            cin.get(check);

        if(check>='A'&&check<='Z'||check>='a'&&check<='z')
            countalp++;

        else if
            (check>='1'&&check<='9')
            countdigit++;

        else if(check==' ')
            countspace++;

        else
            countch++;

    if(check=='$')
    {
        break;
    }
    }
    cout<<"alphabets  : "<<countalp<<endl;

    cout<<"digits : "<<countdigit<<endl;

    cout<<"character : "<<countch-1<<endl;

    cout<<"Whitespaces : "<<countspace<<endl;


    cout<<"total  characters"<<count1-1;
    return 0;

}

