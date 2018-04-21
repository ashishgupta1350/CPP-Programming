#include<iostream>
#include<iomanip>//for setw
using namespace std;
int main()
{
    /*int num_prt=143259;
    cout<<setw(8)<<num_prt<<endl;

    cout<<setw(8)<<43<<endl;

    cout<<endl;
    int i=0;
    i=400*400/400;
    cout<<i<<endl;
*/
    int i=5;
    while(i)
    {
        switch(i)
        {
        default:
        case 4:
        case 5:
            cout<<"in 5"<<endl;
            break;
            case 1:
                //cout<<"hi continue"<<endl;
                continue;
            case 2:
            case 3:
                break;
        }
        cout<<"hi i"<<endl;
        i--;
        }



return 0;

}
