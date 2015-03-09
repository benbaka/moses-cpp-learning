#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    double x1;
    double y1;
    double x2;
    double y2;
    double m;
    double b;

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

    if(m == 0)
    {
        std::cout << "y = " << b << std::endl;
    }
    else
    {
        std::cout << "y = " << m << "x + " << b << std::endl;

    }

    cout << "The gradient of the line is :" << m << endl;
    cout << "The intercept of the line is : " << b << endl;
    cout << "The equation of the line is :" << "y =" << m << * "x"<< "+" << b << endl;
}
