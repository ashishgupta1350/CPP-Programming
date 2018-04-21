#include<iostream>

using namespace std;
#include <climits>

int main()

{
    int num,N;
    int i,j;
    int largest=INT_MIN,smallest=INT_MAX;


    int arr[1000];
    cout<<"How many Numbers to check??";

    cin>>N;
    for(i=0;i<N;i++)
        {
            cout<<"enter number :"<<i<<endl;

            cin>>arr[i];

        }

        for (j=0;j<N;j++)
        {
            if(arr[j]>arr[j+1])
                largest=arr[j
                ];
            else
                continue;

        }


    cout<<"largest number is"<<largest<<endl;

    return 0;

}
