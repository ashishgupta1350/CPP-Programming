// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int a,int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
int count1=0;
    // Print all prime numbers
    for (int p=a; p<=n; p++)
       if (prime[p])
          {
          count1++;}
          if(a==1)
            cout<<count1-1<<endl;
          else
          cout<< count1<<endl;
}

// Driver Program to test above function
int main()
{
    int n,a,testcase;
    cin>>testcase;
   for(int i=1;i<=testcase;i++)

        {

        cin>>a>>n;
        SieveOfEratosthenes(a,n);
        }
    return 0;
}
