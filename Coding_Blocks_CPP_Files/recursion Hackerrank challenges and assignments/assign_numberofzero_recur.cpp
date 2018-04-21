#include<iostream>
using namespace std;
int count_zero(int m)
{
   if(m==0)
   {
       return 0;
   }
   if(m%10==0)
    return 1+count_zero(m/10);
   else
   return count_zero(m/10);


}
int main()
{
   int num;
   cout<<"enter a number to calculate number of zeros in it"<<endl;
   cin>>num;
    int ans=count_zero(num);
    cout<<ans<<endl;
    return 0;
}
