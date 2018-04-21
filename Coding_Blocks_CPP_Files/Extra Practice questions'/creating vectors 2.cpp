#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> myvector;
    myvector.push_back(9);
    myvector.push_back(1);
    myvector.push_back(5);
    myvector.push_back(3);
    myvector.push_back(12);
    myvector.push_back(8);
    cout<<"vector : " ;
    for(unsigned int i=0;i<myvector.size();i++)
    {
        cout<<myvector[i]<<" ";
    }
    cout<<myvector.at(2)<<" the element at index 2"<<endl;
    myvector.insert(myvector.begin()+2,5);
    cout<<endl;
        for(unsigned int i=0;i<myvector.size();i++)
    {
        cout<<myvector[i]<<" ";
    }
    if(myvector.empty())
    {
        cout<<"empty"<<endl;

    }
    else
        cout<<"not empty"<<endl;
    myvector.erase(myvector.begin()+2);
    for(unsigned int i=0;i<myvector.size();i++)
    {
        cout<<myvector[i]<<" ";
    }
    myvector.clear();
        for(unsigned int i=0;i<myvector.size();i++)
    {
        cout<<myvector[i]<<" ";
    }
    cout<<endl;
    if(myvector.empty())
    {
        cout<<"empty"<<endl;

    }
    else
        cout<<"not empty"<<endl;

    return 0;
}
