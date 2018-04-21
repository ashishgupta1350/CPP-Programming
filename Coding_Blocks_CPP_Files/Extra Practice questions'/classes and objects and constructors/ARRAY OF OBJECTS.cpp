#include<iostream>
using namespace std;
class employee
{
private:
    char name[50];
    int age;
public:
    void getdata();
    void putdata();

};

void employee::getdata()
{
    cout<<"Enter the name : "<<endl;
    cin>>name;
    cout<<endl<<"Enter the age of the employee : "<<endl;
    cin>>age;
    cout<<endl;
}
void employee::putdata()
{
    cout<<"The name of employee : "<<name<<endl;
    cout<<"the age of employee : " <<age<<endl;
    cout<<endl;

}



int main()
{
    employee member[10];
    cout<<"enter the number of employees whose data you want to enter[<10] "<<endl;
    int count;
    cin>>count;
    for (unsigned int i=0;i<count ;i++)
    {
        member[i].getdata();

    }
    //do{
    cout<<" lets put out the data u entered "<<endl;

    for(unsigned int j=0;j<count;j++)
    {
     member[j].putdata();
    }

    //cout<<"do you want to edit "<<endl;


    return 0;
}
