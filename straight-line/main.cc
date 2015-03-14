#include <iostream>
#include <cmath>

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

    if(y1 == y2)
    {
        std::cout << "y = " << y1 << std::endl;
    }
    else if(x1 == x2)
    {
        std::cout << "x = " << x1 << std::endl;
    }
    else
    {
        m = (y2-y1)/(x2-x1);
        b = y1 - m*x1;

        char op ='+';
        if (b<0)
        {
            op ='-';
            b = std::abs(b);
        }
        
        if( m == 1 && b==0)
         {
             std::cout << "y = x " <<std::endl;
         }
        else if( m == 1)
        {
             std::cout << " y = x"<<op << b << std::endl;

        }
        else if(b==0)
        {
            
             std::cout << "y = x" << m << std::endl;

        }
       else
       {
           std::cout << "y = " <<  m << * "x"<< op << b << std::endl;
       }
    
   }
    
    return 0;
}
