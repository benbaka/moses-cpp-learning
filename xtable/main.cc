#include <iostream>
#include <iomanip>

int main(int argc, char *argv[])
{
    std::cout << "     |";
    for (int x = 1; x<=12; ++x)
    {
        std:: cout <<std::setw(5)<< x <<"|";
        
    }
    std:: cout <<std::endl;

    for(int x = 0; x<=12; ++x)
    {
        std::cout << "-----+";
    }
    std::cout << std::endl;

    for(int y = 1; y<=12; ++y)
    {
        std::cout<<std::setw(5)<< y << "|";

        for (int x=1; x<=12; ++x)
        {
            std::cout<<std::setw(5)<<x*y << "|";
        }
        std::cout<< std::endl;

        for(int x =0; x<=12; ++x)
        {
            std::cout << "-----+";
        }
        std::cout <<std::endl;
    }

}
