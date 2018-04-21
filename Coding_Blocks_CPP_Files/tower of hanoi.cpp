#include <iostream>
using namespace std;

void towers(int, char, char, char);

int main()
{
    int num;

    //cout<<"Enter the number of disks : "<<endl;;
    cin>>num;
    //cout<<"The sequence of moves involved in the Tower of Hanoi are :n"<<endl;
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        cout<<"Moving ring "<<num<<" from "<<frompeg<<" to "<<topeg<<endl;
        return;
    }
    towers(num - 1, frompeg, topeg, auxpeg);
    cout<<"Moving ring "<<num<<" from "<<frompeg<<" to "<<topeg<<endl;
    towers(num - 1, topeg, auxpeg, frompeg);
}
