#include <iostream>
using namespace std;

int power(int, int);

int main()
{
   int n, sum = 0, temp, remainder, digits = 0;
    int N,i;
   cin>>N;
   for(i=1;i<=N;i++)
    {
        sum=0;
        digits=0;

   cin>>n;

   temp = n;
   // Count number of digits
   while (temp != 0) {
      digits++;
      temp = temp/10;
   }

   temp = n;

   while (temp != 0) {
      remainder = temp%10;
      sum = sum + power(remainder, digits);
      temp = temp/10;
   }

   if (n == sum)

      {     if(sum<=9)
            cout<<"No"<<endl;
            else
          cout<<"Yes"<<endl;

      }
   else
      cout<<"No"<<endl;
    }
   return 0;
}

int power(int n, int r) {
   int c, p = 1;

   for (c = 1; c <= r; c++)
      p = p*n;

   return p;
}
