#include<iostream>

using namespace std;

int factorial(int x){
    int i;
    int product =1;
      for(i=1;i<=x;i++)

      product=product*i;


        return product;

}
int input(int N,int r)

{
     /*float num = factorial(N);
       float den1= factorial(N-r);
        float den2=factorial(r);

        float ans=num/(den1*den2);
        return ans;
*/



//shortcut
return factorial(N)/factorial(N-r)*factorial(r);
}


int main()

    {
        int N,r;
        cout <<"enter N , r to find nCr"<<endl;

        cin>>N>>r;
      float ans=input(N,r);

        cout<<ans << " is the value of "<<N<<"C"<<r<<endl;



        return 0;

    }


