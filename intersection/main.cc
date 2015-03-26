#include <iostream>

double line_is_horizontal( double y1, double y2)
{

    if(line_is_horizontal(y1,y2))
    {
        std::cout << "y = " << y1 << std::endl;
    }
    else
    {
        std::cout << "the line is not horizontal" << std::endl;
    }
    return y1;
}

int main ( int argc, char * argv[])
{
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
    double m1;
    double m2;
    double b1;
    double b2;
    double i;

    std::cout << "Enter x1: ";
    std::cin >> x1;

    std::cout << "Enter y1: ";
    std::cin >> y1;

    std::cout << "Enter x2: ";
    std::cin >> x2;

    std::cout << " Enter y2: ";
    std::cin >> y2;

    std::cout << "Enter x3: ";
    std::cin >> x3;

    std::cout << "Enter y3: ";
    std::cin >> y3;

    std::cout << "Enter x4: ";
    std ::cin >> x4;

    std::cout << "Enter y4: ";
    std::cin >> y4;

    if ( x1==x2 && y1 ==y2)
    {
        std::cout << "The two lines are parallel" << std::endl;
    }
    else
    {
        m1 = y2-y1/x2-x1;
        m2 = y4-y3/x4-x3;
        b1 = y1 - m1*x1;
        b2 = y3 - m2*x3;
        i = (((x1*y2) - (y1*x2)) - (x1-x2)*((x3*y4) - (y3*x4))/(x1-x2)*(y3-y4) - (y1-y2)*(x3-x4),((x1*y2-y1*x2)*(y3-y4)) - ((y1-y2) -(x3*y4 - y3*x4))/(x1-x2)*(y3-y4) - (y1-y2)*(x3-x4));

        
        if( m1 == m2 && b1 == b2)
        {
            std::cout << "The two lines are identical" <<std::endl;
        }
        else
        {
            std::cout<<"The slope of first line is: " << m1 <<  std::endl;
            std::cout<<"The slope of second line is: " << m2 << std::endl;
            std::cout <<"The first constant is: " << b1 << std::endl;
            std::cout << "The second constant is: "<< b2 << std::endl;
            std::cout<<"The point of intersection is: " << i << std::endl;
        }
    }


        return 0;


}



