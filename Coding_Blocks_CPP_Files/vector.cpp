#include<iostream>
using namespace std;
#include<vector>
void printvector(const vector<int>& mynewvector)
{
    for(unsigned int i=0;i<mynewvector.size();i++)
    {
        cout<<mynewvector[i]<<" ";
    }


    cout<<endl;
    return;
}

void checkempty(vector<int>& mynewvector)
{
    cout<<"check empty or not"<<endl;


        if(mynewvector.empty())
        {
            cout<<"empty"<<endl;
        }
    else
        cout<<"not empty"<<endl;

    cout<<endl;
}

void printeven(vector<int> mynewvector)
{
    cout<<endl<<"Even elements of array :"<<endl;
    for(unsigned int i=0;i<mynewvector.size();i++)
    {
        if(mynewvector[i]%2==0)
        {
            cout<<mynewvector[i]<<" ";
        }
        else
            cout<<" ";
    }

    cout<<endl;

}


int main()
{
        vector<int> myvector;

        checkempty(myvector);

        myvector.push_back(3);
        myvector.push_back(5);
         myvector.push_back(8);
        myvector.push_back(2);
         myvector.push_back(9);
        myvector.push_back(7);

        cout<<"vector : ";
        for(int i=0;i<myvector.size();i++)
        {
            cout<<myvector[i]<<" ";
        }
        cout<<endl;
        cout<<myvector.at(2)<< "  is the element at 2th index "<<endl;

        printeven(myvector);
        myvector[2]=999;
        printvector(myvector);


        cout<<endl<<endl;

        cout<<"insert"<<endl;
        myvector.insert(myvector.begin()+2,400);
        printvector(myvector);
        cout<<endl;
        checkempty(myvector);
        cout<<"erase"<<endl;

        myvector.erase(myvector.begin()+2);
        printvector(myvector);



        cout<<"before cleaning"<<endl;
        myvector.clear();
        printvector(myvector);
        cout<<" after cleaning"<<endl;

        checkempty(myvector);
        cout<<endl;


    return 0;
}
