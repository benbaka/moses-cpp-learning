#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int x1;
    int y1;
    int x2;
    int y2;
    int m;
    int b;

    cout << "Enter x1: ";
    cin >> x1;

    cout << "Enter y1: " ;
    cin >>y1;

    cout << "Enter x2: ";
    cin >> x2;

    cout <<"Enter y2: " ;
    cin >> y2;

    m =(y2-y1)/(x2-x1);
    b = y1 - m*x1;

    cout << "The gradient of the line is :" << m << endl;
    cout << "The intercept of the line is : " << b << endl;
    cout << "The equation of the line is :" << "y =" << m << * "x"<< "+" << b << endl;
}
