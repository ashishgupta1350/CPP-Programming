
#include<iostream>

using namespace std;

int main()
{
    int n,binno,mult=1;
    int sum=0;
    int i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=0;
        mult=1;

       for(j=1;;j++)
        {cin>>binno;
        sum=sum+((binno%10)*mult);
        mult=mult*2;
        binno=binno/10;

        if(binno/10==0)                      /*the code is giving a unwanted result that i cant understand*/
            {   cout<<sum;

                break;
           }
           }



    }


    return 0;

}
