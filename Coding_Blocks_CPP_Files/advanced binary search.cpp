#include<iostream>
using namespace std;

int binarysearch(int a[],int n,int key)
{
    int s=0,e=n-1,m;
    int count1=0;
     int smallest,largest;
    while (s<=e)
    {

        m=(s+e)/2;
        if(a[m]==key)
            {
                count1++;/*check*/
                smallest=m;
                largest=m;
                for(int i=1;;i++)
                {
                    while(a[m-i]==key)
                    {
                        count1++;

                        smallest=m-i;
                        i++;
                    }
                    break;
                }
                for(int j=1;;j++)
                    {while (a[m+j]==key)
                {
                    count1++;

                    largest=m+j;
                    j++;
                }
                    break;
                    }
            break;/*check*/
            }
        else if(a[m]>key)
        {
            e=m-1;
        }
        else if(a[m]<key)
        {
            s=m+1;
        }
    }


    if(count1==0)
    {
        cout<<"-1 "<<"-1 "<<"0"<<endl;
        return -1;
    }

 int b[10000]={smallest , count1,largest};
        cout<<smallest<<" " <<largest<<" "<<count1<<endl;

        return -1;
}



int main()
{
    int s,e,i,j,k;
    int a[100000];

    int n;
    cin>>n;
    int key;
    //input key
    /*input sorted array*/
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>key;
    k=binarysearch(a,n,key);


    return 0;

}

