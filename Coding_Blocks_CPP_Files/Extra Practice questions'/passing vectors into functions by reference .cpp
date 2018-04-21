#include<iostream>
#include<vector>
using namespace std;

void fillvector(vector<int>&);
void printvector(const vector<int>&);
void printrevvector(const vector<int>&);
void printeven(vector<int>&);
//printeven print only even numbers
// @param vector<int>& prints the even
void replacevector(vector<int>&);
//replace vector -- replaces a value to new one
//@param vector<int>& --  vector values to be replaced

int main()
{

    vector<int> myvector;
    fillvector(myvector);
    printvector(myvector);
    replacevector(myvector);
    printrevvector(myvector);
    printeven(myvector);
    replacevector(myvector);
    return 0;
}

void fillvector(vector<int>& mynewvector)
{
    int input=0;
    cout<<"input until -1 is encountered "<<" ";
    cin>>input;
    //mynewvector.push_back(input);
    while(input!=-1)
    {

        mynewvector.push_back(input);
        cin>>input;

    }
    cout<<"vector : ";
}

void printvector(  const  vector<int>& mynewvector)
{
    for(unsigned int i=0;i<mynewvector.size();i++)
    {
        cout<<mynewvector[i]<<" ";
    }
    cout<<endl;
}

void printrevvector(const vector<int>& mynewvector)
{
    for(unsigned int i=mynewvector.size();i>0;i--)
    {
        cout<<mynewvector[i-1]<<" ";
    }
    cout<<endl;


}

void printeven( vector<int>& mynewvector)
{
    cout<<"Even : ";
    for(unsigned int i=0;i<mynewvector.size();i++)
    {
        if(mynewvector[i]%2==0)
        {
            cout<<mynewvector[i]<<" ";
        }
    }
    cout<<endl;
}

void replacevector(vector<int>& newvector)
{
    int old,repl;
    cout<<"type in number to be Replaced to another number (also type in)"<<endl;
    cin>>old;
    cin>>repl;
    for(unsigned int i=0;i<newvector.size();i++)
    {
        if(newvector[i]==old)
            newvector[i]=repl;
    }
    printvector(newvector);
    cout<<endl;


}
