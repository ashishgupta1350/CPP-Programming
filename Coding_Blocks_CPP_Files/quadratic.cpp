#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float N,a,b,c;
    float r1,r2;
    float roots;
    int D;

    cin>>a>>b>>c;
    D=((b*b)-(4*a*c));

    if(D>0)
        cout<<"Real and Distinct"<<endl;
    if(D==0)
        cout<<"Real and Equal"<<endl;

    if(D<0)
        {
            cout<<"Imaginary"<<endl;
        return 0;
        }

        r1=((-b+(sqrt (D)))/2*a);
        r2=((-b-(sqrt (D)))/2*a);

        cout<<r2<<" "<<r1<<endl;

    return 0;

}
