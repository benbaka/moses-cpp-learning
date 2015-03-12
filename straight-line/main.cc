#include <iostream>

int main(int argc, char *argv[])
{
    double x1;
    double y1;
    double x2;
    double y2;
    double m;
    double b;

    std::cout << "Enter x1: ";
    std::cin >> x1;

    std::cout << "Enter y1: " ;
    std::cin >>y1;

    std::cout << "Enter x2: ";
    std::cin >> x2;

    std::cout <<"Enter y2: " ;
    std::cin >> y2;

     // m =(y2-y1)/(x2-x1);
     // b = y1 - m*x1;

    if(y1 == y2)
    {
        std::cout << "y = " << y1 << std::endl;
    }
    else if(x1 == x2)
    {
        std::cout << "x = " << x1 << std::endl;
    }


   // cout << "The gradient of the line is :" << m << endl;
   // cout << "The intercept of the line is : " << b << endl;
   // cout << "The equation of the line is :" << "y =" << m << * "x"<< "+" << b << endl;

    return 0;
}
