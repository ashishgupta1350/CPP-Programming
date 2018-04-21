#include<iostream>
using namespace std;

int main()
{
    float c,f;
    float initial,final1,step;
    int result;
    int i;
    cout<<"enter initial,final,step"<<endl;
    cin>>initial>>final1>>step;

    for (i=initial;i<=final1;i=(i+step))
    {
        result=((5/9.0)*i-32.0);
        cout<<i<<"farheniet" <<" "<<result<<"degree celcius"<<endl;
    }
    return 0;
}
