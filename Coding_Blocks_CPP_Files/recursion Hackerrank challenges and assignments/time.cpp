#include<iostream>
using namespace std;
#include<algorithm>
#include<ctime>

int main()
{
    long long int a[100000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        a[i]=n-i;

    }

    clock_t t1,t2;
    t1=clock();
    sort (a,a+n);
    t2=clock();
   long double ans = t2-t1;
    cout<<t2-t1<<endl;
    cout<<ans<<endl;
    return 0;





}
