#include<iostream>
using namespace std;
void mergesort(int* a,beg,last)
{
    ///base case
    if(beg>=last)
        return;
    ///recursive calls

    int mid=(beg+last)/2;
    mergesort(a,beg,mid);
    mergesort(a,mid+1,last);
    mergesortedarrays(a,a,mid,last-mid+1,last);


}
int main()
{
  int a[100]={5,4,3,2,1,0,-1,-2};
  for(int i=0;i<8;i++)
  {
      cout<<a[i]<<" ";

  }
    cout<<endl;


    return 0;
}
