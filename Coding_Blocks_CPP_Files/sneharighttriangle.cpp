#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x1=0,x2=0,x3=0;
    int y1=0,y2=0,y3=0;

    int i,j,k;
    int count1=0;
    int n;
    cin>>n;


    for(i=1;i<=n;i++)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;

    float a=(pow(y2-y1,2)+pow(x2-x1,2));

    float b=(pow(y3-y1,2)+pow(x3-x1,2));

    float c=(pow(y3-y2,2)+pow(x3-x2,2));
            if(a+b==c||a+c==b||b+c==a)
                {count1++;}

    }
cout<<count1<<endl;

}
