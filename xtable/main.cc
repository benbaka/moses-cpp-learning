#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "|";
    for (int x = 1; x<=12; ++x)
    {
        cout <<x <<"|";
        
    }
    cout << endl;

    for( int x = 0; x<=12; ++x)
    {
        cout << "+";
    }
    cout << endl;

    for( int y = 1; y<=12; ++y)
    {
        cout<< y << "|";

        for (int x=1; x<=12; ++x)
        {
            cout<<x*y << "|";
        }
        cout<< endl;

        for(int x =0; x<=12; ++x)
        {
            cout << "----+";
        }
        cout <<endl;
    }

}
