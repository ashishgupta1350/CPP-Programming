#include<iostream>

using namespace std;

int main()
{
    char ch;
    int i,j,k,l;
    int x=0;
    int y=0;

    while(ch!=' '&&ch!='\n')
      {ch=cin.get();

        if(ch=='N')
        x++;

        else if(ch=='S')
        x--;

        else if(ch=='E')
        y++;

       else if(ch=='W')
        y--;



      }
      cout<<x<<" is x" <<y<< " is y"<<endl;

      if(x>0)
      {
          for(i=1;i<=x;i++)
            cout<<"N";

      }

      if(x<0)
      {
          for(i=x;i<=-1;i++)
            cout<<"S";

      }
      if(y>0)
      {
          for(i=1;i<=y;i++)
            cout<<"E";

      }
      if(y<0)
      {
          for(i=y;i<=-1;i++)
            cout<<"W";
      }

    return 0;
}
